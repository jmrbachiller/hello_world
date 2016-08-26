/*
    https://code.visualstudio.com/docs/languages/cpp
    https://code.visualstudio.com/docs/introvideos/debugging
*/

#include <stdio.h>

int main()
{
    char n[20];
    printf("What's your name? ");
    scanf("%19s", n);
    printf("Hello %s, welcome to Visual Studio Code in Linux\n", n);
    return 0;
}