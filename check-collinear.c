// You are given three points now WAP to check whether these three points lie on same straight line or not
#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter The X and Y Co-ordinates of the first point:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter The X and Y Co-ordinates of the second point:\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter The X and Y Co-ordinates of the third point:\n");
    scanf("%f%f",&x3,&y3);

    // Method - 1 :
    // float m1=(y2-y1)/(x2-x1);
    // float m2=(y3-y2)/(x3-x2);
    // printf("m1=%.2f and m2=%.2f\n",m1,m2);
    // if(m1==m2){
    //     printf("The Three Points are collinear.\n");
    // }
    // else{
    //     printf("The Three Points are not collinear.\n");
    // }

    // Method - 2 :
    float d1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    float d2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    // printf("d1=%.2f and d2=%.2f\n",d1,d2);
    if(d1==d2){
        printf("The Three Points are collinear.\n");
    }
    else{
        printf("The Three Points are not collinear.\n");
    }
    return 0;
}