#define NUM_ITER 32207

#include <header.h>


int main_bench()
{
  int n,i;
  my_scanf("%d",&n);
  while(n--)
  {
  char a[25];
  my_scanf("%s",a);
  int len=strlen(a);
  int t=1;
  if(!(a[0]>='A'&&a[0]<='Z'||a[0]>='a'&&a[0]<='z'||a[0]=='_'))
  {
    my_printf("no\n");
    continue;
  }
  for(i=0;i<len;i++)
  {
    if(!(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z'||a[i]=='_'||a[i]>='0'&&a[i]<='9'))
    {
      t=0;
      break;
    }
      
  }
  if(t)
  my_printf("yes\n");
  else
  my_printf("no\n");
  }
  return 0;
}