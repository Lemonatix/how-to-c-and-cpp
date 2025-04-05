# How to C and C++

Welcome to the **How to C and C++** repository. This project is a personal learning journey to explore and master the fundamentals of C and C++. It is also designed to serve as a resource for others (you reading this) who want to learn these powerful programming languages too.

## Topics Covered

- Basics of C and C++ (syntax, variables, data types)
- Control structures (loops, conditionals)
- Functions and modular programming
- Pointers and memory management
- Object-Oriented Programming in C++
- Standard Template Library (STL)
- File I/O and more!

## Cloning the repository

### Linux/Windows/macOS

1. Open a terminal.
2. Navigate to the directory where you want to clone the project. Either in your explorer/file manager, e.g for linux:

   ```bash
   cd /home/user/my_c_cpp_project
   ```

3. Use the following command:

   ```bash
   git clone https://github.com/Lemonatix/how-to-c-and-cpp.git
   ```
   or with SSH:
   ```bash
   git clone git@github.com:Lemonatix/how-to-c-and-cpp.git
   ```
   
You can also copy these shell commands on the <> Code button.

## How to compile and run files
### Standard way for Linux/MacOS

1. Compile file with
```c
gcc file.c -o file
```
or for c++

```cpp
g++ file.cpp -o file
```

2. Run file by using
```cpp
./file
```
### Windows
just add .exe for compile
```c++
g++ file.cpp -o file.exe
/* run the file with */
file.exe
```

### Compile with make
[![C/C++ CI](https://github.com/Lemonatix/how-to-c-and-cpp/actions/workflows/c-cpp.yml/badge.svg?branch=main)](https://github.com/Lemonatix/how-to-c-and-cpp/actions/workflows/c-cpp.yml)

If you are familiar with make you can use 
```c
make -C c
make -C c++
```

or if you are in one of the directories

```c
make
```

to compile the files.

## Contributing

Contributions are welcome. If you have suggestions, corrections, or additional examples, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

Happy coding!
