#include <header.h>

int main_bench()
{
  char a[1000];
  my_scanf("%s",a);
  int l,i,b[1000],j;
  l=strlen(a);
  for(i=0;i<l;i++)
  {
    if(a[i]>='a'&&a[i]<='z')
    a[i]=a[i]-'a'+'A';              
  }
  for(i=0;i<1000;i++)
  b[i]=0;
  for(i=0;i<l;i++)
  {
     for(j=i+1;j<l;j++)
     {
        if(a[j]==a[i])
          b[i]++;            
        else
        {
            break;
        }
     }
     b[i]++;
     i=j-1;       
  }
  for(i=0;i<1000;i++)
  {
    if(b[i]!=0)
    my_printf("(%c,%d)",a[i],b[i]);                 
  }
  getchar();
  getchar();  
}
