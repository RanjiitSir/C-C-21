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
    struct Product Prod1 = {21, "KeyBoard+Mouce Combo", 450, 500};

    printf("\n Display Product Details =>\n");

    printf("\n Product Info => ");
    printf("\n Product ID     = %d", Prod1.P_Id);
    printf("\n Product Name   = %s", Prod1.P_Name);
    printf("\n Purchase Price = %0.2f", Prod1.P_P_Price);
    printf("\n Sales Price    = %0.2f", Prod1.P_S_Price);

    getch();
    return 0;
}
