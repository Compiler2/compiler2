#include <header.h>

int main_bench()
{
 unsigned int a[301],i,j,k,n,t;  
                  float av,cha[301],temp,sum=0;  
my_scanf("%d",&n);
	for(i=0;i<n;i++)
           {
              my_scanf("%d",&a[i]);
              sum=sum+a[i];
	} 
   	av=sum/n;   
	for(j=0;j<n;j++)  
		cha[j]=fabs(a[j]-av); 
         for(j=0;j<n;j++)
            for(k=0;k<n-j-1;k++)
              if(cha[k+1]>cha[k])
                    {temp=cha[k];t=a[k];
                    cha[k]=cha[k+1];a[k]=a[k+1];
                    cha[k+1]=temp;a[k+1]=t;}
 
      if(cha[0]!=cha[1])
           my_printf("%d",a[0]);
      else
        {if(a[0]>a[1])
           my_printf("%d,%d",a[1],a[0]);
        else
			my_printf("%d,%d",a[0],a[1]);}
}


