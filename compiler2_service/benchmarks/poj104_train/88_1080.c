#define NUM_ITER 1419619

#include <header.h>


int main_bench()
{
  int i,j,n=0;
  char a[30]={'\0'};
  gets(a);
  for(i=0;i<30;i++)
  {
        if(a[i]=='\0')
        break;
        if(a[i]>='0'&&a[i]<='9')
        my_printf("%c",a[i]);
        if((a[i]>'9'||a[i]<'0')&&(a[i-1]>='0'&&a[i-1]<='9'))        
        my_printf("\n");
  }
  return 0;
}