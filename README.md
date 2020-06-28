# NoobEncryption

![N|](https://image.flaticon.com/icons/svg/3068/3068088.svg)

NoobEncryption is a small console-based tool for windows which allows you to Encrypt Files Which are Unicode Encoded. It is free and open source so, you can also make your own version or contributing it by Improving and adding more features to it...

# Features!

  - Fast and efficient
  - Define Custom encryption values so that it will hard to bruteforce
  - Open-source!
  - Easy to use commands

### Made Possible Due to:

NoobEncryption some open source libraries to work properly:

* [Termcolor](https://github.com/ikalnytskyi/termcolor) - Open source terminal color library

And of course NoobEncryption itself is open source on GitHub.

### Installation
NoobEncryption requires [C++ runtime library](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads) to run.

Just Pull the repository by gitclone command or just download the Zip file to Rock!

```sh
gitclone https://github.com/n00b-spectre/NoobEncryption/
cd NoobEncryption/Binaries
./NoobEncryption_released.exe
```
or you can run it manually by heading to the Binaries folder and clicking on NoobEncryption_released.exe

# Development

Want to contribute? Didn't Expect that but, Great!

### Prerequisites
You need a C++ Compiler to compile the source code. I recommend [MinGw GCC](http://www.mingw.org/) compiler due to it's simplicity. 
To check if it's installed properly, type this command

```sh
g++ --version
```
On typing this command if you see any errors then MinGw Compiler is not installed in the environment variables.

### Install MinGw GCC Compiler (optional)
**For Windows ->**
- Download Latest version of [MinGw Compiler](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/6.3.0/threads-posix/) for 64bit windows
- Make sure it is installed in Root directory of c: drive (for windows)
- open MinGw/bin folder copy the path (C:MinGw/bin)
- Go to properties of **This PC** then to **Additional Settings** and to **Enviroment variables** tab
- Then under **System variables** search for **path** and click on **edit**.
- A New Window will Pop-up, click on **New** and paste the path you just copied.
- Apply and close all the windows
- open terminal/CMD and repeat the same command you should good to go now.

**For Linux ->**

- Open Terminal and type the following command to install it completely

```sh
sudo apt-get install g++-mingw-w64 && sudo apt-get install gcc-mingw-w64
```
### Accessing Source code

- Open Any IDE or text editor, [Sublime text](https://www.sublimetext.com/) recommended.
- Head to Source/Source code and open **NoobEncryption.cpp** to get started
- To compile the source file just open Terminal/CMD and type the following command
 ```sh
 g++ NoobEncryption.cpp -o Compiled && ./Compiled
 ```
 - You will get a .exe which you can run directly by clicking on it on windows 
 
**you can contribute it by pushing Modified file with additional features or bug fix to the Github repository.**

- Git flags such as -o is for custom file name. You can set additional flags such as -static-libgcc and -static-libstdc++ to link it statically

## Important 
Do not forget to hide the **Pre-processing_values.nob** file if you are Encrypting files and distributing it, because it is the dictionary for encryption values. Think it as the source code of the encryption that you do not want to share it with anyone. If you are mass-sharing any file and want to encrypt particular data then this encryption can come in handy. Just share the Pre-Processing values with the person you want to share the secret data.

You can find many useful functionality of this Application in your day-to-day life if you are not a N00B...

**Free Software, Hell Yeah!**
