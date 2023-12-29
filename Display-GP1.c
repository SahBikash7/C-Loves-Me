// WAP to printthe given GP upto n terms:
// 1,2,4,8,16,32.....

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter The No. of terms of G.P:\n");
    scanf("%d",&n);
    printf("The G.P is below:\n");
    for(int i=1;i<=pow(2,(n-1));i=i*2){
        printf("%d ",i);
    }
    return 0;
}