#define NUM_ITER 1347231

#include <header.h>

int main_bench()
{
	char zf[300*100];
	gets(zf);
	int i,j=0,k=0;
	int length[300];
	int len=strlen(zf);
	for(i=0;i<len;i++)
	{
		k++;
		if(zf[i]==' ')
		{
			length[j]=k-1;
			j++;
			k=0;
		}
		if(i==len-1)
		{
			length[j]=k;
			j++;
			break;
		}
	}
	my_printf("%d",length[0]);
	for(i=1;i<j;i++)
	{
		if(length[i]==0) continue;
		my_printf(",%d",length[i]);
	}
	return 0;
}
