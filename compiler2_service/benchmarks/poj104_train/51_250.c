#define NUM_ITER 58820

#include <header.h>

int main_bench()
{
	int n,i,j,len,m,count,c[300]={0},max;
	char s[501],t[300][5],*p,temp[501];
	for(i=0;i<5;i++)
		for(j=0;j<300;j++)
			t[j][i]='\0';
	my_scanf("%d\n",&n);
	gets(s);
	strcpy(temp,s);
	
	len=strlen(s);
	for(i=0;i<=len-n;i++)
	{
		j=0;
		m=i;
		for(count=0;count<n;count++)
			t[i][j++]=s[m++];
	}
	for(i=0;i<len-n;i++)
	{
		for(j=i+1;j<=len-n;j++)
			if(strcmp(t[i],t[j])==0) c[i]++;
	}
	max=c[0];
	for(i=0;i<=len-n;i++)
			if(c[i]>max) max=c[i];
	if(max==0)
	{
		my_printf("NO\n");
		return 0;
	}
	my_printf("%d\n",max+1);
	for(i=0;i<=len-n;i++)
		if(c[i]==max) my_printf("%s\n",t[i]);
	
	return 0;
	}