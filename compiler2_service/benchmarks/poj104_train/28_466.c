#include <header.h>

int main_bench()
{
	char c[3000];
	int i,k=0,b=0;
	gets(c);
	for(i=0;i<=strlen(c);i++) 
	{
		if (i==strlen(c)) {my_printf("%d",k);break;}
		else if(c[i]!=' ') {k++;b=1;}
		else if(b==1) {my_printf("%d,",k);k=0;b=0;}
	}
}