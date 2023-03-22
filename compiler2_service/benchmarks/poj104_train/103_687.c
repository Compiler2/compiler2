#include <header.h>

int main_bench()
{
	int i,now;
	char c,x;
	c=' ';now=1;
	my_scanf("%c",&c);
	if (c>=97) c=c-32;
	do{
		my_scanf("%c",&x);
		if (x==c||x-c==32) {
			now++;
		}
		else {
			my_printf("(%c,%d)",c,now);
			now=1;
			c=x;
			if (c>=97) c=c-32;
		}
	}
	while (c!='\n');
return 0;
}

