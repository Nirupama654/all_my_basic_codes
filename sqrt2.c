#include<stdio.h>
#include<math.h>

int main(){
float a,b;
int i=0;
printf("enter a number\n");
scanf("%f",&a);
printf("make a guess\n");
scanf("%f",&b);

while(fabs(b*b-a)>0.0001){
b=0.5*(b+a/b);
i++;
printf("%f\n",b);

}
printf("Square root of give number : %f\n",b);
printf("No of steps : %d\n",i);


return 0;
}
