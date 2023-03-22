#include <header.h>

int main_bench()
{   int n,i,j,k;
    char p[21];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",p);
	 if(p[0]>='0'&&p[0]<='9')
	 {
		 my_printf("no\n");
	 }
	 else
	 {
	 for(j=0,k=0;j<strlen(p);j++)
	 {if((p[j]>='A'&&p[j]<='Z')||p[j]=='_'||(p[j]>='a'&&p[j]<='z')||(p[j]>='0'&&p[j]<='9'))
         k++;	
	 }
	 if(j==k)
		 my_printf("yes\n");
	 else
		 my_printf("no\n");
	}
	}
	return 0;
}
