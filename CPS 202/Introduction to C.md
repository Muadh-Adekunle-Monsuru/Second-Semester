- One of the oldest programming languages in existence.
- It is very active and versatile
- C came into existence in 1972
- The syntax and the semantics of the language have similarities with Python
- C is case sensitive
```Java
kjghi

```

```C
#include <stdio.h> // Called header files, which ends with .h
int main(){
	Declarative Section;


	Executable Section;



}

End;
```

Data Type | Syntax 
----|----
Integer | int x; short integer = short; long integer = long
Floating point | float x;  or 
Character & String | Char x; or Char[35]
Double |  //Double is floating point but more than 12 values
constant | #define pi 3.1415926535

write a c program that contains only declarative statements for 
3 interger, character and floating point variables
```c
#include <stdio.h>
int main(){
int x,y,z;
char char1,char2,char3;
float float1,float2,float3;


return 0;
}
```
### Comments in C

```C
By using /*   this is a comment*/
or using //This is a comment
or /* this
		is 
				a
					multi line
								comment*/


```
Features of C
- Readability
- Portability
- Simplicity 

Examples of C compilers:
- Q<mark style="background: #CACFD9A6;"><mark style="background: #ADCCFFA6;">uincy</mark></mark>
- Bloodshed
- CodeBlock
- MINGW
![](images/Process%20of%20Program%20Compilation.canvas)

---
### Types of Input

![](https://studentprojects.in/wp-content/uploads/2022/10/image-6.png)
```C
getchar(): input a single character
putchar(): output a single character
gets(): get a string of character
fgets(): means file get string, input a series of characters
puts(): print out a string of charcters
scanf(): read any input

printf(): used to print any types of variables

types of variables it accpts:
- integer
- Floting
- Characters
- Double

```

```C
//Use of getchar()
int main () {
   char c;
   printf("Enter character: ");
   c = getchar();
   printf("Character entered: ");
   putchar(c);
```


```C
//Structure of fget
fgets(char *str, int n, FILE *stream)
str - It is the variable in which the string is going to be stored
n - It is the maximum length of the string that should be read
stream - It is the filehandle, from where the string is to be read.
char str[20];
  fgets(str, 20, stdin); // read from stdin
  puts(str); // print read content out to stdout

```

```c
Use puts to output a string with space

char text[50] = "Hello There"; //Double quotes
puts(text); //output: Hello There

```





```c
//Structure of scanf

int main(){
int a,b,c;
printf("input a value");
scanf("%d %d %d"&a,&b,&c);

prinf("The value for a is %d"a);
prinf("The value for b is %d"b);
prinf("The value for c is %d"c);

}
```


```c
#include <stdio.h>
int main(){
    char a[5];
    printf("Input a value for a \n");
    scanf("%s",a);
    printf("Your input is %s",a);
    return 0;   
}
```

### Classwork
```c
//A program that accepts three integers and the sum of the intergers

#include <stdio.h>
int main(){
	int sum, a, b,c;4 our
	printf("Input your a b c \n");
	scanf("%d %d %d",&a,&b,&c);

	sum = a + b + c;

	printf("The sum is %d ", sum);
	return 0;
}
```

Write a program which accepts matric number first name  and first semester score in 4 courses to find the average score of the student

print and appropriate output for to your program

```c
#include <stdio.h>

int main(){
    char name[9];
    char matric[9];
    float score1, score2, score3, score4, average;

    printf("Input your first name \n");
    scanf("%s",name);
    printf("Input your matric number \n");
    scanf("%s",matric);

    printf("What is your score for the first subject \n");
    scanf("%f",&score1);
    printf("What is your score for the second subject \n");
    scanf("%f",&score2);
    printf("What is your score for the third subject \n");
    scanf("%f",&score3);
    printf("What is your score for the fourth subject \n");
    scanf("%f",&score4);

    average =(score1+ score2 +score3 +score4)/4;

    printf("The average is %5.3f",average);
return 0;
}


```

---
[3/5/2023]
## Control Structure

1. Simple if statement
```C
if(condition){
	[code block]
}
```
2. If else statement
```c
if(condition){
	[code block]
}	
else{

}
```
3. Nested If-else 
	```C 
	if(condition){
	[code block]
}	
else if(condition2){
	[code block]
}else if(condition2){
	[code block]
}else if(condition2){
	[code block]
}
else{

}
```


```c
#include <stdio.h>
int main(){

}
```
---
Classwork 1
