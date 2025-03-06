CXXFLAGS=-Wall -pedantic -Wno-sign-compare -Wno-unused-value -std=c++17 -I ../template
LD=g++
SRC_FILES= $(wildcard *.cpp) $(filter-out _tests/%, $(wildcard */*.cpp))
EXE = $(SRC_FILES:.cpp=)

RANDOM_FILES = $(SRC_FILES:%=_tests/%)
RANDOM_EXE = $(RANDOM_FILES:%.cpp=%)
RANDOM_OUT = $(RANDOM_FILES:%.cpp=%.out)

all: $(EXEC_FILES)

test: _tests $(RANDOM_OUT)

.SECONDARY: $(RANDOM_FILES)

%: %.cpp ../template/randomization.h

_tests/%.cpp: %.cpp
	@echo randomize $<
	@mkdir -p `dirname $@`
	@python3 ../tools/randomize_code $< > $@

#_tests/%_silentcode.out: tests/%_silentcode
#	$< > $@          || (echo "ERROR: execution failed: $<"; exit -1)
#	test -z `cat $@` || (echo "ERROR: non silencieux: $<"  ; exit -1)

_tests/%.out: _tests/%.cpp
	@echo compile $<
	@$(CXX) $(CXXFLAGS) $< -o _tests/$*
	@echo execute _tests/$*
	@echo '0\n1\n2\n' | _tests/$* > $@          || (echo "ERROR: execution failed: $<"; exit -1)

_tests:
	mkdir $@

clean:
	rm -rf $(EXE)
	rm -rf _tests

