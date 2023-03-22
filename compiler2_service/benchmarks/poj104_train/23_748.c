#define NUM_ITER 1397863

#include <header.h>


main_bench()
{
	int i,j;
	char *p,s[100][100],c;
	c=' ';
	i=0;
	p=*s;
	while (c==' ') 
	{
		my_scanf("%s",p);
		c=getchar();
		i++;
        p=*(s+i);
	}
    for (j=i-1;j>0;j--)
	{
		p=*(s+j);
		my_printf("%s ",p); 
	}
	p=*s;
    my_printf("%s\n",p);
}