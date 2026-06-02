#include <stdio.h>
int main()
{
    int a, ones,tens, hundreds, sum, output1, output2;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    ones=a%10;
    tens=(a/10)%10;
    hundreds=a/100;
    sum=ones+tens+hundreds;
    output1=(sum/10)+(sum%10);
    output2=( output1%10)+( output1/10);
    printf("%d",output2);
    return 0;
}
