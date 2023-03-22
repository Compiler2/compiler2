#define NUM_ITER 1258618

#include <header.h>

int main_bench()
{
	int n,i,j,k,l,x[500],max;
	char s[500],s1[500][5];
	my_scanf("%d%s",&n,s);
	l=strlen(s);
	for(i=0;i<=l-n;i++)
		for(j=i,k=0;k<n;j++,k++)
			s1[i][k]=s[j];
	for(i=0;i<=l-n;i++)
	{
		x[i]=1;
		for(j=i+1;j<=l-n;j++)
			if(strcmp(s1[i],s1[j])==0)
			{
				x[i]++;
				x[j]=-500;
			}
	}
	max=x[0];
	for(i=1;i<=l-n;i++)
		if(x[i]>max)
			max=x[i];
	if(max==1)
		my_printf("NO");
	else{
	my_printf("%d\n",max);
	for(i=0;i<=l-n;i++)
		if(x[i]==max)
			my_printf("%s\n",s1[i]);	
	}
}