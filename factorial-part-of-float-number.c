// WAP to take input a float number and print the fractional part of it

#include<stdio.h>
int main(){
    float num;
    int inum;
    printf("Enter The Decimal Number: ");
    scanf("%f",&num);
    inum=num;
    printf("The fractional part of %f is %f\n",num,(num-inum));
    return 0;
}