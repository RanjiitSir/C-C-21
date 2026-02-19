#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&Num1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&Num2);

    if(Num2 < 1)
    {
        printf("\n Invalid Input");
        return -1;
    }

    printf("\n Printing %d Number %d Times => \n\n",Num1, Num2);

    while( Num2 >= 1 )
    {
        printf(" %d ", Num1);
        Num2--;
    }

    getch();
    return 0;
}
