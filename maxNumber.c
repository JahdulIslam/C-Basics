#include <stdio.h>
#include <stdbool.h>

int main(){
        int num1, num2, num3;
        printf("Enter three numbers: \n");
        scanf("%d %d %d", &num1, &num2, &num3);

        if(num1 > num2 && num1 > num3){
            printf("The maximum number is: %d", num1);
        }else if(num1 < num2 && num2 > num3){
            printf("The maximum number is: %d", num2);
        }else{
            printf("The maximum number is: %d", num3);
        }
    return 0;
}
