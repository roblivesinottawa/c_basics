#include <stdio.h>
#include <stdlib.h>

void Add(int num1,int num2){
    int sum = num1 + num2;
    printf("sum is %d", sum);
}

int main()
{
    Add(10, 20);
}