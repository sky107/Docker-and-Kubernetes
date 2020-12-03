#include <stdio.h>
signed main(){
	int a ,sum=0;
printf("Please enter a number: ");
	scanf("%d",&a);
	while(a>0){
int r=a%10;
sum+=r;
a/=10;
}
	printf("Sum of digits of number is %d",sum);
}
