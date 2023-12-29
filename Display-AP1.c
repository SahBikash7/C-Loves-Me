// Display the given AP upto n terms:
// 1,3,5,7,9..

#include<stdio.h>
int main(){
    int n;
    printf("Enter The No. of terms of A.P:\n");
    scanf("%d",&n);
    printf("The A.P is below:\n");
    for(int i=1;i<=n;i++){
        printf("%d ",(2*i-1));
    }
    return 0;
}