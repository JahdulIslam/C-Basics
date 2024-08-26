#include <stdio.h>
#include <stdbool.h>

int main(){
        /*int num;
        printf("Enter an integer: \n");
        scanf("%d", &num);

        if(num > 0){
            printf("The integer %d is positive!", num);
        }else if(num < 0){
            printf("The integer %d is negative!", num);
        }else{
            printf("The integer is 0");
        }*/
       //ternary operator
       int passcode = 1367;
       int enteredCode;
       printf("Enter passcode here: \n");
       scanf("%d", &enteredCode);
       (enteredCode == passcode) ? printf("The password was correct.") : printf("The password was incorrect");

    return 0;
}
