//Show Message by Your Age in C Program

#include<stdio.h>

int main()
{
    int age;
    printf("What Is Your Age: ");
    scanf("%d",&age);

    if(age <= 12 )
    {
        printf("Your Are A Child.");
    }
    else if(age > 12 && age <=19)
    {
        printf("You Are A Teens.");
    }
    else if(age > 19)
    {
        printf("You Are Older.");
    }

return 0;
}
