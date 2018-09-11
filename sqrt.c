#include<stdio.h>
#include<math.h>
//for square root change code, this is for cube root
int main()
{
float max,min=0,mid,n;
int i=0;
scanf("%f",&n);
max=n;
mid=(max+min)/2;
while(fabs(mid*mid*mid-n)>0.000001)
{
	if((mid*mid*mid-n)>0){
	max=mid;

}
	else
	min=mid;

mid=(max+min)/2;
i++;
}
printf("%f\n",mid);
printf("%d\n",i);

return 0;
}
