#include <stdio.h>
int  main(){
    int numbers[5];
    int i=0;


    while (i<5)
    {
        numbers[i] = i;
        i++;
    }
    
     for (i=0;i<=5;i++)
    {
        printf("%d\t",numbers[i]);
    }
    
    return 0;
}