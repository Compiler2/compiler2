#define NUM_ITER 47420

#include <header.h>



int main_bench()
{
	int n,i;
	char c[50][20],t[50];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
		my_scanf("%s",c[i]);
    for (i=0;i<n;i++)
	{
		t[i]=strlen(c[i])-1;
		if (c[i][t[i]]=='r')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
		}

        if (c[i][t[i]]=='y')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
		}
        if (c[i][t[i]]=='g')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
			c[i][t[i]-2]='\0';
		}
	}
	
	for (i=0;i<n;i++)
		my_printf("%s\n",c[i]);
	return 0;
}
