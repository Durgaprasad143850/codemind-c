#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    if(n>2)
    {
        p=n*(n-3)/2;
        printf("%d",p);
    }
}

