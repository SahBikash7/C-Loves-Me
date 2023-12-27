// Any year is taken input from the keyboard now write a program to determine whether the year is leap year or not.(Considering leap year occurs after every 4 years)


// NOTE:A leap year is exactly divisible by 4 except for century years (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year:\n");
    scanf("%d",&year);
    if(year%4==0 || year%400==0){
        printf("%d is a leap year.\n",year);
    }else{
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}