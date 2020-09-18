#include <stdio.h>
int main(){
	int n,S=1;
	for(int i=0;i<=199;S+=i,i++);
	printf("\nS= %d",S);
}
