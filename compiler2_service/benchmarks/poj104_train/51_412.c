#define NUM_ITER 851804

#include <header.h>

int n;
int check(char s[],int i,int j)
{
	int k,p=1;
	for(k=0;k<n;k=k+1)
		if (s[i+k]!=s[j+k])
		{
			p=0;
			break;
		}
	return p;
}
int main_bench()
{
	int l,p,a[501]={0},i,j,max=0;
	char  s[501];
	my_scanf("%d\n",&n);
	gets(s);
	l=strlen(s);
	for(i=l-n-1;i>=0;i=i-1)
		for(j=i+1;j<=l-n;j=j+1)
		{
			p=check(s,i,j);
			if (p)
			{
				a[i]=a[j]+1;
				if (a[i]>max)
					max=a[i];
				break;
			}
		}
 if(max==0)  my_printf("NO");
 else
 {
	 p=0;
	 my_printf("%d\n",max+1);
	 for(i=0;i<l-n;i=i+1)
	 {
		 if (a[i]==max)
		 {
			 if(p) my_printf("\n");
			 p++;
			 for(j=0;j<n;j=j+1)
				 my_printf("%c",s[j+i]);
		 }
	 }
 }
 return 0;
}
