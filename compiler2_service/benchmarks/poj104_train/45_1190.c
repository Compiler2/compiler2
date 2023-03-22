#define NUM_ITER 1112061

#include <header.h>

int main_bench()
{
	char qian[60],quan[110];
	gets(quan);
	int i,j,numquan,numqian=0;
	numquan=strlen(quan);
	for(i=0;i<60;i++)
	{
		if(quan[i]!=' ')
		{
			qian[i]=quan[i];
			numqian++;
		}
		else
		{
			break;
		}
	}
	int jishu=0;
	for(j=numqian+1;j<numquan;j++)
	{
		for(i=0;i<numqian;i++)
		{
			if(qian[i]!=quan[j])
			{
				jishu=0;
				break;
			}
			else
			{
				jishu++;
				j++;
				if(jishu==numqian)
				{
						my_printf("%d",j-2*numqian-1);
				}
			}
		}
	}
return 0;

}