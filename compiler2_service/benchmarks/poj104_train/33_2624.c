#include <header.h>


int main_bench()
{
	int n;
	char c;
	my_scanf("%d",&n);
	getchar();
	for(;n>0;n--){
		c=getchar();
		while(c!='\n'){
			switch(c){
			case 'A': putchar('T');break;
			case 'T': putchar('A');break;
			case 'C': putchar('G');break;
			case 'G': putchar('C');break;
			default: break;
			}
			c=getchar();
		}
		putchar('\n');
	}
}