//
// Created by 归峤 on 2021/10/10.
//
#include <stdio.h>
int main (){
    int a,b,c;
    printf ("Enter the first (single) digit:");
    scanf ("%d",&a);
    printf ("Enter first group of five digits:");
    scanf ("%d",&b);
    printf ("Enter second group of five digits:");
    scanf ("%d",&c);
    int d=0,e=0,f=0;
    d=a+(b%10000)/1000+(b%100)/10+c/10000+(c%1000)/100+c%10;
    e=b/10000+(b%1000)/100+b%10+(c%10000)/1000+(c%100)/10;
    f=9-((3*d+e-1)%10);
    printf ("Check digit : %d",f);
    return 0;
}
