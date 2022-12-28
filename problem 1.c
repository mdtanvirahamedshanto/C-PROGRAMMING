
//HSC Ict Problem 1
//write by Md Tanvir Ahamed Shanto


#include<stdio.h>
int main()
{
    int a, b, c, sum;
    float avg;
    printf("Enter Your 3 Entiger Number:\n");
    scanf("%d%d%d",&a, &b, &c);
    sum = a+b+c;
    avg = (float)sum/3;

    printf("Sum Of Three Number %d \n", sum);

    printf("Avg Of Three Number %.2f", avg);


return 0;
}
