#include <header.h>

int main_bench()
{
    char a[10000],b[50][50],lo[50],sh[50];
    int n,i,j,k=0,p[51],max=0,min=100;
    gets(a);
    n=strlen(a);
    
    j=0;
    for(i=0;i<n;i++)
    {    if(a[i]!=' '&&a[i]!='.')
          { b[j][k]=a[i];
           k++;}
           else if(a[i]==' ')
           {k=0;
           j++;} 
           
                    }
                 
  
    while(j>=0){
    p[j]=strlen(b[j]);
  
    if(p[j]<=min)
    {strcpy(sh,b[j]);
    min=p[j];
    }
    if(p[j]>=max)
    {strcpy(lo,b[j]);
    max=p[j];}
    j--;
}
  
     my_printf("%s\n",lo);
     my_printf("%s",sh);
     return 0;
    
    } 
