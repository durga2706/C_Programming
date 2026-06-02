#include<stdio.h>
int main()
{
  int a,ones,tens,sum;
  printf("Enter the number:");
  scanf("%d",&a);
  ones=a%10;
  tens=a/10;
  sum=ones+tens;
  printf("sum of the digits=%d",sum);
  return 0;
}
