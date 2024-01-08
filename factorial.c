// WAP to find the factorial of a number:
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    printf("The factorial of %d is %d.\n",num,fact);
    return 0;
}