import_from_wims:
	python tools/import_from_wims exercices_src/*.cpp

test:
	pyflakes template/builder.py template/graderCpp.py
	cd template; python -m doctest -o NORMALIZE_WHITESPACE builder.py
	cd template; python -m doctest -o NORMALIZE_WHITESPACE graderCpp.py
