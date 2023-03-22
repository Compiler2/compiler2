#include <header.h>

int find(char a,int b,int c);
int main_bench()
{
	char d;
	my_scanf("%c",&d);
	find(d,0,1);

}
int find(char a,int b,int c)
{
	char t;
    my_scanf("%c",&t);
	while(t==a)
	{
		c=find(a,c,c+1);
		my_scanf("%c",&t);
	}
	my_printf("%d %d\n",b,c);
	return c+1;
}