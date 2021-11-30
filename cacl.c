#include<stdio.h>
#include<math.h>
//Kod dibaca dari atas ke bawah
void multiply(int a,int b){
	int sum;
	scanf("%d\n",&a,&b);
	sum = a*b;
	printf("%d",sum);
}
void add(int a,int b){
	int sum;
	scanf("%d\n",&a,&b);
	sum = a+b;
	printf("%d",sum);
}
void minus(int a,int b){
	int sum;
	scanf("%d\n",&a,&b);
	sum = a-b;
	printf("%d",sum);

}
int main(){
	int x;
	int a,b;
	printf("Put Your Selection:");
	printf("\n1.Multiply\n2.Add\n3.Minus\n");
	scanf("%d\n",&x);
	switch(x){
		case 1:
			multiply(a,b);
			break;
		case 2:
			add(a,b);
			break;
		case 3:
			minus(a,b);
			break;
		default:
			printf("Fault Selection");
			return 0;
	}
}
