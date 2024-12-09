//array elaments
std#include<io.h>
int main()
{
    int i,n,b[20];
    printf("\n enter no of elements");
    scanf("%d",&n);
    printf("\n enter %d integer elements",n);
    for(i=0;i<=n;i++)   
    scanf("%d",&b[i]);
    printf("\n array elements are xx");
    for(i=0;i<=n;i++)
    printf("\n %d",b[i]); 
    return 0;
}