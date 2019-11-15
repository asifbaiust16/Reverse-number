#include<stdio.h>
int main()
{
    int n,d1,d2,d3,d4;

    printf("Enter a four digit number:\n");
    scanf("%d",&n);

    d1=n%10;
    d2=(n%100)/10;
    d3=(n%1000)/100;
    d4=n/1000;

    printf("\nThe revers number is:%d%d%d%d\n3",d1,d2,d3,d4);

    return 0;
}
