// WAP to print all the even numbers from 1 to 100.

#include<stdio.h>
int main(){
    printf("The even numbers from 1 to 100 is printed below:\n");
    for(int i=1;i<=100;i++){
        if(i%2==0) printf("%d ",i); 
    }
    return 0;
}