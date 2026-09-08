#include<stdio.h>
int main()
{
    int a,b,temp=0;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("After Swapping the value of a is %d and value of b is %d",a,b);
return 0;
}