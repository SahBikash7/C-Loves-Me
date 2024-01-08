// WAP to print and store the reverse of a number:
#include<stdio.h>
int main(){
    int num,rev_num=0,temp_num,rem;
    printf("Enter The Number: ");
    scanf("%d",&num);
    temp_num=num;
    while (temp_num!=0)
    {
        rem=temp_num%10;
        printf("%d ",rem);
        rev_num=rev_num*10+rem;
        printf("%d ",rev_num);
        temp_num=temp_num/10;
        printf("%d\n",temp_num);
    }
    printf("The reverse of %d is %d.\n",num,rev_num);
    return 0;
}