#define NUM_ITER 4465

#include <header.h>


 int main_bench()
 {
     
     
     int i,j,t,n,m;
     int k[100000];
     
     my_scanf("%d",&n); 
     m=0;
       for (i=1;i<=n;i++)
       {k[i]=1;
           }
     
     
     for (i=1;i<=n;i++)
     {    t=0;
          for (j=2;j<i;j++)
          {  
              
              if ((i%j)!=0)
              {t=t+1;}
           }
         if(t==(i-2))
         {k[i]=0;} 
     
           if((k[i]==0)&&(k[i-2]==0)&&(i-2)>1)
           {my_printf("%d %d\n",(i-2),i);
           m=m+1;} 
     }
     
     
     if(m==0)
     {my_printf("empty");}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
     }
