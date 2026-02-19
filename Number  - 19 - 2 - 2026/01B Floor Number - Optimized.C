#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0, CInc = 0, RInc = 0;

    printf("\n Enter Row & Column Value : ");
    scanf("%d",&RC);

    if(RC > 100 || RC < 1)
    {
        printf("\n INVALID VALUE");
        return -1;
    }

    printf("\n============Pattern==============\n\n");

    for(i = 1, RInc = 101; i <= RC; i++, RInc += 100)
    {
        for( j = 1, CInc = RInc; j <= RC; j++, CInc++ )
        {
                printf(" %4d ", CInc);
        }
        getch();
        printf("\n");
    }

    printf("\n=================================\n");

    getch();
    return 0;
}
