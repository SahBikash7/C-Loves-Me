// Display the given G.P upto n terms:
// 100,50,25 and so on

#include<stdio.h>
int main(){
    int n;
    float a=100;       // The reason i used float because later on dividing by 2 will give us result in decimal.... 
    printf("Enter The No. of terms of G.P:\n");
    scanf("%d",&n);
    printf("The G.P is below:\n");
    for(int i=1;i<=n;i++){
        printf("%.2f ",a);
        a/=2;
    }
    return 0;
}