import_from_wims:
	python tools/import_from_wims exercices_src/*.cpp

test:
	pyflakes template/graderCpp.py
	python -m doctest template/graderCpp.py
