#include <header.h>

int count(char b[][6],char c[],int d[],int num)
{
  int k=0;
  while(k<num && strcmp(b[k],c)!=0)   {++k;}
  if(k<num)
  {
    d[k]++;
    return num;
  }
  else
    {
      strcpy(b[num],c);
      d[num]=1;
      return num+1;
      }
   }
int main_bench()
{
  char a[301],b[301][6],c[6];
  int i,j,k,l,n,num,d[301],max;
  my_scanf("%d\n",&n);
 my_scanf("%s",a);
  l=strlen(a);
  num=0;
  for(i=0;i<=l-n;++i)
  {
    for(j=0;j<n;++j)
    {
      c[j]=a[i+j];
    }
    c[j]='\0';
    num=count(b,c,d,num);
  }
  max=d[0];
   for(i=0;i<num;i++)
   {
       if(d[i]>=max)    max=d[i];
   }
   if(max==1)   my_printf("NO");
   else
   {
   my_printf("%d\n",max);
   for(k=0;k<l-n;k++)
   {
       if(d[k]==max)    my_printf("%s\n",b[k]);
   }
   }
}