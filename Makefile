CPP=$(filter-out exercices_src/_tests/%, $(wildcard exercices_src/*.cpp exercices_src/*/*.cpp))
#CPP=$(wildcard exercices_src/*.cpp exercices_src/*/*.cpp)

import_from_wims:
	python3 tools/import_from_wims $(CPP)

test:
	pyflakes template/wims_builder.py template/graderCpp.py template/wims.py
	cd template; python -m doctest -o NORMALIZE_WHITESPACE -o ELLIPSIS wims_builder.py
	cd template; python -m doctest -o NORMALIZE_WHITESPACE -o ELLIPSIS  graderCpp.py
	cd template; python -m doctest -o NORMALIZE_WHITESPACE -o ELLIPSIS wims.py
	cd exercices_src; make test
