// step by step process on how to setup vscode for running the c programming language, after installing the mingw compiler that was sent prior to this documentation.

1. Extract the minGW file from the zip and place the **extracted** folder in 'Program Files' in your 'C/:' drive
2. In your windows start menu search for, "Environmental variables", select the first option that appears on the list
3. You would notice 2 sections, one for user and the other system
4. In system variables section, you would see 'PATH' on the list select it and click edit.
5. Then click the 'NEW' button and paste the file path `C:\Program Files\MinGW\bin`
6. Hit the 'APPLY' button then 'OK' button then 'OK' button till the setting closes.
7. Open CMD and enter `gcc --version`
8. If CMD displays a message with details of GCC you have successfully installed the compiler
9. Now Open vscode, look to the left hand-side panel, you would notice 4 blocks stacked, Select the fourth one which is for 'Extensions'
10. Type in 'Code Runner' in the extension search bar and then **install** the 'Code Runner' extension.
11. Create a new file (with the ".c" extension e.g 'hello.c') 
12. Look at your top right, you would see a play button,if your play button has a little insect on it, click the drop down and hit run code
14. If it does't have a bug(little insect) on it, just hit the play directly.

example of your first program in c to test if working (this is a program to print hello world)

#include <stdio.h>
int main()
    printf("Hello world!!");
    return 0;
}

---------------------------------------congratulations-------------------------------------------------------------------------------------------------------------
But hey if you could not get it done, there is no issue and no need to feel bad, feel free to contact anyone who did