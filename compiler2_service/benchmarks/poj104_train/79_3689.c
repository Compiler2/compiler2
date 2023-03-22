#define NUM_ITER 1

#include <header.h>


main_bench()
{   int cn(int x,int y);
    int i,q,p, m[2000],n[2000];
    for(i=1;i<=999;i++)
    {my_scanf("%d %d",&n[i],&m[i]);
    q=q+1;
    if(n[i]==0&&m[i]==0)
    break;
   if (n[i]==1)
    my_printf("1\n");
    else 
    cn(n[i],m[i]);
}

}



    int cn(int x,int y)
    {int i,j,p,k,m,d[2000][1000];
         k=0;m=0;
        for(i=1;i<=1999;i++)
        {for(j=1;j<=x;j++)
        {d[i][j]=1;
       }}
        
        for(i=1;i<=1999;i++)
        {       for(j=1;j<=x;j++)
               {        if(d[i][j]==1)
                        k=k+1;
                       if(k==y)
                      {     for(p=1;p<=1999;p++)
                            {d[p][j]=0;}
                            k=0;
                            m=m+1;
             
                           if(m==(x-1))
                           {goto end;}
                      }
        }   }
        end:
            for(i=1;i<=x;i++)
            {if(d[1][i]==1)
            { p=i;
             my_printf("%d\n",i);
            break;}}
        
        }
