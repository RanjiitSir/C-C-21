#include<stdio.h>
#include<conio.h>

int main()
{
    int RNo = 105, Tot_Marks = 670;
    char Grade = 'A', Course[8] = "BCS", Name[20] = "Harry Potter",  City[20] = "Karad";
    float Per = 87.4520;

    printf("\n\t\t Student Information \n");

    printf("\n Roll No     : %d .\n Stud Name   : %s .\n Address     : %s .\n Course      : %s .\n Total Marks : %d .\n Percentage  : %0.2f .\n Grade       : \'%c\' .",RNo, Name, City, Course, Tot_Marks, Per, Grade);

    getch();
    return 0;
}
