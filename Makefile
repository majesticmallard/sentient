bake:
	cmake -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=1
	cd build && make
	./build/application/sentient

clean:
	rm -rf build/
