#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before Swapping");
	printf("\n%d\t%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nAfter Swapping");
	printf("\n%d\t%d",a,b);
}
