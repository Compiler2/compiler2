#define NUM_ITER 25659

#include <header.h>

main_bench()
{    
    
    int q;
    my_scanf("%d",&q);
    for(int s=0;s<q;s++)
    {       char a[100000];
            int n,i,j,m,k=0;
            my_scanf("%s",a);
            n=strlen(a);
                for(i=0;i<n;i++)
                    {   m=0;
                        for(j=0;j<n;j++)
                        {
                           if(a[i]==a[j])
                           m++;
                        }
                        if(m==1)
                        {my_printf("%c\n",a[i]);
                         k=1;
                        break;}
                    }
  if(k==0)
  my_printf("no\n");
    }
}