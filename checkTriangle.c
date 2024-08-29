#include <stdio.h>

int main(){
        int a, b, c;
        printf("Enter first side: \n");
        scanf("%d", &a);
        printf("Enter second side: \n");
        scanf("%d", &b);
        printf("Enter third side: \n");
        scanf("%d", &c);
        if((a + b) > c && (b + c) > a && (c + a) > b && a > 0 && b > 0 && c > 0){
            if(a == b && b == c){
                printf("The triangle is equilateral.");
            }else if(a != b && b != c){
                printf("The triangle is scalene.");
            }else if(a == b || b == c || c == a){
                printf("The triangle is isosceles.");
            }
        }else{
            printf("The triangle is invalid.");
        }
    return 0;
}
