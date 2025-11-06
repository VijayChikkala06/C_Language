   #include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
 printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    printf("Result: %d\n", result);

    return 0;
}
