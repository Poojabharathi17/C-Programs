//Armstrong Number using Pointers

#include<stdio.h>
int main()
{
    int num, res=0, rem=0, *pr, *p, temp;
    printf("Enter the number:\n");
    scanf("%d", &num);
    temp = num;
    pr=&temp;
    p=&res;
    while(*pr!=0)
    {

        rem=(*pr)%10;
        *p=(*p)+(rem*rem*rem);
        *pr=(*pr)/10;

    }

    if((*p)==num)
    {
        printf("\nIt is an Armstrong Number");
    }
    else{
        printf("\nNot an Armstrong Number");
    }
    return 0;
}

