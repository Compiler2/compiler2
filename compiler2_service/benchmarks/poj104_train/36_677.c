#define NUM_ITER 796775

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,j,l1,l2,tag1[100]={0},tag2[100]={0},m=0;
	my_scanf("%s%s",&a,&b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		my_printf("NO");
	else
	{
		for(i=0;i<l1;i++)
			for(j=0;j<l1;j++)
			{
				if(tag2[j]!=0)
					continue;
				if(a[i]==b[j])
				{
					tag1[i]=1;
					tag2[j]=1;
					break;
				}
			}
				for(i=0;i<l1;i++)
					if(tag1[i]==0)
					{
						m=1;
						break;
					}
					if(m==0)
						my_printf("YES");
					else
						my_printf("NO");
	}
}
