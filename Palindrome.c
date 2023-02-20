#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	int rev=0,n;
	n=num;
	while(num>9){
		rev+=num%10;
		num=num/10;
		rev=rev*10;
	}
	rev+=num;
	if(rev==n){
		printf("Palindrome");
	}
	else{
		printf("Not Palindrome");
	}
}
