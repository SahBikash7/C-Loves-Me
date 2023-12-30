// WAP to print odd numbers in between 1 and 100..

#include<stdio.h>
int main(){
    printf("The Odd Numbers From 1 to 100 is below:\n");
    for(int i=1;i<=100;i++){
        if(i%2==0){
            continue;         //Skips The Iteration for that particular value of i
        }
        else{
            printf("%d ",i);
        }
    }
}