#include<stdio.h>
int sum(int n);
int main(){
	printf("sum is %d",sum(5));
	return 0;
}
int sum(int n){
	if (n==1){
		return 1;
	}
	int sumnm1=sum(n-1);                        //sumnm1= sum(n-1)
	int sum=n+sumnm1;
	return sum;
}
