#define NUM_ITER 78841

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,j,l1,l2,ia[128]={0},ib[128]={0};
	my_scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)my_printf("NO");
	else
	{
		for(j=0;j<l1;j++)
		    for(i=1;i<=127;i++)
				if(a[j]==i)
				{
					ia[i]++;
					break;
				}
		for(j=0;j<l1;j++)
		    for(i=1;i<=127;i++)
				if(b[j]==i)
				{
					ib[i]++;
					break;
				}
		for(i=1;i<128;i++)
			if(ia[i]!=ib[i])break;
		if(i==128)my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}