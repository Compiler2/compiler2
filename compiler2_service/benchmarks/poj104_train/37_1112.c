#define NUM_ITER 26290

#include <header.h>

int main_bench()
{
    int n,flag,bigflag=0;
	long int len,i,j;
	char s[100000];
	my_scanf("%d",&n);
	while(n--)
	{
		bigflag=0;
		my_scanf("%s",s);
		len=strlen(s);
		for(i=0;i<len-1;i++)
		{ 
			flag=0;
			for(j=0;j!=i;j++)
			if(s[i]==s[j])
			   {
				   flag=1;
			   }
			for(j=len-1;j!=i;j--)
			if(s[i]==s[j])
			   {
				   flag=1;
			   }

            if(flag==0) 
			{
				my_printf("%c\n",s[i]);
				bigflag=1;
				break;
			}
		}
		if(bigflag==0)
		{
			my_printf("no");
			my_printf("\n");
		}
	}
	return 0;

}