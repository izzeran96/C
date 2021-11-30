#include<stdio.h>
int glo_variable = 10;
void fungsi1(){
	printf("%d This is global variable fungsi1 =\n",glo_variable);
}

void fungsi2(){
	printf("%d This is global variable fungsi1 =\n",_mainvariable);
}
int main(){
	int _mainvariable = 20;
	printf("%d This is global variable value =\n",glo_variable);
	fungsi1();
	printf("%d This is not global\n",_mainvariable);
}
