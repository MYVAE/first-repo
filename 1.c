//
// Created by 归峤 on 2021/10/8.
//
#include <stdio.h>
int main (){
    float loan,rate,payment,first,second,third;
    printf("Enter amount of loan:");
    scanf("%f",&loan);
    printf("Enter interest rate:");
    scanf("%f",&rate);
    printf("Enter monthly payment:");
    scanf("%f",&payment);
    first=loan*(rate/100/12+1)-payment;
    second=first*(rate/100/12+1)-payment;
    third=second*(rate/100/12+1)-payment;
    printf("Balance remaining after first payment: $%.2f\n",first);
    printf("Balance remaining after second payment: $%.2f\n",second);
    printf("Balance remaining after third payment: $%.2f\n",third);
    return 0;
}
