#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int m,n,t=1,r[100]={0},i,j;
	my_scanf("%s%s",a,b);
    m=strlen(a); n=strlen(b);
	if(m==n)
	  {for(i=0;i<=m-1;i++)
         for(j=0;j<=n-1;j++)
			if(b[j]==a[i]&&r[j]==0) {r[j]=1; break;}
       for(i=0;i<=n-1;i++)
		 if(r[i]==0) {t=0; break;}
	  } 
	else t=0;
	if(t==1) my_printf("YES\n");
	else my_printf("NO\n");
       return(0);
}