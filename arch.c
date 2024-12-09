 #include<stdio.h>
 int main()
 {
    int a=6,b=20;
    
    printf("before swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after sap a=%d b=%d",a,b);
    return 0;
    }