#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    (No % 2 == 0) ? printf("\n Even") : printf("\n Odd")  ;

    printf("\n Thanks");

    getch();
    return 0;
}
