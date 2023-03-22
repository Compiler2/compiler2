#define NUM_ITER 1406093

#include <header.h>

main_bench()
{
      int m,n,i,j,o=0,a[1000];
      my_scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                break;
            }
            if(j!=i)
            continue;
            if(j==i)
            {
                int k=0,d=i,c=0,s,l;
                while(d!=0)
                {
                     a[k]=d%10;
                     d=d/10;
                     k++;
                }
                for(l=k-1;l>=c;l--)
                {
                    if(a[l]==a[c])
                    s=1;
                    else
                    {
                    s=0;
                    break;
                    }
                    c++;
                }
                if(s==1)
                {
                        o++;
                        if(o==1)
                        my_printf("%d",i);
                        else
                        my_printf(",%d",i);
                }
            }
            
      }  
       if(o==0)
            my_printf("no");
      getchar();
      getchar();
}      
