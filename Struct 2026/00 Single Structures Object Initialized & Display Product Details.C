#include<stdio.h>
#include<conio.h>
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
    struct Product Prod = {21, "Laptop", 45000.20, 48250.70};

    printf("\n Product Details =>\n");

    printf("\n Display Product Details =>\n");

    printf("\n Product ID     = %d", Prod.P_Id);
    printf("\n Product Name   = %s", Prod.P_Name);
    printf("\n Purchase Price = %0.2f", Prod.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod.P_S_Price);

    getch();
    return 0;
}

