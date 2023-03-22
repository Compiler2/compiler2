#include <header.h>

main_bench()
{
	int a[300],i,max=0,mid=0;
	char c;
	for(i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		c=getchar();
        if(c=='\n') break;
		else
		{
			if(max<a[i])
			{
				mid=max;max=a[i];
			}
		else if(a[i]>mid&&a[i]<max) 
		{
		mid=a[i];
		}}
	}
	if(max<a[i]) {mid=max;max=a[i];}
		else if(a[i]>mid&&a[i]<max) mid=a[i];
	if(max==mid||mid==0) my_printf("No");
	else my_printf("%d\n",mid);
	return 0;
}
