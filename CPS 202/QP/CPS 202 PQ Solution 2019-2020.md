1. List the four basic data types often used in C
	1. Integers
	2. Char: For characters and strings
	3. Double: For floating point numbers
	4. Constant
2. Write a type declaration  for each of the following.
1. Number of students that are accommodated in Adegunwa
```C
		int number_of_st;
```
2. A letter grade scored by a student in CPS202
```C 
		char grade;
```
3.  Average volume of rainfall in each year
```C
		double ave_rainfall;
```
4. Address of a house in a street
```C
		char address[50];
```
5. Acceleration due to gravity
```C
		#define acceleration 9.98
		or
		float acceleration = 9.98;
```

3. What are header files in C and what are they used for
	They are also called processor directives. Header files contains a set of predefined standard library function that is used to extent the functionality of a c program.
	 Explain what each of these header files are used for in C
	1. <math.h>: It is a header file that contains functions that are used to perform mathematical operations, sqrt(), sine())
	2. <string.h>: Used to perform various functionalities related to string manipulation. strlen(), strcmp()
	3. <conio.h>: Used by some compilers to provide console input/output
	4. <stdio.h>: Used to perform input and output operations. scanf(), printf()

4. Write a program to compute the volume of a cylinder using the formula
$V = πr^2h$ 
```C
#include <stdio.h>
int main(){
#define pi  3.141
float r,h,v;
printf("What is your radius r \n");
scanf("%f",&r);

printf("What is your height h \n");
scanf("%f",&h);

v = pi * r * r * h;

printf("The volume v is %f",v);

return 0;
}
```

5. Predict the output of the following code
```C
#include <stdio.h>
int main(){
int i;
for(i=0;i<5;i++){
printf("data %d \n",i);
}
return 0;
}
Output:
data 0
data 1
data 2
data 3
data 4
```

6. The following program is meant to be used to compute the salary of 20 employees of FUO. The program is badly written and laid out. 
```C
This is the corrected program
/*Program for computing the salary of employees*/
#include <stdio.h>
int main(){
#define dev_fee 2000
int i;
for(i=1;i<=20;i++){
float allowance, rent, housing, transport, netpay;
float basic_pay, tax, deduction;
printf("Input basic pay here");
scanf("%f",&basic_pay);

printf("Input rent, housing and transport");
scanf("%f %f %f",&rent,&housing,&transport);

/* Start the computation of salary here*/
tax = 0.05 * basic_pay;
allowance = rent + housing + transport;
deduction= dev_fee + tax;
netpay = basic_pay + allowance - deduction;

/* Print the   net salary here */
printf("%f",netpay);

}
return 0;
}
```

b. Prepare an algorithm or flowchart for the corrected program
1.  The dev_fee is declared
2. A for loop starts, and loop through the block of code 20 times
3. Within the loop all variables are declared
4. User if prompted to enter the basic pay
5. User is then prompted to enter rent, housing and transport
6. The calculations  are  then performed, tax, allowance, netpay and deduction
7.  The netpay is then calculated.

7. What are do-loops and what are they used for in C progarmming:
	Do-Loops is a built-in function in C which  iterates over a block of code for a specific number of time or till a condition is satisfied. They are used to perform iteration.
b. List 3 types of loops 
1. Do-while loop
```C
do{
[block of code]
increment or decrement;
}while(condition);
```
2. While Loop
```C
while(condtion){
[block of code]
increment or decrement;
}
```
3. For Loop
```C
for(condition;increment){
[block  of code]
}
```

7. The authorities of NASFAT is proposing to give out scholarship awards to deserving students. here are the criteria
1. Candidate must be a Muslim student, maleor female of any private institution who must not be lower than 200 level.
2. He/shemust have at lease a CGPA of 3.5
3. He/she must not have been convicted of any criminal offence in his/her institution. 

