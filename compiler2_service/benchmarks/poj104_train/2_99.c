#include <header.h>

int main_bench()
{
    int m,i,j,x,maxnumber;
    my_scanf("%d",&m);
    int booknum[1000];
    char k[1000][30]; 
    int author[27]={0};
    for(i=1;i<=m;i++)
    {
		my_scanf("%d %s",&booknum[i],k[i]);
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
    for(i=1;i<=m;i++)
    {
                     for(j=0;j<strlen(k[i]);j++)
                     if(k[i][j]==who)
                     my_printf("%d\n",booknum[i]);
    }
    return 0; 
}  
