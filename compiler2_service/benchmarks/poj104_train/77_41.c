#define NUM_ITER 1395389

#include <header.h>

int main_bench()
{
	int i,j,count=0;
    char line[200],tmp;
	my_scanf("%s",line);
	tmp=line[0];
	for(i=0;line[i];i++) count++;
	for(i=0;line[i];i++)
	{
		if(line[i]==tmp)     
		{
			for(j=i+1;line[j];j++)
			{
				if(line[j]==tmp) break;
				else if(line[j]!=tmp&&line[j]!='0')    
				{
					my_printf("%d %d\n",i,j);
					line[i]=line[j]='0';
					i=0;
				    break;
				}
			}
		}
	}
	my_printf("0 %d\n",count-1);
	return 0;
}