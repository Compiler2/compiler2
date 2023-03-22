#define NUM_ITER 945036

#include <header.h>

int main_bench()
{
	char a[100]={""},b[100]={""};
	int t1=0,t2=0,i,j,time;
	my_scanf("%s%s",a,b);

	t1=strlen(a);
	t2=strlen(b);

	if(t1!=t2)
		my_printf("NO");
	time=0;
	if(t1==t2)
	{
		for(i=0;i<t1;i++)
		{
			for(j=0;j<t1;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='0';
					time++;
					break;
				}
			}
		}
		if(time==t1)
			my_printf("YES");
		else
			my_printf("NO");
	}

}