// WAP to find the volume of a sphere
#include<stdio.h>
int main(){
    float rad;
    printf("Enter the radius of the sphere\n");
    scanf("%f",&rad);
    printf("The volume of the sphere of radius %.2f is %.2f\n",rad,(4*3.14*rad*rad*rad)/3);
    return 0;
}