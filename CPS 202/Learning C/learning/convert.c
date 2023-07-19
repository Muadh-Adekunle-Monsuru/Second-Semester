#include <stdio.h>
int main(){
    int miles, yards,kilometers;
    printf("what is your miles\n");
    scanf("%d",&miles);
    printf("What is your yards\n");
    scanf("%d",&yards);

    kilometers = 1.609 * (miles + yards/1760.0);
    printf("\nFor %d miles and %d yards it is %d in kilometers\n\n",miles, yards, kilometers);

    return 0;


}