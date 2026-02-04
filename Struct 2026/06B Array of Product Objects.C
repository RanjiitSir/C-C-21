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
    int i = 0;
    struct Product ProdList[2] = {};

    for(i = 0; i < 2; i++)
    {
        printf("\n\n Enter Product Details %d =>\n", i+1);

        printf("\n Enter Product ID : ");
        scanf("%d",&ProdList[i].P_Id);

        fflush(stdin);
        printf("\n Enter Product Name : ");
        gets(ProdList[i].P_Name);

        printf("\n Enter Purchase Price : ");
        scanf("%f",&ProdList[i].P_P_Price);

        printf("\n Enter Sales Price : ");
        scanf("%f",&ProdList[i].P_S_Price);
    }

    printf("\n Enter a Key to Display Given Product Details...");
    getch();
    system("cls");
    printf("\n Display Product Details =>\n");

    for(i = 0; i < 2; i++)
    {
        printf("\n\n %d Product Info => ",i+1);

        printf("\n Product ID     = %d", ProdList[i].P_Id);
        printf("\n Product Name   = %s", ProdList[i].P_Name);
        printf("\n Purchase Price = %0.2f", ProdList[i].P_P_Price);
        printf("\n Sales Price    = %0.2f", ProdList[i].P_S_Price);

        printf("\n ------*****------");
    }

    getch();
    return 0;
}
