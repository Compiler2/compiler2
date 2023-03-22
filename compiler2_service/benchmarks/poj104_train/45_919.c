#define NUM_ITER 1067958

#include <header.h>

int main_bench()
{
int i,j,l1,l2;
char a[20],b[20];
my_scanf("%s %s",a,b);
l1=strlen(a);
l2=strlen(b);
  for(j=0;j<l2;j++)
    {if(a[0]==b[j])
  { for(i=0;i<l1;i++)
            {if(a[i]!=b[i+j])break;
             else if(a[i]==b[j+i]&&i<l1-1)continue;
             else if(a[i]==b[j+i]&&i==l1-1)  my_printf("%d",j);return 0;}
  }
  }
}
             
       