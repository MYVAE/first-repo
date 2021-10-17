//
// Created by 归峤 on 2021/10/13.
//
#include <stdio.h>
int main()
{
    printf("Enter value of trade :");
    float value;
    scanf("%f", &value);
    float commission;
    if (value < 2500)
    {
        commission = value * 1.7 / 100 + 30;
    }
    else if (value < 6250)
    {
        commission = value * 0.66 / 100 + 56;
    }
    else if (value < 20000)
    {
        commission = value * 0.34 / 100 + 76;
    }
    else if (value < 50000)
    {
        commission = value * 0.22 / 100 + 100;
    }
    else if (value < 500000)
    {
        commission = value * 0.11 / 100 + 155;
    }
    else
        commission = value * 0.09 / 100 + 255;
    printf("Commission is $ %.2f", commission);
    return 0;
}
