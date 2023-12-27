// This is how loop works:
// 1. Condition check
// 2. loop inner content execution
// 3. increment/updation

// WAP to print numbers from 1 to 100.
#include<stdio.h>
int main(){
    printf("The numbers from 1 to 100 is printed below:\n");
    for(int i=1;i<=100;i++){
        printf("%d\n",i);
    }
    return 0;
}