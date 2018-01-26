#include<stdio.h>
#include<conio.h>
void main()
{
    char k;
    clrscr();
    printf("Enter\n");
   scanf("%c",&k);
     if((k>='a' && k<='z')||(k>='A' && k<='Z'))
     printf("it is an alphabet\n");
     else
     printf("it is an not alphabet");
     getch();
}

