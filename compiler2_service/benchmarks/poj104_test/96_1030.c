#define NUM_ITER 1105126

#include <header.h>

int main_bench()
{
      int a[110],b[110],i,j,m,yu,z,qishi;
      char c[110];
      my_scanf("%s",c); 
      
      for(i=0;c[i]!='\0';i++)
              a[i+1]=c[i]-'0'; 
      m=i;
      
if(m==1)
my_printf("0\n%d",a[1]);
else{
     if(m==2)
     my_printf("%d\n%d",(10*a[1]+a[2])/13  , (10*a[1]+a[2])%13 );
     else{
     
      
      
      for(i=1;i<=m-1;i++)
      {
            z=10*a[i]+a[i+1];
            b[i]=z/13;
            a[i+1]=z%13;
      }
      yu=a[i];
      if(b[1]==0) qishi=2;
      else qishi=1;
      for(j=qishi;j<=m-1;j++)
      my_printf("%d",b[j]);
      my_printf("\n");
      my_printf("%d\n",yu);
      
      }}
}
      
      
