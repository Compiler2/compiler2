#include <header.h>

char str[501][5];
char a[501];
int main_bench()
{
    int n,m,k=0,i,j;
	char temp[5];
	int b[501];
	int max=0;
	my_scanf("%d\n",&n);
	gets(a);
	
    m=strlen(a);
	for(i=0;i<=m-n;i++)
	{
	   for(j=i;j<i+n;j++)   str[i][j-i]=a[j];
	   b[i]=1;
	}
   for(i=0;i<=m-n;i++)
   {
	  for(j=i+1;j<=m-n;j++)
	   if(strcmp(str[i],str[j])==0)  b[i]++;
	  if(b[i]>max)  max=b[i];
   }
    if(max==1)   my_printf("NO");
	else if(max>1)
	{
    my_printf("%d\n",max);
	for(i=0;i<=m-n;i++)
	  if(b[i]==max) 
	  {
	   my_printf("%s",str[i]);
	   my_printf("\n");
	  }
    }
	return 0;
}

