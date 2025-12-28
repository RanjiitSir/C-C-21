/// Use Of sizeof()
/*
    sizeof() =>
		sizeof operator return how many bytes memory required for given
		Variable or Datatype.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;
    char My = '\0';
    double dNum = 0.0;

    printf("\n Size 1 = %d",sizeof(No));

    printf("\n Size 2 = %d",sizeof(dNum));

    printf("\n Size 3 = %d",sizeof(long int));

    printf("\n Size 4 = %d",sizeof(My));

    printf("\n Size 5 = %d",sizeof(float));

    printf("\n Size 6 = %d",sizeof(char*));

    printf("\n Size 7 = %d",sizeof(int));

    getch();
    return 0;
}
