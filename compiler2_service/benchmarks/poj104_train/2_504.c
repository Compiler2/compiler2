#define NUM_ITER 4355

#include <header.h>

int main_bench()
{
	struct author
	{
		char nm;
		int bk[999];
		int count;
	};
	struct author a[26];
	struct author max;
	struct book
	{
		char at[26];
		int no;
	};
	struct book b;
	int i,j,n,m,k,flag;
	for(i=0;i<26;i++)
	{
		a[i].count=0;
		a[i].nm=65+i;
	}
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%s",&b.no, b.at);
		m=strlen(b.at);
		flag=0;
		for(j=0;j<m;j++)
		{
			for(k=0;k<26;k++)
			{
				if(b.at[j]==a[k].nm)
				{
					a[k].bk[a[k].count]=b.no;
					a[k].count++;
					flag++;
					break;
				}
			}
			if(flag==m)
				break;
		}
	}
	max=a[0];
	for(i=1;i<26;i++)
	{
		if(a[i].count>max.count)
		{
			max=a[i];
		}
	}
	my_printf("%c\n%d\n",max.nm,max.count);
	for(i=0;i<max.count;i++)
	{
		my_printf("%d\n",max.bk[i]);
	}
	return 0;
}