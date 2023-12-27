// Take positive number input and tell if it is a three digit number or not.

#include<stdio.h>
int main(){
    int num;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    if(num>99 && num<1000){
        printf("The Number %d is a three digit number.\n",num);
    }else{
        printf("The Number %d is not a three digit number.\n",num);
    }
    return 0;
}