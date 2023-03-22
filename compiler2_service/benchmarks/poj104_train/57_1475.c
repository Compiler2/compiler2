#include <header.h>

int main_bench()
{
	char a[2]={'e','r'},b[2]={'l','y'},c[3]={'i','n','g'};
	char s[20];
	int n,m,j,co;
	my_scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		my_scanf("%s",s);
        co=strlen(s);
		if((s[co-2]==a[0]&&s[co-1]==a[1])||(s[co-2]==b[0]&&s[co-1]==b[1]))
		{
			for(j=0;j<co-2;j++)
				my_printf("%c",s[j]);
		}
		if(s[co-3]==c[0]&&s[co-2]==c[1]&&s[co-1]==c[2])
		{
			for(j=0;j<co-3;j++)
                my_printf("%c",s[j]);
		}
		my_printf("\n");
	}
	return 0;
}

