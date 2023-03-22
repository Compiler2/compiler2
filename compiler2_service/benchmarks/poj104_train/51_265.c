#include <header.h>

int main_bench()
{
  
    char a[500];
    char str[500][6]={{'\0'},{'\0'}}; 
    int c[500]={0}; 
    int n,l,i,j,max;
    my_scanf("%d",&n); 
    my_scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l-n;i++)
      for(j=0;j<=n-1;j++)
        str[i][j]=a[i+j];
    for(i=0;i<=l-n;i++)
    {
     for(j=i;j<=l-n;j++)
     if(strcmp(str[j],str[i])==0)
     c[i]++;
    }
    max=c[0];
    for(i=1;i<=l-n;i++)
    if(c[i]>max) max=c[i]; 
    if(max==1) my_printf("NO");
    else  
    {
      my_printf("%d\n",max); 
      for(i=0;i<=l-n;i++)
      if(c[i]==max) 
      my_printf("%s\n",str[i]);
    } 
    return 0;
} 
      