//array elements2
#include<stdio.h>
int main()
{
    int size=0,a=[50],i,sum=0;
    scanf("%d",&size);
    for(i=0,i<size;sacnf("%d",&a[i++]));
    for(i=0;i<size;printf("%d",a[i]),sum+=a[i++]);
    printf("sum of all elements is %d",sum);
}