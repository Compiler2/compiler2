#define NUM_ITER 500932

#include <header.h>

int main_bench()
{
  char c[100],d[100];
  int a,n=0,b,l,i,j,e;
  my_scanf("%d %s %d",&a,c,&b);
  l=strlen(c);
  for(i=0;i<=l-1;i++)
  {
    if(c[i]>='A'&&c[i]<'a')
    e=c[i]-'A'+10;
    else if(c[i]>='a')
    e=c[i]-'a'+10;
    else
    e=c[i]-'0';
    n=n*a+e;                 
  }
  for(i=0;;i++)
  { 
    d[i]=n%b;
    n=n/b;
    if(d[i]>=10)
    d[i]=d[i]-10+'A';
    else
    d[i]=d[i]+'0';
    if(n==0)
    break;                 
  }
  for(j=i;j>=0;j--)
  my_printf("%c",d[j]);
  my_printf("\n");
  getchar();
  getchar();
  getchar();
  getchar();      
}
