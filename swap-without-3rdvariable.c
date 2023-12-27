// WAP to swap two variables without using a third variable...

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("The values of a and b are %d and %d respectively.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Execution of the code the values of a and b are %d and %d respectively.\n",a,b);
    return 0;
}