#include <stdio.h>
int main()
{
    int a, ones,hundreds,output;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    ones=a%10;
    hundreds=a/100;
    output=hundreds*100+ones;
    printf("%d",output);
    return 0;
}
