#include<stdio.h>
int main()
{
int a=2,b,c,d=0;
printf("these number are prime number\n");
while(a<100)
{d=0;
b=2;
for(;b<=a/2;){
if(a%b==0)
	d=1;
b++;
}
if(d==0){
printf("%d\n",a);

}
a++;
}
return 0;

}
