#define NUM_ITER 13879

#include <header.h>

int main_bench()

{
	int i=1,m=0,len[300];
	char c,str[20];
	my_scanf("%s",str);
	len[0]=strlen(str);
	while((c=getchar())!='\n')
	{
		my_scanf("%s",str);
		len[i]=strlen(str);
		i++;
	}
	m=i;
	if (m==1) my_printf("%d",len[0]);
	else
	{
		my_printf("%d,%d,",len[0],len[1]);
		for(i=2;i<m-1;i++)
		my_printf("%d,",len[i]);
		my_printf("%d",len[m-1]);
	}
}

