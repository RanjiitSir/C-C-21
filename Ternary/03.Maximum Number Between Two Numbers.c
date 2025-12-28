#include<stdio.h>
#include<conio.h>

int main()
{
   int No1 = 0, No2 = 0;

   printf("\n Enter 2 Number to check Maximum Number : ");

   printf("\n Enter 1st Number : ");
   scanf("%d",&No1);
   printf("\n Enter 2nd Number : ");
   scanf("%d",&No2);

   if(No1 == No2)
   {
       printf("\n %d and %d Are Equal", No1, No2);
       goto Down;
   }

   (No1 > No2) ? printf("\n %d is Max",No1) : printf("\n %d is Max",No2);

   Down:
   printf("\n Thank You");

   getch();
   return 0;
}
