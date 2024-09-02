#include <stdio.h>

int main() {
    int number, firstnumber, lastnumber, sum;

    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    lastnumber = number % 10;

   
    firstnumber = number;
    while (firstnumber >= 10) {
        firstnumber =firstnumber/10;  
    }

   
    sum = firstnumber + lastnumber;

   
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}
