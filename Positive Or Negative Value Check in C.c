//Positive Or Negative Value Check in C Programme

#include<stdio.h>

int main()
{
    int num;
    printf("Enter Your Value: ");
    scanf("%d",&num);

    if(0 < num)
    {
        printf("%d is a Positive Value",num);
    }
    else if(0 > num)
    {
        printf("%d is a Negative Value",num);
    }


return 0;
}
