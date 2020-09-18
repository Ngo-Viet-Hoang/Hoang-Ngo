#include <stdio.h>
int main(){
	int n,S=(1/2);
	printf("Nhap n =");
	scanf("%d",&n);
	for(int i = 0;i<n;S+=,i++)
	printf("\nS= %f",S);
}
