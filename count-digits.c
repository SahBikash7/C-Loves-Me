// WAP to count digits of a given number:
#include<stdio.h>
int main(){
    int num,count=0,temp;
    printf("Enter The Number: ");
    scanf("%d",&num);
    temp=num;
    if(num==0){
        count++;
    }
    else
    {while(temp!=0){
         //Using !=0 rather than >0 so that the code works for -ve numbers too...
        count++;
        temp=temp/10;
    }}
    
    printf("The number of digits in %d is %d.\n",num,count);
    return 0;
}