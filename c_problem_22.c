#include <stdio.h>
int main()
{
    int a, rem, tens, output;
    printf("Enter a number: ");
    scanf("%d", &a);
    tens=(a/10)%10;
    rem=tens%2;
    output=a-(5*rem);
    printf("%d",output);
    return 0;
}
