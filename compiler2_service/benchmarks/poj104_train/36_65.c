#include <header.h>


int main_bench()
{
	char a[1000],b[1000];
	int i,j,k,l,s,m,p;
	my_scanf("%s %s",a,b);
	j=strlen(a);
	k=strlen(b);
	if(j!=k)
		my_printf("NO");
	else{
		m=0;
		for(l=0;l<j;l++)
		{s=0;p=0;
			for(i=0;i<j;i++)
		
		{if(a[l]==a[i])
		s++;
		if(a[l]==b[i])
			p++;}
			if(s==p)
				m++;}


		
		
		if(m==j) my_printf("YES");
		else my_printf("NO");}


}

