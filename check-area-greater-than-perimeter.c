    // Given the length and the breadth of the rectangle,WAP to find whether the area of the rectangle is greater than its perimeter.

#include<stdio.h>
int main(){
    int length,breadth,perimeter,area;
    printf("Enter the length and the breadth of the rectangle:\n");
    scanf("%d%d",&length,&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    if(area>perimeter){
        printf("The area of the rectangle i.e. %d is greater than its perimeter i.e. %d.\n",area,perimeter);
    }
    else if(area==perimeter){
        printf("The area of the rectangle i.e. %d is equal to its perimeter i.e. %d.\n",area,perimeter);
    }
    else{
        printf("The area of the rectangle i.e. %d is smaller than its perimeter i.e. %d.\n",area,perimeter);
    }
    return 0;
}