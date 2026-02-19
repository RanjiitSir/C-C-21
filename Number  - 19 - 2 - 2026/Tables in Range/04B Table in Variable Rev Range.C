#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Spt = 0, Ept = 0;

    printf("\n Enter Start Point : ");
    scanf("%d",&Spt);
    printf("\n Enter End Point : ");
    scanf("%d",&Ept);

    printf("\n============ Tables ==============\n\n");

    if(Ept < Spt)
    {
        Spt = Spt + Ept;
        Ept = Spt - Ept;
        Spt = Spt - Ept;
    }

    for(i = 1 ; i <= 10; i++)
    {
        for( j = Spt; j <= Ept; j++)
        {
                printf(" %3d ", i * j );
        }
        printf("\n");
    }

    printf("\n=================================\n");

    getch();
    return 0;
}
