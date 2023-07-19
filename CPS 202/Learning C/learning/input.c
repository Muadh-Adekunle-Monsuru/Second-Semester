#include <stdio.h>
int main(){
    int letter = 0, number = 0, other = 0,i=0;
    char c = ' ' ;

while(i<5){    
    printf("Input character c\n");
    scanf("%c",&c);
    if(c >= 'a' && c <='z')
        letter++;
    else if( c>='0' && c <='9')
        number++;
    else
        other++;
    i++;
}

    printf("\n The number of  letters is now %d",letter);
    printf("\n The number of  numbers is now %d",number);
    printf("\n The number of  others is other %d",other);
    return 0;
}