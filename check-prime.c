// WAP to check if a given number is prime number or not:
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter The Number: ");
    scanf("%d",&n);
    for(int i=2;i<(n/2);i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(n==1){
        printf("The Number %d Is Neither Prime Nor Composite.\n",n);
    }
    else if(count==0){
        printf("The Number %d Is Prime.\n",n);
    }
    else{
        ("The Number %d Is Not Prime.\n",n);
    }
    return 0;
}