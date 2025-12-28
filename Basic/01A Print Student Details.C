#include<stdio.h>
#include<conio.h>

int main()
{
    int RNo = 105;
    char Name[20] = "Harry Potter";
    char Course[8] = "BCS";
    char City[20] = "Karad";
    char Grade = 'A';
    int Tot_Marks = 670;
    float Per = 87.4520;

    printf("\n\t\t Student Information \n");

    printf("\n Roll No     : %d .", RNo);
    printf("\n Stud Name   : %s .", Name);
    printf("\n Address     : %s .", City);
    printf("\n Course      : %s .", Course);
    printf("\n Total Marks : %d .", Tot_Marks);
    printf("\n Percentage  : %0.2f .", Per );
    printf("\n Grade       : \'%c\' .", Grade);

    getch();
    return 0;
}
