#define NUM_ITER 1093918

#include <header.h>

int main_bench()
{
	int n,m,i=0,j=0,k=0,a[502];
	char s[502],t[502][6];
	my_scanf("%d",&n);
	my_scanf("%s",s);
	m=strlen(s);
	for(i=0;i<m+1-n;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j]=s[i+j];
		}
		t[i][j]='\0';
	}
	for(i=0;i<m+1-n;i++) a[i]=1;
	for(i=0;i<m+1-n;i++)
	{
		if(a[i]==0) continue;
		for(j=i+1;j<m+1-n;j++)
		{
			if(strcmp(t[i],t[j])==0)
			{
				a[i]++;
				a[j]=0;
			}
		}
	}
	for(i=0;i<m+1-n;i++) if(a[i]>k) k=a[i];
	if(k==1) my_printf("NO\n");
	else
	{
		my_printf("%d\n",k);
		for(i=0;i<m+1-n;i++) if(a[i]==k) my_printf("%s\n",t[i]);
	}
}