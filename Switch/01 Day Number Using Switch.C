#include<stdio.h>
#include<conio.h>

int main()
{
    char Day = '\0';

    printf("\n Enter Day Value Between 1 - 7 : ");
    scanf("%c",&Day);

    switch(Day)
    {
        case '1' :
                printf("\n\n Monday");
                break;

        case '2' :
                printf("\n\n Tuesday");
                break;

        case '3' :
                printf("\n\n Wednesday");
                break;

        case '4' :
                printf("\n\n Thursday");
                break;

        case '5' :
                printf("\n\n Friday");
                break;

        case '6' :
                printf("\n\n Saturday");
                break;

        case '7' :
                printf("\n\n Sunday");
                break;

        default :
                printf("\n\n ...Invalid Day Value...");
                break;
    }

    printf("\n\n Have a Good Day...");

    getch();
    return 0;
}
