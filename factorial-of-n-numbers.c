// WAP to find the factorial of first n number:
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number upto which u want the factorial: ");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        if(i==0){
            printf("The Factorial of 0 is 1.\n");
        }else{
           fact=fact*i; 
           printf("The Factorial of %d is %d.\n",i,fact);
        }
    }
    return 0;
}