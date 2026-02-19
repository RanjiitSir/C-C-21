#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n============ Tables ==============\n\n");

    for(i = 1 ; i <= 10; i++)
    {
        for( j = 23; j >= 19; j--)
        {
                printf(" %3d ", i * j );
        }
        getch();
        printf("\n");
    }

    printf("\n=================================\n");

    getch();
    return 0;
}
