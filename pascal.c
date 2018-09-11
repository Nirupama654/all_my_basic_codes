#include<stdio.h>
#include<math.h>
int main(){
int i,j,k,coef;
scanf("%d",&k);
for(i=0;i<k;i++){
for(int m=0;m<k-i-1;m++){
printf(" ");
}
	for(j=0;j<=i;j++){
if(i==0 || j==0){
	coef=1;	
}
else
coef=coef*(i-j+1);
printf("%d ",coef);
}
printf("\n");
}

return 0;
}
