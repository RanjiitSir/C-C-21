/// Print Stars * User Defined Times - while
#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0;

    printf("\n Enter a Count = ");
    scanf("%d",&Cnt);

    printf("\n OUTPUT => \n\n");

    while( Cnt > 0 )
    {
        printf(" * ");
        Cnt--;
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}
