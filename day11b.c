//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float costPrice, sellingPrice, profit, loss, percentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) 
    {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } 
    else 
    {
        printf("No profit, no loss.\n");
    }

    return 0;
}