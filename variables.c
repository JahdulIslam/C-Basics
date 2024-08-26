#include <stdio.h>

int main(){
    //To create a string we use [] after variable name and the data type is "char". "%s" is the format specifier
        char name[]="Ovi";
    //"int" takes integers, shouldn't be used with quotation marks and format specifier is %d
        int age=20;
    // "char" takes a single letter variable, enclosed with single quotation marks (%c)
        char section='L';
    //"float" takes decimal values of 6-7 digits and takes up 4 bytes of space (%f)
        float gpa=4.83;
    //"double" takes decimal values of 15 digits and takes up 8 bytes of space (%lf)
         double coffeeCost= 19.99;
    //We can store scientific values in "float" or "double" in the following way:
        const float massEarth=6e24;
        printf("My name is \"%s\" \n", name);
        printf("I am %d years old \n", age);
        printf("I am in \"%c\" section \n", section);
        printf("My gpa was %.2f \n", gpa);
        printf("The cost of coffee at campus is %.2lf \n", coffeeCost);
        printf("The mass of Earth is %f \n", massEarth);
        printf("%lu", sizeof(coffeeCost)); //This is the way to check the space occupied by a variable
    return 0;
}
