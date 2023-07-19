The `switch` statement in C programming language is a multiway branch statement that allows you to execute one code block among many alternatives based on the value of an expression². It is similar to an `if...else..if` ladder but the syntax of the `switch` statement is much easier to read and write¹.

Here's an example of a simple calculator program that uses a `switch` statement to perform different arithmetic operations based on user input¹:

```c
#include <stdio.h>
int main() {
    char operation;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(operation) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
```

