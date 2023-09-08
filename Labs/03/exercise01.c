#include <stdio.h>

void main() {
    int num1, num2;
    char operator;
    
    printf("\n== Simple Calculator Program ==\n");
    printf("\n-- Taking Inputs --\n");
    
    printf("\nEnter first number : ");
    scanf("%d", &num1);
    
    printf("Enter second number : ");
    scanf("%d", &num2);
    
    printf("\nEnter any operator (from '+, -, *, /, %') to perform operation : ");
    scanf(" %c", &operator);
    
    if(operator == '+'){
        printf("\nAnswer : %d", num1 + num2);
    } else if(operator == '-'){
        printf("\nAnswer : %d", num1 - num2);
    } else if(operator == '*'){
        printf("\nAnswer : %d", num1 * num2);
    } else if(operator == '/'){
        printf("\nAnswer : %d", num1 / num2);
    } else if(operator == '%'){
        printf("Answer : %d", num1 % num2);
    } else if(operator != '+' || '-' || '*' || '/' || '%'){
        printf("\nError: Please enter valid operator!");
    }
}
