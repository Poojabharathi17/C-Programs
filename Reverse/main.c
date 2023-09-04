#include <stdio.h>
int main()
{
    int num, res=0, rem=0;
    printf("Enter the number:");
    scanf("%d", &num);
    while(num!=0)
    {
        rem=num%10;
        res=res*10+rem;
        num=num/10;
    }
    printf("\n%d", res);
    return 0;
}
