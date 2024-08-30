#include <stdio.h>

int main(){
        printf("Welcome to simple calculator!\nInput two numbers and an operator to get the result.\n\n");
        char op;
        float num1, num2, result = 0.0;

        printf("Input [first number] [operator +,-,*,/] [second number]: \n");
        scanf("%f %c %f", &num1, &op, &num2);
        
        switch(op){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1*num2;
                break;
            case '/':
                result = num1/num2;
                
                break;
            default:
                printf("Invalid operator!\n");
        }
        printf("The result is: %.2f", result);
    return 0;
}
