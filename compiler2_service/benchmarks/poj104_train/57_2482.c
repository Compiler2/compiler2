#define NUM_ITER 27300

#include <header.h>

int main_bench()
{
	int n,z,i,l;
	char word[100];
	my_scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		my_scanf("%s",word);
		l=strlen(word);
		
		for(i=0;i<l;i++)
		{
			if(word[l-3]=='i'&&word[l-2]=='n'&&word[l-1]=='g')
			{
				for(i=0;i<l-3;i++)
					my_printf("%c",word[i]);
				my_printf("\n");
				break;
			}
			else 
			{
				for(i=0;i<l-2;i++)
					my_printf("%c",word[i]);
				my_printf("\n");
				break;

			}
			my_printf("\n");
		}
	}
	return 0;
}
