// Predict the Output:
#include<stdio.h>
int main(){
    int i=10;
   while(i=20)
        printf("\nI Love U!");
    return 0;
}

// MY OBSERVATION:ACTUAL OUTPUT
//  while(i=20) actually assigns the value 20 to the variable i and then uses the result of this assignment as the condition for the while loop. Since the value assigned (20) is considered true in a boolean context, the loop will run indefinitely, as long as the condition is evaluated as true.