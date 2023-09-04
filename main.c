//prime number in c using functions

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    prime(num);
}

int prime(int num)
{
    int count=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
        printf("Prime number");
    else
        printf("Not a prime number");
}
