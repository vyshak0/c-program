#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Adding the two numbers
    sum = num1 + num2;

    // Displaying the result
    printf("Sum: %d\n", sum);

    return 0;
}
