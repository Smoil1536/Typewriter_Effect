#include <stdio.h>
#include <winbase.h>

int main(void)
{
    char str[1000];
    int i = 0, j = 0;
    char ch;
    char command[8] = "color ";

    printf("Enter the text: ");
    fgets(str, 1000, stdin);
    system("cls");

    printf("In which colour you want it to print the text !\n\n");
    printf("[1] Blue       [2] Green\n[3] Aqua       [4] Red\n[5] Purple     [6] Yellow\n[7] Random\n\n>>> ");
    scanf("%c", &ch);

    
    if(ch >= 49 && ch <= 54)
    {
        command[6] = ch;
        command[7] = '\0';
        system(command);
    }
    
    system("cls");
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        Sleep(150);
        
        if(ch == '7')
        {
            if(j > 9)
                j = 0;
            command[6] = (char)j+48;
            command[7] = '\0';
            system(command);
        }
        j++;
        i++;
    }

    return 0;
}