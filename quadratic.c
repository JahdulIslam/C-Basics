#include <stdio.h>
#include <math.h>

int main(){
        float a, b, c, determiner, root1, root2, imaginary;
        printf("Enter the value of a: \n");
        scanf("%f", &a);
        printf("Enter the value of b: \n");
        scanf("%f", &b);
        printf("Enter the value of c: \n");
        scanf("%f", &c);

        determiner = (b*b) - (4*a*c);
        if(a != 0){
            if(determiner == 0){
                root1 = root2 = -b/(2*a);
                printf("root1: %.2f \n", root1);
                printf("root2: %.2f", root2);
            }else if(determiner > 0){
                root1 = (-b+sqrt(determiner))/(2*a);
                root2 = (-b-sqrt(determiner))/(2*a);
                printf("root1: %.2f \n", root1);
                printf("root2: %.2f", root2);
            }else if(determiner < 0){
                root1 = root2 =-b/(2*a);
                imaginary = sqrt(-determiner)/(2*a);
                printf("root1: %.2f + i%.2f \n", root1, imaginary);
                printf("root2: %.2f - i%.2f \n", root2, imaginary);
            }
        }else{
            printf("The value of a can't be 0!");
        }
    return 0;
}
