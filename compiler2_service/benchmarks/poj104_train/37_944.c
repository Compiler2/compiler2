#define NUM_ITER 20229

#include <header.h>



int main_bench()
{
	int t,rd,check=0,output=0;
	char str[100001],*p,*pm;
	my_scanf("%d",&t);
	for(rd=0;rd<t;rd++)
	{
		output=0;
		my_scanf("%s",str);
		p=str;
		for(;p<(str+strlen(str));p++)
		{
			pm=str;
			for(;pm<(str+strlen(str));pm++)
			{
				if(*p==*pm)
				{
					check++;
				}
				if(check==2)
				{
					check=0;
					break;
				}
			}
			if(pm==str+strlen(str))
			{
				my_printf("%c\n",*p);
				check=0;
				output++;
				break;
			}
		}
		if(output==0)
		{
			my_printf("no\n");
		}
	}
	return 0;
}
