#define NUM_ITER 19778

#include <header.h>

const int M = 50;

int main_bench()
{
	char s[100];
	char s3[4];
	char _s[4] = {'i','n','g','\0'};
	int n,i,j,t;
	my_scanf("%d",&n);
	while(n--)
	{
		my_scanf("%s",&s);
		j = strlen(s);
		t = 0;
		s3[0] = s[j-3];
		s3[1] = s[j-2];
		s3[2] = s[j-1];
		s3[3] = '\0';
		
		if(!strcmp(_s,s3))
		{
			for(i = 0;i < j-3;i++)
			{
				my_printf("%c",s[i]);
			}
			my_printf("\n");
		}
		else
		{
			for(i = 0;i < j-2;i++)
			{
				my_printf("%c",s[i]);
			}
			my_printf("\n");
		}
	}
	return 0;
}
