// WAP to display the given A.P:
// 4,7,10,13,16,...... upto n terms

#include<stdio.h>
int main(){
    int n;
    printf("Enter The No. of terms of A.P:\n");
    scanf("%d",&n);
    printf("The A.P is below:\n");
    for(int i=4;i<=(3*n+1);i+=3){
        printf("%d ",i);
    }


    // Wecan also solve the problem without using the generalterm formula like:
    // int a=4;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",a);
    //     a+=3;
    // }

    return 0;
}