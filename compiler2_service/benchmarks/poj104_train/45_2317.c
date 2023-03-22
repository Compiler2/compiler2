#define NUM_ITER 713378

#include <header.h>

main_bench()
{
	char a[50],b[50],c[50]={'\0'};
	my_scanf("%s %s",a,b);
	int la=strlen(a),lb=strlen(b);
	int i,j;
	for (i=0;i<lb;i++)
	{
		for(j=i;j<i+la;j++)
			c[j-i]=b[j];
		if(strcmp(a,c)==0) 
		{
			my_printf("%d\n",i);
			break;
		}
	}
	return 0;
}