Array is a (group) of related data items, which common data types which occupies a contiguous location in the computer memory
Features of an array
1. They are referreed to with a common name
2. Each element of the array is differentiated with an attatached subscript
3. They have the same data type
4. They occupt contiguous memory location when they are stored

Types of array
1. One-dimenstional: Row-wise(one column multiple rows, or  column wise(one row multiple columns)
2. Two-dimensional array: Has rows and columns![](images/Pasted%20image%2020230515111352.png)
3. Multi-dimensional arrays;

## One dimensional array
```C
#include <stdio.h>

int main(){
    int n;
    int i = 0;
    int container[5];
    int sum = 0;
    while(i<5){
        printf("What is your number now:\n");
        scanf("%d",&n);
        container[i] = n;
        i++;
    }
 printf("Your values are: \n");
    for(i=0;i<5;i++){
        printf("%d \t",container[i]);
        sum = sum + container[i];
        }
    printf("\nThe sum is: %d\n",sum);

  

    return 0;

}
```


```c
Sure, here is a simple code for iterating through a simple array which contains 10 names in C:
#include <stdio.h>

int main() {
  // Declare an array of 10 names
  char names[10][20] = {"John Doe", "Jane Doe", "Peter Smith", "Mary Jones", "Michael Brown", "Sarah White", "David Green", "Emily Blue", "Robert Black", "Alice Gray"};

  // Iterate through the array and print the names
  for (int i = 0; i < 10; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}

```

Define a one-dimensional array, 12 element integer array called c, and assign the values 1,4,7,10,.... 34.

Given 2 (3x3) matrices A and  B write a program to add the elements of the matrices together.
1. Start
2. Declare your variables
3. Read the element of the first array
4. Setup a loop for A and B and add the elements of the array
5. Print C
6. End

A = $$ \begin{bmatrix}  
1 & 2 & 3\\  
2 & 1 & 3 \\
4 & 1 & 6
\end{bmatrix} $$
B = $$ \begin{bmatrix}  
1 & 0 & 6\\  
3 & 2 & 1 \\
1 & 2 & 4
\end{bmatrix} $$




what value is in the array[n+1]



## Two-dimensional array
```c
#include <stdio.h>

int main() {
  // Declare a 2D array with 3 rows and 4 columns
  int array[3][4];

  // Initialize the array with some values
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      array[i][j] = i * 4 + j;
    }
  }

  // Iterate through the array and print the values
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }

  return 0;
}
//output
0 1 2 3
4 5 6 7
8 9 10 11


```


