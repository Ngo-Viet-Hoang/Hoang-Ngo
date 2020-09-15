#include <stdio.h>
#include<math.h>
int main(){
	int a,b;
	printf("Nhap a =");
	scanf("%d",&a);
	printf("Nhap b =");
	scanf("%d",&b);
	if(a>=b){
		printf("x1= %d",(a/b));
	}else{
		printf("x2= %d",(a*b));
	}		
}

