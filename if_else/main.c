#include  <stdio.h>
#include  <stdlib.h>


int main()
{
    int age;
    printf("please enter age: ");
    scanf("%d", &age);
    if (age > 18) {
        printf("the age is greater than 18 \n");
        if (age < 21)
        {
            printf("the age is greater than 18 but less than 21");
        } else {
            printf("the age is greater than 18 but not less than 21");
        }
    } else if (age == 18)
    {
        printf("the age is equal to 18");
    } else
    {
        printf("the age is not greater than or equal to 18");
    }
    
}