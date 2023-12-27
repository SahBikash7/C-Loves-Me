// WAP to take an integer input and print the absolute value of the integer.

#include<stdio.h>
int main(){
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    if(num<0){
        num=num*(-1);
    }
    printf("The absolute value of the number is %d.\n",num);
    return 0;
}