#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int a=0,b=1;
	int sum=a+b;
	printf("%d %d ",a,b);
	for(int i=2;i<num;i++){
		printf("%d ",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	return 0;
}
