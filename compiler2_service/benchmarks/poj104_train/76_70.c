#define NUM_ITER 1916

#include <header.h>

 int main_bench()
 {
     int a[50001],b[50001],g[50001],n,i,e,f,j,t,m;
     my_scanf("%d",&n);
     for(i=1;i<=n;i++)
   		my_scanf("%d%d",&a[i],&b[i]);
		
     for(i=0;i<=n;i++)
       {for(j=1;j<n-i;j++)
        {if(a[j]>a[j+1])
           {e=a[j];
            a[j]=a[j+1];
            a[j+1]=e;
			f=b[j];
			b[j]=b[j+1];
			b[j+1]=f;}
        }
       }
    m=b[1];
    for(i=2;i<=n;i++)
    {
     if(b[i]>m) m=b[i];
    }
     t=1;
     for(i=a[1];i<=m-1;i++)
     {  g[i]=0;
        for(j=1;j<=n;j++)
         {
            if((i>=a[j])&&(i<b[j])) g[i]=1;
            
         }
        t=t*g[i];
     }
    
   if(t==0) my_printf("no");
    else my_printf("%d %d",a[1],m);
    

	  
     
 return 0;
 }