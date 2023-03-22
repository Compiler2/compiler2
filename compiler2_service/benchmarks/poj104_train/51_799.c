#define NUM_ITER 1097727

#include <header.h>


int main_bench()
{ 
     char a[501];
     int m[500];
     int n,i,j,t,s,x=0;
     my_scanf("%d\n",&n);
     gets(a);
     t = strlen(a);
     char k[501][6];
     for (i=0;i<t+1-n;i++)
     {
         for (j=0;j<n;j++){
         k[i][j]=a[i+j];
         }
         m[i]=0;
     }
     for (i=0;i<t+1-n;i++){
         for(j=i;j<t+1-n;j++){
            s=strcmp(k[i],k[j]);
            if(s==0) m[i]++;    
         }
         if (m[i]>x) x=m[i];
     }
     if (x==1) my_printf("NO");
     else
     {
         my_printf("%d\n",x);
         for (i=0;i<t-n;i++)
         {
             if(m[i]==x)
             my_printf("%s\n",k[i]);
         }
     }

  return 0;
} 


         
  
  
