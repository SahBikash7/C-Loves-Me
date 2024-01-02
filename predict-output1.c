// Predict The Output:
#include<stdio.h>
int main(){
    int j;
    while(j<=10){
        printf("\n%d",j);
        j=j+1;
    }
    return 0;
}

// My Observation:
// i do see the variable j declared but it hasn't been initialized so j stores random garbage value now if u use that j in loop i think either it will go for infinite loop or may be throw an error and terminate the program. 

// Actual Output:
// LOL,The code just terminates and doesn't throw any error!!!