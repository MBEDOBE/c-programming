#include <stdio.h>

int main ()
{
    int salary = 400;

    char first_letter = 'x';

    printf("My salary = %d \n", salary);
    
    printf("The letter is %c \n", first_letter);

//    double height = 12.39;
//    float length = 10.5;
//    printf("I am %.2lf tall!\n", height);
//    printf("I am %.2f long!\n", length);



   //find the size of a data type

   printf("int: %ld byte(s)\n", sizeof(int));

   printf("double: %ld byte(s)\n", sizeof(double));

   printf("float: %ld byte(s)\n", sizeof(float));

   printf("char: %ld byte(s)\n", sizeof(char));

    
}