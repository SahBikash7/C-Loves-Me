// Take three positive integer input and print the greatest among them.

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter The Three Numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greatest.\n", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is greatest.\n", num2);
    }
    else
    {
        printf("%d is greatest.\n", num3);
    }
    return 0;
}