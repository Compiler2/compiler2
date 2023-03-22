#include <header.h>

int main_bench()
{
    int n,i,j,l,x,maxnumber;
    my_scanf("%d",&n);
    int a[1000];
    char k[1000][30]; 
    int author[27]={0};
    for(i=1;i<=n;i++)
    {
		my_scanf("%d %s",&a[i],k[i]);
		int m;
		m=strlen(k[i]);
		for(j=0;k[i][j]!='\0';j++)
		{
			author[k[i][j]-'A'+1]++;
		}
    }
    int max=0;
    for(i=1;i<=26;i++)
    {
		if(author[i]>max)
		{
			max=author[i];
			maxnumber=i;
		}
    } 
    char who;
    who='A'+maxnumber-1 ;
    my_printf("%c\n",who);
    my_printf("%d\n",max);
    for(i=1;i<=n;i++)
    {
                     for(l=0;l<=strlen(k[i]);l++)
                     if(k[i][l]==who)
                     my_printf("%d\n",a[i]);
    }
    return 0; 
}  