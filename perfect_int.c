#include<stdio.h>
#include<math.h>
int main(void)
{
int a;
int b=1;
int c=0;
printf("please enter a number :\n");
scanf("%d",&a);

while(b<a){
if(a%b==0)
c=c+b;
b++;
}
if(c==a)
printf("given number is perfect number\n");
else
printf("not a perfect number\n");
return 0;

}
