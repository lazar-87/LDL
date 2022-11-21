// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int num1 = -20;
 int num2 = 30;
 printf("number 1 - %d, number 2 - %d\n,", num1, num2);
 int num3;
 num3=num1;
 num1=num2;
 num2=num3;
 printf("number 1 - %d, number 2 - %d\n,", num1, num2);
    return 0;
}