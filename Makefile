.PHONY: all clean distclean check build/all
all: build/all

build/all: build/build.ninja
	cmake --build build
	ln -fs build/compile_commands.json

build/build.ninja: build CMakeLists.txt
	cmake -S. -Bbuild -GNinja -DCMAKE_EXPORT_COMPILE_COMMANDS=YES -DCMAKE_BUILD_TYPE=Debug

build:
	test -d build || mkdir -p build

clean:
	cmake --build build --target clean

distclean:
	rm -rf build
	git ls-files -z --others | xargs -0 rm

build/CTestTestfile.cmake: build/all

check: build/CTestTestfile.cmake
	cd build && ctest
