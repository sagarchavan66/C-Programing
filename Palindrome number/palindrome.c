#include<stdio.h>

void main(void)
{
    int r, n, sum =0, temp;

    printf("Enter number\n");
    scanf("%d", &n);

    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = sum*10+r;
        n = n/10;
    }
    n = temp;
    if(n == sum)
    {
        printf("Palindrome number\n");
    }
    else
        printf("Not a Palindrome number\n");

}
