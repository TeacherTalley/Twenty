### Updgrade to ISO STD C++ 20

**VSCode**

Go to extensions, then type ms-vscode.cpptools in the search bar.

Click on the C/C++ extension, and to the right of Uninstall, there should be a gear icon. Click it.

A dropdown menu should open. Select Extension Settings.

Now click in the search bar (sometimes it makes you click twice before you can type without replacing the extension filter) and type  cppStandard.

From here, you should see two options, one for Cpp Standard, and one for C Standard.

Change Cpp Standard to your desired version. We will use c++20.

[Stack Overflow Reference](https://stackoverflow.com/questions/66680147/how-can-i-change-the-version-of-the-c-language-standard-used-in-vs-code)

**Visual Studio 2022 on Windows**

Go to Properties/C++ and changes your compiler to ISO C++ 20 Standard.
![Image of compiler setting](VisualStudio-Windows-compiler.jpg)
