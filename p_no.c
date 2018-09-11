#include<stdio.h>
int main(void)
{
int a,b,c;
printf("please enter a number\n");
scanf("%d",&a);
for(b=1,c=0; b<a;b++)
{
if(a%b==0)
c+=b;
}
//written using github
if(c==a)
printf("perfect no\n");
else
printf("not a perfect no\n");
return 0;
}
