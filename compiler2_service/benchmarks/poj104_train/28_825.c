#define NUM_ITER 1044758

#include <header.h>

int main_bench()
{
	char a[1301]={0};
	int i,j,l,t=0;
	gets(a);
	l=(int)strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
			t=t+1;  
			if(t!=0&&a[i]==' ')
			{
			    my_printf("%d,",t);
		     	t=0;
			}
	}
	my_printf("%d",t);
         return 0;
}