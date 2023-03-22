#include <header.h>

int main_bench()
    {
    int n;
    my_scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
        int m;
        my_scanf("%d",&m);
        int t[m];
        if(m==0)
           {my_printf("%d\n",60);
           continue;}
        for(int j=0;j<m;j++)
            {
            my_scanf("%d",&t[j]);  
            } 
		if(3*m+t[m-1]<=60)
               my_printf("%d\n",60-3*m);
            else
               if(3*(m-1)+t[m-1]<=60)
                  my_printf("%d\n",t[m-1]);
               else
                  if(3*m+t[m-2]<=60)
                    my_printf("%d\n",60-3*(m-1));
                  else
                    if(3*(m-2)+t[m-2]<=60)
                       my_printf("%d\n",t[m-2]);
                    else
                       my_printf("%d\n",60-3*(m-2));
        }
    return(0);
    }