#include <stdio.h>

int main(){
        /*int x, y;
        x=15;
        y=10;
        //x and y are integers and the result of the division omits all the digits after the "." as a result
        float result = x/y; //output is 1.00
        printf("%.2f", result);*/

        int x,y;
        x=15;
        y=10;
        //In order to fix the above problem we can use (float) to manually tell the computer to treat x and y as "float"s during the division and as a result the correct result is shown
        float result = (float) x/y;
        printf("%.2f", result);
    return 0;
}
