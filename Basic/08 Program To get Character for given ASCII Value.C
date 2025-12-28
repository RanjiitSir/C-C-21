// Program To get Character for given ASCII Value

#include<stdio.h>
#include<conio.h>

int main()
{
    int Val = 0;

    printf("\n Enter ASCII Value = ");
    scanf("%d",&Val);

    printf("\n\n Character for ASCII Value %d is = %c .", Val,Val);

    getch();
    return 0;
}
