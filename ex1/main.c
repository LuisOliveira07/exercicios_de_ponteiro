#include <stdio.h>
#include <stdlib.h>

 void trocarValores(int*a,float*b,char*c){
 int inteiro=*a;
	*a=18;
	*b=24.6;
	*c='L';
	
}
int main(){
	int a=17;
	float b=17.8;
	char c='P';
	
	printf("Antes da troca: a=%d,b=%.2f,c=%c\n",a,b,c);
	trocarValores(&a,&b,&c);
	printf("Apos a troca:a = %d,b = %.2f,c=%c\n",a,b,c);
	return 0;
}
