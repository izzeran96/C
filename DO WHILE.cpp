#include<stdio.h>

int main(){
	char ch = 'A';
	do{
		putchar(ch);
		putchar('\n');
		ch++;
	}while(ch != 'Z');
	putchar('\n');
	return 0;
}

