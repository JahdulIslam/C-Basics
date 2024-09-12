#include <stdio.h>

int main(){
        int i, n;
        unsigned long long fac;
        /*factorial can't be negative and can grow rapidly and the number can become very large
        so we use unsigned long long data type*/
        printf("Enter a number:\n");
        scanf("%d", &n);
        fac = 1;
        for(i=1; i<=n; i++){
            fac = fac*i;
        }
        printf("The factorial of %d is: %llu\n", n, fac);
    return 0;
}
