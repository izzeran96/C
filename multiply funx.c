#include<stdio.h>
#include<math.h>

void multiply(int a,int b){
	int total;
	total = a * b;
	printf("%d\n",total);		
}
void letter(char* c){
//	char* c;
	printf("%s\n",c);
}
int main(){
	int k,d;
	k =10 ;
	d =20;
	multiply(k,d);
	letter("Hellow world");
}
