// Take three numbers input and check if they can be the sides of the triangle

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("The Numbers %d, %d and %d can be the three sides of a triangle.\n",a,b,c);
    }
    else{
        printf("The Numbers %d, %d and %d cannot be the three sides of a triangle.\n",a,b,c);
    }
    return 0;
}