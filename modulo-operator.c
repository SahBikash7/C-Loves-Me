// WAP to take any two numbers a and b where a>b and find the remainder when a is divided by b.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("The remander when %d is divided by %d is %d\n",a,b,a%b);
    return 0;
}