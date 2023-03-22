#define NUM_ITER 33469

#include <header.h>

int main_bench()
{
    int n,m,i;
    my_scanf("%d",&n);
    char a[33];
    for(i=0;i<n;i++)
    {
        my_scanf("%s",a);
      m=strlen(a);
      if((a[m-2]=='e'&&a[m-1]=='r')||(a[m-2]=='l'&&a[m-1]=='y')){
          a[m-2]='\0';
      }else{
          a[m-3]='\0';
      }
      my_printf("%s\n",a);
    }
    return 0;
}