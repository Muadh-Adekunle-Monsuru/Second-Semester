1. Write a declarative command for each of the following
	1. Three integer variables ap, ac, za
```C
int ap;
int ac;
int za;
or
int ap,ac,za;
```

 1. Two **floating** point variables price per unit, discount_amount
```C
float price_per_unit;
float discount_amount;
```
2. A contant floating point value pi=3.142
```C
#define pi 3.142

note no semicolon 
```
3. Two strings each of seventy five characters, called full name and permanent home address
```C
char full_name[75];
char permanent_home_address[75];
```
4. A double precision variable P value = $9.823223233 * 10^{-20}$
```C
double P = 9.823232323232e-20
```


A2. Give a skeletal description of the structure of a C program and explain its variaous components;
A typical C program has the structure:
1. **Declarative Section:** This is at the begginning of our code, and this is where all our variables and constants are declared. For example: int t; int i =0; #define p 3.14 
2. **Executable Section:** This is the main body of our program, this is where the actual operations occurs. 
Example sum = num1+ num 2; product = num1 * num2; printf, scanf
3. **Termination Section:** This is the ending of our program, it includes all the closing of loops and the closing of the main()
E.g. End IF, return 0;

b) Explain why a C program will compile but not execute if it does not have main()
	When the executable file is executed, the operating system will not know where to start the program. The operating system will look for a function called `main()`, and if it does not find one, the program will not execute.

A3. Explain the need for the inclusion of header files in a C program
	Header files are used to declare functions and variables that are pre-built. This exends the function of a progam to provide pre-built functions. It reduces the length and complexity of a code. 

b. Give 3 examples of 3 header files in C and their usuage
**stdio.h**: This header file contains declarations for the standard I/O functions, such as printf() and scanf(). It is used to perform input and output operations.

**stdlib.h**: This header file contains declarations for general utility functions, such as malloc() and free(). It is used to allocate and free memory, and to perform other miscellaneous tasks.

**math.h:** This header file contains declarations for mathematical functions, such as sqrt() and log(). It is used to perform mathematical calculations.

c. What is a preprocessor directive in a C program, explain its importance

A preprocessor directive is a line of code that is used to instruct the preprocessor to perform a specific task before the actual compilation of the program. They usually start with an # 
Examples
#include 
#define

Preprocessor directives can be used to improve the readability and maintainability of C programs, and they can also be used to optimize the performance of C programs.


---

## Section B
1. Write a well document interactive C program which accepts two integers num1 and num2 and computes thrice the sum of the two numbers provided num2 is less than num1.
Algorithm
1. Write out the basic strucutre of a C program
2. define all variables used in the program
3. prompt the user for number 1
4. prompt the user for number 2
5. check if num2 is less than num1
6. if the num2 is less than num1,
	1. then find the sum of the two numbers
	2. find the thrice of the sum of the two numbers
	3. print out the thrice
7. if num2 is not less than num1
	1. print num2 is not less than num1
```C
#include <stdio.h>
int main(){
	int num1, num2, sum, thrice; //declaring all our variables used in the code
	printf("What is your number 1\n"); //prompt the user for number 1
	scanf("%d",num1); //accepts the users input for number 1
	printf("What is your number 2\n"); // prompt the user for number2
	scanf("%d",num2);// accepts the users input for number2
if(num2<num1){//if statments to check if number 2 is less than number 1
	sum = num2 + num1; // calculating the sum
	thrice = sum * 3;//calculating the thrice
	printf("The thrice is %d",thrice);// printing out the final answer
}
else{//the code to be executed if num 2 is not less than num 1
	printf("Number 2 is not less than number 1"); //print out the statement
}
	return 0;//ending our program
}
```

b. Given the followng values in an array 15, 7, 19, 29, 33, 99, called AZ write a program which reads and prints the array. Your program should sort the array in descending order and prints out the sorted array called BZ. 
1. Write out the basic structure of a C program 
2. Declare all variables used in our program 
3. Start a loop which prompts the user for all the values of our array
4. Store the value of the array in BZ and AZ
5. Using the bubblesort algorithm sort the array
6. Print out the output of the BZ

```C
#include <stdio.h>
int main(){
int i;
int j;
int BZ[6];
int AZ[6];
int temp;
for(i=0;i<6;i++){
	printf("What is the value \n ");
	scanf("%d",&AZ[i]);
	BZ[i] = AZ[i];
}
//Algorithm Starting
for(j=0;j<6;j++){
	i=0;
	do{
		if(BZ[i]>BZ[i+1]){
				i++;
			}
			else{
				temp = BZ[i];
				BZ[i] = BZ[i+1];
				BZ[i+1] = temp;
				i++;
			}
	}while(i<6);
}
for(i=0;i<6;i++){
	printf("%d , ",BZ[i]);
}

return 0;
}
```