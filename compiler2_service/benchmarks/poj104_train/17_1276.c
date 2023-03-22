#define NUM_ITER 1848151

#include <header.h>


int main_bench()
{
    char a[110],b[110];
	while(my_scanf("%s",&a)==1)
	{
		strcpy(b,a);
		int len=strlen(a);
		int i,t,s,q=1;
		while(q)
		{
			q=0;
			t=-1;s=-1;
			for(i=0;i<len;i++)
			{
				if(a[i]==40)
					t=i;
				else if(a[i]==41)
				{
					if(t>=0)
					{
						a[t]=48;
						a[i]=48;
						q=1;
						break;

					}
					    
				}
			}


		}
		for(i=0;i<len;i++)
			my_printf("%c",b[i]);
		my_printf("\n");
		for(i=0;i<len;i++)
		{
			if(a[i]=='(')
				my_printf("$");
			else if(a[i]==')')
				my_printf("?");
			else 
				my_printf(" ");
		}
			my_printf("\n");
	
		
	}
	return 0;
}