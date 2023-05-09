Fountain ventures has decided to embark on promo incentives to encourage patronage. The following schedule shows the discount incentives due to its customers
s/n | Description | Discount
---|---|---
1.| Goods withing #5000 range | 10%
2.| Goods between #5000 and #10,000| 15%
3.| Goods between #1000 and #25,000|20%
4.|Goods above #25,000|30%

Write a program which reads customers matric number, name, hostel address, amount of goods purchased, to compute the net amount the customer will pay. 
Generate an appropriate output for y program.

```C
#include <stdio.h>
int main(){
    char name[35];
    char hostel[35];
    char matric[10];
    int amount;
    int discount;
    int  final;
    printf("What is your name \n");
    fgets(name,35,stdin);
    printf("What is your hostel\n");
    fgets(hostel,35,stdin);
    printf("What is your matric number\n");
    fgets(matric,10,stdin);

    printf("What is the amount you bought\n");
    scanf("%d",&amount);

    if(amount<=5000){
        discount = 0.1*amount;
        final = amount - discount;
    }
    else if(amount >5000 && amount<=1000){
        discount = 0.15*amount;
        final = amount - discount;
        
        }
    else if(amount >10000 && amount<=25000){
         discount = 0.20*amount;
        final = amount - discount;
        }
    else if(amount >25000){
         discount = 0.30*amount;
        final = amount - discount;
    }
    else{
        printf("Check your input");
    }

    printf("\nHello %s with  the matric  number of  %s and in the hostel %s\n", name,matric, hostel);
    printf("The  amount you bought is  %d your discount is %d and your final price is %d",amount, discount, final);
    return 0;
}

```