#include<stdio.h>
#include<math.h>
int main(){
float min,max,m,a,b;
int i=0;
scanf("%a %f",&a,&b);
if((a*a*a-a*a+2)>0)
{max=a;
min=b;}
else
{min=a;
max=b;}
m=(max+min)/2;

while(fabs(m*m*m-m*m+2)>0.000001){
m=(max+min)/2;
if((m*m*m-m*m+2)>0){
max=m;//max
}	else{
min=m;
}
i++;
	
}
printf("%f\n",m);
printf("%d\n",i);
return 0;
}
