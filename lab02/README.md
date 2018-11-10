# Lab 2
This lab is introduction to compiling and working with C++.

## Compilation

### Basic
```g++ hello.cpp -o hello``` - compiles the hello.cpp source code into an executable "hello".
```./hello``` - executes the newly compiled "hello" executable and prints "Hello, World!" to the standard output (the console).

### Compilation and Linking
```
g++ -c hello.cpp
g++ hello.o -o hello
```
```./hello``` - executes the newly compiled "hello" executable and prints "Hello, World!" to the standard output (the console).

You can use a shorter syntax to compile the source and link it directly to an executable:
```
g++ hello.cpp -o hello
```
### Installation
Installing an command-line application on a POSIX system (Linux, MacOS  etc) is simple - you just need to place the executable file to a location where the shell can access it, in our case - ```/usr/local/bin/```.

You can either copy/move the executable there or create a symbolic link. The second approach will create a virtual file on the selected location that points to the physical file you compile. This way, whenever you override the compiled executable with the commands above you will also update the version accessible in the shell via ```/usr/local/bin/```.
```
sudo ln -sf $(pwd)/hello /usr/local/bin/
```
The command above consists of several components:
* ```sudo``` means "super-user do" and is required to execute the following command as a super user. This will allow you to write to otherwise protected location such as ```/usr/local/bin```.
* ```ln``` is actually the program (i.e. command) that creates links. Everything else is actualy command-line arguments to that command - you will learn more about those and how to use them in your own programs later.
* ```-sf``` are two flags. The first one - ```s``` - instructs the program to create a soft link. The second one - ```f``` instructs the program to override any existing link on the target location.
* ```$(pwd)/hello``` is the full path to the local file ```hello``` - our executable. We need to pass the absolute path to the file, that is why we combine it with by taking the output of the ```pwd``` command - the current working directory - with the name of the file. If our program has a different name, we will change the "hello" part.
* ```/usr/local/bin/``` is the target location. In the specified directory the command will create the link to our file.

After you have executed the command above successfully, you can use the ```hello``` program the same way you are using ```pwd``` or ```ls```.

> Congratulation! You have created your first real C++ program and installed it on a real Linux system. 
