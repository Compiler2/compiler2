#define NUM_ITER 1077686

#include <header.h>

int main_bench()
{char a[50],b[50];
int i,j,la,lb,kai;
my_scanf("%s %s",a,b);
la=strlen(a);lb=strlen(b);
for(i=0,kai=1;i<=lb-1;i++)
{if(kai==0)
break;
                    if(b[i]==a[0])
                    {
                                  for(j=0;j<=la-1;j++)
                                  {
                                                    if(a[j]!=b[i+j])
                                                    break;
                                                    if(a[j]==b[i+j]&&j==la-1)
                                                    kai=0;
                                  }
                    }
}
my_printf("%d",i-1);


                                       
   return 0;
}


