#include<stdio.h>

int main()
{
    int no=0,t=0,s=0;
    scanf("%d",&no);
    t=no;
    while(no>)
    {
        s=(*10)+(no%10);
        no/=10;
    }
    printf("%d--%d",t,s);
    return0;
}