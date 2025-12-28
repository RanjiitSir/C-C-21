// Program To get  ASCII Value for given Character

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a character = ");
    ch = getche();

    printf("\n\n ASCII Value of %c is = %d .", ch, ch);

    getch();
    return 0;
}
