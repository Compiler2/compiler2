#define NUM_ITER 926808

#include <header.h>

main_bench()
{
     char s[100]={0};
     int a[100]={0};
     int i,k=0;
     int b[100]={0};
      my_scanf("%s",s);
     int len=strlen(s);
     for(i=0;i<len;i++)
     {
                       a[i]=s[i]-'0';
                       b[i]=(k*10+a[i])/13;
                        k=(k*10+a[i])%13;
     }
     if(len==1)  my_printf("0\n");
     else
     {
     if(b[1]==0)
                for(i=2;i<len-1;i++)
                         my_printf("%d",b[i]);
     else
         for(i=1;i<len-1;i++)
                  my_printf("%d",b[i]);
     my_printf("%d\n",b[len-1]);
     }
     my_printf("%d\n",k);
    
}
    
