#define NUM_ITER 903267

#include <header.h>

int main_bench()
{
	int n,i,j,l,max=0,t;
	char s[501];
	char son[500][5];
	int cnt[500]={0},rd[500];
	my_scanf("%d",&n);
	my_scanf("%s",s);
	l=strlen(s);
	for(i=0;i+n-1<=l-1;i++)
	{
		for(j=i;j<=i+n-1;j++)
			son[i][j-i]=s[j];
		son[i][j-i]='\0';
	}
	for(i=0;i<=l-n+1;i++)
	{
		for(j=i;j<=l-n+1;j++)
			if(strcmp(son[i],son[j])==0)
				cnt[i]++;
		if(cnt[i]>max)
		{
			max=cnt[i];
			t=i;
		}
	}
	if(max==1)
		my_printf("NO\n");
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<=l-n+1;i++)
			if(cnt[i]==cnt[t])
				my_printf("%s\n",son[i]);
	}
	return 0;
}