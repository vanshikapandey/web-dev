#include<stdio.h>
int main()
{
int a,b,c=0,d=0,m;

printf("Hello World!!!");
printf("\n Enter two numbers:\n");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
m=a%b;
printf("\n Sum of the numbers is:%d",c); 
printf("\n Difference of two numbers is:%d",d);
printf("\n Modulus of two numbers is:%d",m);
 return 0;
}
