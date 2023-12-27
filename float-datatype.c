// Understand float datatype

#include<stdio.h>
int main(){
    float a=5/2;
    float b=5.0/2;
    float c=5/2.0;

    // if we divide any integer by an integer we always get an integer which then gets converted to the float datatype as we have used float variable to store the answer
    // i.e.
            // float a=5/2 is equivalent to float a=2

    printf("The values of a b and c are %f,%f and %f\n",a,b,c);
    return 0;
}