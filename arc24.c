#include<stdio.h>
int main()
{
    int n=0,*p=&n;
    scanf("%d",&n);
    *p=37;
    printf("var n value%daddress is %x,n,%n");

    return 0;
    
}