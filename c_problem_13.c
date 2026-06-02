#include <stdio.h>
int main()
{
    int a,ones,tens,reverse;
    printf("Enter a two digit number:");
    scanf("%d", &a);
    ones=a%10;
    tens=a/10;
    reverse=ones*10+tens;
    printf("Reverse number = %d",reverse);
    return 0;
}
