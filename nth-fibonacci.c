#include<stdio.h>
int main(){
    int num,a=0,b=1,c;
    printf("Enter The Number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i==num){
            printf("The %dth term of the fibonacci series is %d.\n",i,a);
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}