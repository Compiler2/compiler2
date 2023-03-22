#define NUM_ITER 922596

#include <header.h>

int main_bench()
{
	int N;my_scanf("%d",&N);
	getchar();
	char str[550];
	gets(str);
	int strl=strlen(str);
	char strm[550][10];
	int strn[550]={0};
	for(int i=0;i<=strl-N;i++)
	{
		for(int j=0;j<N;j++)
		{
			strm[i][j]=str[i+j];
		}
		strm[i][N]='\0';
	}
	int max=0;
	for(int i=0;i<=strl-N;i++)
	{
		for(int j=i;j<=strl-N;j++)
		{
			if(strcmp(strm[i],strm[j])==0) strn[i]++;
		}
		if(max<strn[i]) max=strn[i];
	}
	if(max==1)
	{
		my_printf("NO");return 0;
	}
	my_printf("%d\n",max);
	for(int i=0;i<=strl-N;i++) if(max==strn[i]) puts(strm[i]);
	return 0;
}