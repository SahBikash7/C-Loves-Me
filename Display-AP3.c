// Display the given AP upto all terms which are positive:
// 100,97,94,.....  

#include<stdio.h>
int main(){
    printf("The A.P is below:\n");
    for(int i=100;i>0;i-=3){
        printf("%d ",i);
    }
    return 0;
}