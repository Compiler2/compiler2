#define NUM_ITER 222148

#include <header.h>

int main_bench()
{
    char a[501]={0};
    int n;
	my_scanf("%d", &n);
	my_scanf("%s", a);
	int num=0,i=0;
	char b[500][5]={0},c[5];
    num=strlen(a);
	int sum[500]={0};
	int z=0;
	do
	{
		int j=0;
		for(z=i;z<n+i;z++)
        {
			b[i][j]=a[z];
			j++;
		}
        i++;
        num--;
	}while(num>=n);
    int m=0;
    do
	{
	for(z=0;z<i;z++)
	{
		
        if(strcmp(b[z],b[m])==0&&m!=z)
		{
		 	sum[m]++;
			int j=0;
		    for(j=0;j<5;j++)
				b[z][j]='0';
		}
	}		
    m++;
	}while(m<i-2);
    int q;
	int p=0;
	for(q=0;q<i;q++)
	{
		if(sum[q]>=p)
			p=sum[q];
	}
	if(p==0)
	{
		my_printf("NO");
		return 0;
	}
    my_printf("%d\n", p+1);
	for(q=0;q<i;q++)
	{
		if(sum[q]==p)
		{
	    my_printf("%s\n", b[q]);
		}
	}
}