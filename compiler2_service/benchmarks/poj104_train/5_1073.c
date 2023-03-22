#define NUM_ITER 937958

#include <header.h>

main_bench()
{
      double n;
      char a[600],b[600];
      my_scanf("%lf",&n);
      my_scanf("%s",a);
      my_scanf("%s",b);
      int len=strlen(a),time=0,i;
      if(strlen(a)!=strlen(b)) my_printf("error\n");
      else 
      {
           for(i=0;i<len;i++)
           {
                   if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')) break;
                   else if(a[i]==b[i]) time++;
           }
           if(i==len)
           {
                     if((double)time/(double)len>n) my_printf("yes\n");
                     else my_printf("no\n");
           }
           else my_printf("error\n");
      }
}