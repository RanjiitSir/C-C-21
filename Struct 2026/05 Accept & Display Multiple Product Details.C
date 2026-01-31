#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int P_Id;
    char P_Name[24];
    float P_P_Price;
    float P_S_Price;
};

int main()
{
    struct Product Prod1 = {}, Prod2 = {}, Prod3 = {};

    printf("\n\n Enter 1st Product Details =>\n");

    printf("\n Enter Product ID : ");
    scanf("%d",&Prod1.P_Id);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(Prod1.P_Name);

    printf("\n Enter Purchase Price : ");
    scanf("%f",&Prod1.P_P_Price);
    printf("\n Enter Sales Price : ");
    scanf("%f",&Prod1.P_S_Price);

    printf("\n\n Enter 2nd Product Details =>\n");

    printf("\n Enter Product ID : ");
    scanf("%d",&Prod2.P_Id);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(Prod2.P_Name);

    printf("\n Enter Purchase Price : ");
    scanf("%f",&Prod2.P_P_Price);
    printf("\n Enter Sales Price : ");
    scanf("%f",&Prod2.P_S_Price);

    printf("\n\n Enter 3rd Product Details =>\n");

    printf("\n Enter Product ID : ");
    scanf("%d",&Prod3.P_Id);

    fflush(stdin);

    printf("\n Enter Product Name : ");
    gets(Prod3.P_Name);

    printf("\n Enter Purchase Price : ");
    scanf("%f",&Prod3.P_P_Price);
    printf("\n Enter Sales Price : ");
    scanf("%f",&Prod3.P_S_Price);

    printf("\n Enter a Key to Display Given Product Details...");
    getch();

    system("cls");
    printf("\n Display Product Details =>\n");

    printf("\n 1st Product Info => ");
    printf("\n Product ID     = %d", Prod1.P_Id);
    printf("\n Product Name   = %s", Prod1.P_Name);
    printf("\n Purchase Price = %0.2f", Prod1.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod1.P_S_Price);

    printf("\n 2nd Product Info => ");
    printf("\n Product ID     = %d", Prod2.P_Id);
    printf("\n Product Name   = %s", Prod2.P_Name);
    printf("\n Purchase Price = %0.2f", Prod2.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod2.P_S_Price);

    printf("\n 3rd Product Info => ");
    printf("\n Product ID     = %d", Prod3.P_Id);
    printf("\n Product Name   = %s", Prod3.P_Name);
    printf("\n Purchase Price = %0.2f", Prod3.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod3.P_S_Price);

    getch();
    return 0;
}
