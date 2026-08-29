/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int n, digit, product = 1;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product = product * digit;
        } else {
            if (digit % 2 == 0) {
                product = product;
            }
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program39_day20.c -o program39_day20.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program39_day20.out
12345
15
C:\Users\Asus\OneDrive\Desktop\C FILES>program39_day20.out
2468
1
C:\Users\Asus\OneDrive\Desktop\C FILES>

