#include <stdio.h>
int main(){
	int n,S=0;
	printf("Nhap n =");
	scanf("%d",&n);
	for(int i=0;i<=n;S+=i,i++);
	printf("\nS = %d",S);
}
