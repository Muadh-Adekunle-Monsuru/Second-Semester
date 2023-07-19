/*
This  assignment asks us to input a rangesine of a value between 0 and 1 (non inclusive).
 You will be graded based on whether the program can output a value
 in the correct range and whether your code is well-formatted and logically correct

Muadh
*/

#include<stdio.h>
#include<math.h> // Contains sine functions to be used
int main()
{
int i; // Declaring variables
double sinenumeric,number; // Declaring variables

for(i=0;i<=10;i++){
    number = i /10.0; //Used to find values between 0 and 1
    sinenumeric= sin(number); // The actual sine calculation, is performed on this line
printf("\n The Sine of %lf = %f",number,sinenumeric); //Prints the answer of the range
}



return 0;
}