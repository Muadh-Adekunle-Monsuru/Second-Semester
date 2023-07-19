1) Write a c program to sort the following set of data in 
	1) ascending order
	2) descending order
46, 13, 29, 62, 89,08

1) Ascending order 
```c
#include <stdio.h>
int main(){
    int numbers[6] = {46,13,29,62,89,8};
    int i =0;
    int temp;
    
    for(i=0;i<6;i++){
        printf("%d\n",numbers[i]);
    }
    printf("-------\n");
    int j=1;
    for(j=1;j<6;j++){
    i=0;
	    do{
	        if(numbers[i]>numbers[i+1]){
	            temp = numbers[i];
	            numbers[i] = numbers[i+1];
	            numbers[i+1] = temp;
	            i++;
	        } 
	        else{
	            i++;
	        }
	    } while(i<5);
    } 
    for(i=0;i<6;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}
```

Descending
```c
#include <stdio.h>
int main(){
    int numbers[6] = {46,13,29,62,89,8};
    int i =0;
    int temp;
    
    for(i=0;i<6;i++){
        printf("%d\n",numbers[i]);
    }
    printf("-------\n");
    int j=1;
    for(j=1;j<6;j++){
    i=0;
    do{
        if(numbers[i]>numbers[i+1]){
            
            i++;
        } 
        else{
            temp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = temp;
            i++;
        }
    } while(i<5);
    } 
    for(i=0;i<6;i++){
        printf("%d\n",numbers[i]);
    }
    return 0;
}
```

2) Write a c program which can be used to pick the smallest and the highest of the data provided in 1.
```c
#include <stdio.h>
int main(){
    int numbers[6] = {46,13,29,62,89,8};
    int i =0;
    int min, max;
    min = numbers[0];
    max = numbers[0];

    int j=0;
    for(j=0;j<6;j++){
        if(numbers[j]>max){
            max = numbers[j];
        } 
        
        if(numbers[j]<min){
            min= numbers[j];
        } 
        

    } 
    printf("Maximum is %d\n",max); 
    printf("Minimum is %d\n",min); 
    return 0;
}
```