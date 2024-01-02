// Predict The Output:
#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n%d %d %d",x,y,z);
    return 0;
}

// My Observation:Actual Output
// y=--x is the pre-decrement(decrement and then use) of x so x is decreased by 1 at first and then it is stored in y so y=3
// now z=x-- is the post-decrement(use and then decrement) of x so at first z=3 and then the value of x becomes 2;
// so,

// 2 3 3