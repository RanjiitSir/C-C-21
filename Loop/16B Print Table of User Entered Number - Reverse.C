/// Print Table of User Entered Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 10, No = 0;

    printf("\n Enter a Number To Print it's Table = ");
    scanf("%d",&No);

    printf("\n Table of %d is => \n\n",No);

    while(Cnt >= 1)
    {
        printf("\n %2d * %2d = %3d",No, Cnt, (No * Cnt) );
        Cnt--;
    }

    printf("\n\n Thanks");

    getch();
    return 0;
}
