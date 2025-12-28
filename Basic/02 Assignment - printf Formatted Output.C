#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n\t\t \"Student\" Information Database \n");

    printf("\n====================*******====================\n");

    printf("\n %-4d %-10s %3d %3d %3d %3d %0.2f", 120, "Amitabh", 6, 95, 65, 166,  55.33333 );
    printf("\n %-4d %-10s %3d %3d %3d %3d %0.2f", 6, "Raj", 55, 45, 80, 180,  60.0000 );
    printf("\n %-4d %-10s %3d %3d %3d %3d %0.2f", 95, "Virat", 65, 85, 50, 200,  66.66666 );

    printf("\n\n====================*******====================\n");

    getch();
    return 0;
}
