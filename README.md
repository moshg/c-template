# C Template

Provides a template for modern C projects.

## Build

Requirements:

* [CMake](https://cmake.org/)

See CMake tutorial.

TODO: vcpkg

## Format

Requirements:

* [Clang](https://llvm.org/)

e.g. in order to format `helloworld.c`, run the command:

```sh
clang-format -i helloworld.c
```

## Generate documentation

Requirements:

* [Doxygen](https://www.doxygen.nl/index.html)

Run the command:

```sh
doxygen doxyfile
```

You can find the generated files in `build/doc`.
