#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks = 80;
    switch (marks)
    {
    case 90:
        printf("excellent");
        break;
    case 75:
        printf("very good");   
        break;
    case 60:
    printf("good");
        break;
    case 40:
    printf("ok");
    break;
    default:
    printf("grade unavailable");

    }
}