// Prints the prime number in a given range

#include<stdio.h>
int main()
{
int b,c,d=0 ,m ,n;
printf("Enter the range upto which you want to see the list of prime numbers(lower & upper range respectively) ? \n");
scanf("%d%d",&m,&n);
while(m <= n)
{d=0;
b=2;
for(;b<=m/2;){
if(m%b==0)
	d=1;
b++;
}
if(d==0){
printf("%d\n",m);

}
m++;
}
return 0;

}
