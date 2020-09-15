#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("ABC la tam giac \n");
				
			}else{
				printf("ABC khong la tam giac");
			}
			int p = a+b+c;
			printf("p= %d \n",p);
			int S = (sqrt((p)*(p-a)*(p-b)*(p-c)))/2;
			printf("S = %d\n",S);
	}
}
}
