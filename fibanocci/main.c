// Fibanocci series without recursion

#include <stdio.h>
int main()
{
    int s1=0, s2=1, i, n;
    int s3=s1+s2;
    printf("Enter the limit:\n");
    scanf("%d", &n);
    printf("%d ", s1);
    for(i=0;i<n;i++)
    {
        printf("%d ", s3);
        s1=s2;
        s2=s3;
        s3=s1+s2;
    }
    return 0;
}