```C
#include <stdio.h>
#include <string.h>

int main(){
char matric[10];
char name[15];
char religion[5];
char institution[20];
int level;
float CGPA;
char moral[6];
int compare;
printf("What is your matric number\n");
scanf("%s",matric);
printf("What is your name\n");
scanf("%s",name);
printf("What is your religion\n");
scanf("%s",religion);
printf("What is your institution name\n");
scanf("%s",institution);
printf("What is your level\n");
scanf("%d",&level);
printf("What is your CGPA\n");
scanf("%f",&CGPA);
printf("Have you been convicted before [True] [False]\n");
scanf("%s",moral);

int compare = strcmp(religion,"muslim");
int statcompare = strcmp(moral,"false");

/*First approach*/
if(compart == 0 && level >= 200 && CGPA >= 3.5 && statcompare == 0){
printf("You are eligible  for the scholarship\n");
}
else{
printf("You did not meet all the criterias");
}

/*Another Approach*/
if(compare == 0){
	if(level>=200){
		if(CGPA>=3.5){
			if(statcompare == 0){
				printf("You are eligible for the scholarship");
			}else{
				printf("You must not be convicted");
			}
		}else{
			printf("Your CGPA must be greater than 3.5");
		}
	}else{
		printf("Your level must not be less than 200");
	}
}
else{
	printf("You must be a muslim");
}
return 0;
}
```

8. Write a simple C program which accepts two integers and find the sum, the difference, the product and the quotient of the numbers. (First number must be bigger than the second).
```C
#include <stdio.h>
int main(){
int n1,n2;
int sum,difference,product,quotient;
printf("What is your first number\n");
scanf("%d",&n1);

printf("What is your second number\n");
scanf("%d",&n2);

if(n1>n2){
	sum = n1 + n2;
	difference = n1 - n2;	
	product = n1 * n2;
	quotient = n1/n2;	
}else{
	printf("The first number must be greater than the second");
}

printf("Sum: %d\n",sum);
printf("Difference: %d\n",difference);
printf("Product: %d\n",product);
printf("Quotient: %d\n",quotient);
return 0;
}
```
9. Rewrite the program using the do-while repetition
```C
#include <stdio.h>
int main(){
unsigned int counter =1;
do{
	printf("%d",counter);
	counter++;
}while(counter<=10);

return 0;
}
```

10. In a typical supermarket Value added tax is calculated based on the amount of goods procured using the following schedule

Item Description | VAT in %
--- | ---
a) Goods greater than N40,000.00 | 2
b) Goods within the next N10,000:00 | 3
c) Goods within the next N15,000:00 | 4
d) Goods within the next N5,000:00 | 5

Write an algorithm and a C program which reads the house number(as an integer id) cost of goods and compute the Net-amount payable by a customer. Generate an appropriate output from the program.

```C
#include <stdio.h>
int main(){
int house_no;
double goods_cost, net_total;

printf("What is your house number\n");
scanf("%d",&house_no);
printf("What is the cost of good \n");
scanf("%lf",&goods_cost);

if(goods_cost<=40000){
	printf("Goods is less than 40000 \n");
	net_total = 1.02 * goods_cost;
}else if(goods_cost<=50000){
	printf("Goods is between 40000 and 50000 \n");
	net_total = 1.03 * goods_cost;
}else if(goods_cost<=65000){
	printf("Goods is between 50000 and 65000 \n");
	net_total = 1.04 * goods_cost;
}else if(goods_cost<=70000){
	printf("Goods is between 70000 and 65000 \n");
	net_total = 1.05 * goods_cost;
}else{
printf("Outside The Range");
}
printf("Your Net cost of goods is: %lf",net_total);

return 0;
}
```

b. Describe the structure of a C program. Using a program to compute perimeter and area of a rectangle
```C
A C program is made up of the 
	- Declarative Section: Where the variables and consants to be used in the code are declared
	- Executable Section: where the main code that performs the operation lives. 
	- Termination Section: Ending our code. 
   
int main(){
	// Start of  Declarative section
		float l;
		float w;
		float area;
		float perimeter;
	 // End of Declarative section

	// start of executable  section
		printf("The length is \n");
		scanf("%f",&l); 

		printf("The width is\n");
		scanf("%f",&w);


		area = l*w;
		perimeter = 2(l+w);

		printf("The area is : %f\n", area);
		printf("The perimeter is : %f\n",perimter);
	//  End of   executable  Section


	//start of termination section
		return 0;
}
```