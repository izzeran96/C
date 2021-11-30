#include<stdio.h>
int main()
{
	int g=20;
	printf("%d\n",g);
	gh();
	ng();
}

void gh(){
	int gh = 10;
	printf("%d\n Global Variable",g);
}

void ng(){
	int gn = 30;
	printf("%d\n Not Global Variable =",gn);
}
