// WAP to print the sum of the given series:
// 1-2+3-4+5-6 ... upto n
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter The Number Of Terms Of The Series: ");
    scanf("%d",&num);
    // for(int i=1;i<=num;i++){
    //    if(i%2==0)
    //     sum=sum-i;
    //    else
    //     sum=sum+i;
    // }
    // printf("The sum of the series upto %d terms is %d.\n",num,sum);

    // Better Way:(Which I couldn't think of)
    if(num%2==0)
        sum= -(num/2);
    else
        sum=(-(num/2))+num;
    printf("The sum of the series upto %d terms is %d.\n",num,sum);
    return 0;
}