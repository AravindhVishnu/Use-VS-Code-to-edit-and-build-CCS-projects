# Use-VS-Code-to-build-CCS-projects
Example of how to use VS Code to build Code Composer Studio C/C++ projects

Description: Visual Studio Code is a more pleasant development environment to work with than Code Composer Studio.
This example shows how VS Code can be used for building CCS C/C++ projects. It does not show how to
debug from VS Code.

Instructions: 
1) Rename the vscode folder to .vscode
2) HelloWorldRTOS.code-workspace is the VS Code workspace file. Open it to open VS Code.
3) Open the c_cpp_properties.json file in .vscode folder. Set all the project include paths, 
defines, compiler path, cStandard, cppStandard and intelliSenseMode
4) All the build tasks (build, clean and rebuild) are configured in the tasks.json file in the .vscode folder.

Example project info:
The HelloWorldRtos example project is setup as a TI RTOS project. It is configured to be built for the 
Industrial Communication Engine (ICE) V2 development board with the Sitara AM3359 processor.
Version 8.2 of Code Composer Studio is used.

Note: Tested on Windows 10
