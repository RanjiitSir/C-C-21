/// Print Table of 23
#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 1;

    printf("\n Table of 23 is => \n\n");

    while( Cnt <= 10 )
    {
        printf("\n %2d * %2d = %3d",23, Cnt, (23 * Cnt) );
        Cnt++;
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}
