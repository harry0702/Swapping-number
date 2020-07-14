#include<stdio.h>
void main()
{
int a,b,temp;
printf("\n Enter the values of a and b:");
sacnf("%d %d",&a,&b);
printf("\n values of a and b before swapping is %d and %d rspectively",a,b);
temp=a;
a=b;
b=temp;
printf("\n values a and b after swapping is %d and %d respectively",a,b);
}
