/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include <stdio.h>
int main() 
{
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 500 + (units - 100) * 7;
    } else if (units <= 300) {
        bill = 500 + 700 + (units - 200) * 10;
    } else {
        bill = 500 + 700 + 1000 + (units - 300) * 12;
    }
    printf("The electricity bill is: ₹%.2f\n", bill);
    return 0;
}