#define NUM_ITER 1532780

#include <header.h>


int main_bench()
{
	int len,i,j,b[101],top=0;
	char s[101],boy;
	gets(s);
	boy=s[0];
	for(i=0;s[i];i++)
	{
		if(s[i]==boy)
		{
			b[top]=i;
			top++;
		}
		else if(s[i]!=boy&&s[i]!=' ')
		{
			s[b[top-1]]=' ';
			s[i]=' ';
			my_printf("%d %d\n",b[top-1],i);
			top--;
		}
	}
	return 0;
}