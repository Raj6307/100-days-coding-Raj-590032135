/*Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    int n, digit, result = 0, place = 1;

    scanf("%d", &n);

    if (n == 0) {
        printf("1");
    } else {
        while (n > 0) {
            digit = n % 10;

            if (digit == 0) {
                result = result + 1 * place;
            } else {
                if (digit == 1) {
                    result = result + 0 * place;
                }
            }

            place = place * 10;
            n = n / 10;
        }

        printf("%04d", result);
    }

    return 0;
}

C:\>cd C:\Users\Asus\OneDrive\Desktop\C FILES

C:\Users\Asus\OneDrive\Desktop\C FILES>gcc program40_day20.c -o program40_day20.out

C:\Users\Asus\OneDrive\Desktop\C FILES>program40_day20.out
1010
0101
C:\Users\Asus\OneDrive\Desktop\C FILES>program40_day20.out
1111
0000
C:\Users\Asus\OneDrive\Desktop\C FILES>