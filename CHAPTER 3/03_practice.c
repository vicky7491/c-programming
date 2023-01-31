#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if(ch>= 'a' && ch<='z')
    printf("you have entered a lowercase chracter");

    else if(ch>='A' && ch<='Z')
    printf("Youn have entered a UPPERCASE character");

    else{
        printf("you have not enter a character");
    }

    return 0;
}