//Grater then Number & Less then Number in C

#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter Your 1st Number: ");
    scanf("%d",&a);
    printf("Enter Your 2nd Number: ");
    scanf("%d",&b);

    if(a == b)
    {
        printf("They Are Equal");
    }
    else if(a > b)
    {
        printf("%d Grater then %d",a,b);
    }
    else if(a < b)
    {
        printf("%d Less then %d",a,b);
    }


return 0;
}
