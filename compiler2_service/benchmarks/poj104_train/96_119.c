#define NUM_ITER 1135101

#include <header.h>

main_bench()
{
      char a[100];
      int len,i,num[100]={0},t,r;
      my_scanf("%s",&a);
      len=strlen(a);
      for(i=0;i<len;i++)
               num[i]=a[i]-'0';
      if(num[0]*10+num[1]<13&&len==2)
          my_printf("%d\n%d",0,num[0]*10+num[1]);
          else if(len==1)
                my_printf("%d\n%d",0,num[0]);
                else
                
     {      if(num[0]*10+num[1]<13)
               r=num[0]*10+num[1];
           else
              {
                r=(num[0]*10+num[1])%13   ;  
                my_printf("%d",(num[0]*10+num[1])/13);
              }
      for(i=2;i<len;i++)
         {
            t=(r*10+num[i])/13;
            r=(r*10+num[i])%13;
            my_printf("%d",t);
         }
      my_printf("\n");
      my_printf("%d",r);
      }
}