// WAP to pprint all the alphabets and their corresponding ASCII values:
#include<stdio.h>
int main(){
    for(int i=65,j=97;i<=90,j<=122;i++,j++){
        char cC=(char)i,cS=(char)j;
        printf("%c:%d\t%c:%d\n",cC,i,cS,j);
    }
    return 0;
}