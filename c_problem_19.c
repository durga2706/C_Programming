include <stdio.h>
int main() {
    int num, hundreds, tens;
    printf("Enter a three digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;
    tens = (num / 10) % 10;
    num = hundreds * 100 + tens * 10 + 2;
    printf("The number is=%d",num);
    return 0;
}
