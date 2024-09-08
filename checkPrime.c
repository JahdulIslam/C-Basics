#include <stdio.h>

int main(){
        int i, n, isPrime;
        isPrime = 1;
        printf("Input any number:\n");
        scanf("%d", &n);

        for(i=2; i<=n/2; i++){
            if(n%i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1 && n>1){
            printf("The number %d is a prime number!", n);
        }else{
            printf("The number %d is not a prime number!", n);
        }
    return 0;
}
