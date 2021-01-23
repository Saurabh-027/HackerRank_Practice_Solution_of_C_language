#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2,num3,num4;
    float num5,num6,num7,num8;
    scanf("%d",&num1);
    scanf("%d",&num2);
    num3=num1+num2;
    num4=num1-num2;
    printf("%d %d",num3,num4);
    printf("\n");
    scanf("%f",&num5);
    scanf("%f",&num6);
    num7=num5+num6;
    num8=num5-num6;
    printf("%.1f %.1f",num7,num8);
    return 0;
}

