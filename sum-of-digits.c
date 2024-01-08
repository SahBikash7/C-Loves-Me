// WAP to print sum of digits of a given number:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,sum=0,rem,temp;
    printf("Enter The Number: ");
    scanf("%d",&num);
    temp=abs(num);
    while(temp!=0){
         //Using !=0 rather than >0 so that the code works for -ve numbers too...
        rem=temp%10;
        temp=temp/10;
        sum+=rem;
    }
    
    printf("The sum of digits of %d is %d.\n",num,sum);
    return 0;
}