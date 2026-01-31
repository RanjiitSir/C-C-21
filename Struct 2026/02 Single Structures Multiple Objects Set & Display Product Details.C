#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Product
{
    int P_Id;
    char P_Name[20];
    float P_P_Price;
    float P_S_Price;
};

int main()
{
    struct Product Prod1, Prod2, Prod3;

    Prod1.P_Id = 17;
    strcpy(Prod1.P_Name, "Laptop Bag");
    Prod1.P_P_Price = 900.50;
    Prod1.P_S_Price = 1000.20;

    Prod2.P_Id = 15;
    strcpy(Prod2.P_Name, "Hat");
    Prod2.P_P_Price = 75;
    Prod2.P_S_Price = 100;

    Prod3.P_Id = 65;
    strcpy(Prod3.P_Name, "Router");
    Prod3.P_P_Price = 1500;
    Prod3.P_S_Price = 1600;


    printf("\n Display Product Details =>\n");

    printf("\n 1st Product Info => ");
    printf("\n Product ID     = %d", Prod1.P_Id);
    printf("\n Product Name   = %s", Prod1.P_Name);
    printf("\n Purchase Price = %0.2f", Prod1.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod1.P_S_Price);

    printf("\n\n 2nd Product Info => ");
    printf("\n Product ID     = %d", Prod2.P_Id);
    printf("\n Product Name   = %s", Prod2.P_Name);
    printf("\n Purchase Price = %0.2f", Prod2.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod2.P_S_Price);

    printf("\n\n 3rd Product Info => ");
    printf("\n Product ID     = %d", Prod3.P_Id);
    printf("\n Product Name   = %s", Prod3.P_Name);
    printf("\n Purchase Price = %0.2f", Prod3.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod3.P_S_Price);

    getch();
    return 0;
}
