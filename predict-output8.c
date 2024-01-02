// Predict the Output:
#include<stdio.h>
int main(){
    int i;
   while(i=10){
        printf("\n%d",i);
        i=i+1;
   }
    return 0;
}

// My Observation:Actual Output:
// while(i=10) actually assigns the value 10 to the variable i and then uses the result of this assignment as the condition for the while loop. Since the value assigned (10) is considered true in a boolean context, the loop will run indefinitely, as long as the condition is evaluated as true and i is increased to 11 every time the loop runs but eventually at the start of the loop we reassign the value of i as 10.
// So:

// 10
// 10
// 10
// and so on