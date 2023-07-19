Write a C program in which users input two number num1 and num2. 
Print the numbers the user input as
Your number one is [num1]
Your number two is [num2]
b. if num1 is greater than num2 calculate
	the triple of the sum of the two numbers
c. if num1 is less than num2 calculate
	the double of the difference between the two numbers
d. if the numbers are equal 
	print that the number one is equal to number two 


Algorithm
1. Write out the C boilerplate code
2. Declare variables
3. prompt users to input the number 1
4. prompt users to input the number 2
5. Check if number 1 is greater than number 2
6. If true:
	1.  find the sum of the two numbers
	2. find the triple of the sum'
7. if false which implies an else if
	1. find the difference between the two numbers
	2. double the difference
8. else
		1. print "The numbers are equal"
9. Print out the final result
```C
#include <stdio.h>
int main(){
int num1;
int num2;
int sum;
int difference;
int result;

printf("Input number 1\n");
scanf("%d",&num1);

printf("Input number 2\n");
scanf("%d", &num2);

if(num1>num2){
	sum = num1 + num2;
	result = sum * 3;
	printf("Our result is: %d\n",result);
}
else if(num1 < num2){
	difference = num2 - num1;
	result = 2 * difference;
	printf("Our result is: %d\n",result);
}
else{
	printf("the numbers are equal\n");
}



return 0;
}

```







2. Write a C program in which the user inputs 5 names. The names are stored in an array. 

	The user then in5puts the age of the 5 individuals, the age is also stored in an array. 

	The name and the age of each individual is printed side by side
e.g
	Oyeku 16
	Fawaz 21





Declare a 5 element array that stores the number 1, 2, 4, 7, 9
print out the element in the 5th column

```C
#include <stdio.>
int main(){
int number[5] = {1, 2,4,7, 9};
printf("%d",number[4]);
return 0;
}
```



write a plain for statement that prints out 0 to 5

```C
#include <stdio.h>
int main(){
int i;

for(i=0;i<=5;i++){
printf("The current value of i is : %d\n",i);
}

return 0;
}
```


Write a C program that loops through an array to print out the values in the array

score = {10, 30, 40 , 50 , 60}

Algorithm
1. write out the boilerplate of a c program
2. declare our variables
3. write out the loop
	1. inside the loop write out the print statement


```C
#include <stdio.h>
int main(){
	int i;
	int score[5] = {10,30,40,50,60};

	for(i=0;i<=4;i++){
		printf("Our score is: %d \n",score[i]);
	}

return 0;
}
```

write a c program that has an array called age, which prompts users for input 5 times and takes in the input each time, saving the input into the array. 

Algorithm
1. Write out the boiler plate
2. declare our variables
3. Write out the loop inside the loop we have
	1. A prompt to ask user for input
	2. A scanf statement to accept the users input and save it in the array


```C
#include <stdio.h>
int main(){
//declaration of variable
int i;
int age[5];

//for loop which takes in the user input
for(i=0;i<5;i++){
	printf("What is age\n");
	scanf("%d",&age[i]);
}

for(i=0;i<5;i++){
	printf("Your age is: %d \n",age[i]);
}

return 0;
}
```





Write a C program which asks the user for their name and age and then print out
Your name is: [input] and your age is: [input]

Algorithm
1. Write out the c boilerplate
2. declare your variables
3. prompt the user for their name
4. save the user input in name
5. prompt the user for their age
6. save the user input in age
7. print out "Your name is [name] and your age is [age]"

```C
#include <stdio.h>
int main(){
int age;
char name[20];

printf("what is your name\n");
scanf("%s",name);

printf("What is your age \n");
scanf("%d",&age);

printf("Your name is %s and your age is %d\n",name,age);
return 0;

}
```



### Arrays for String
```C
char name[numberofelement][lengthofeachelement];

char name[3][10] = {"Jones","John","Taiwo"}
or
char *name[4] = {"Hello","I","am","in"}
```

loop through an array which has the names
Taiwo
Ismail
Fawaz
Fathia'h

```C
#include <stdio.h>
int main(){
int i;
int name[5][20];

for(i=0;i<5;i++){
	printf("WHat is your name \n");
	scanf("%s",name[i]);
}
for(i=0;i<5;i++){
	printf("Your name is %s",name[i]);
}

return 0;
}
```

#### Fgets Format

```C
fgets(variblename,lengthofinput,stdin);

fgets(name[i],20,stdin);
```