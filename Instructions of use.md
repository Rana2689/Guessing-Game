These are the main ways to execute it:

1 Windows
Install MinGW, which includes the g++ compiler

Open a terminal or command prompt

Navigate to the directory where your .cpp file is

Use the following command to compile: g++ adivinanzas.cpp -o name_of_the_executable.exe

If you do not include -o executable_name.exe, the executable will be generated as a.exe by default. Run the .exe file by writing: executable_name.exe

2 Linux/MacOS
Use the terminal and navigate to the directory where your .cpp file is

Compile the file with the following command:
g++ adivinanzas.cpp -o name_of_the_executable

On Linux and Mac, the .exe is not necessary, so you can run with:
./name_of_the_executable

3 Using IDEs like Code::Blocks, Visual Studio or Dev-C++

Open your project in the IDE

Make sure the setting is set to "Release" to create an .exe file

Compile and run the project. The IDE will generate the executable file in the project output folder

To run the created Linux executable, you must run chmod -x executable_name.exe so that it can be run
