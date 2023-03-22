#define NUM_ITER 24200

#include <header.h>

main_bench()
{
      int n,k,c,b[100],len,d;
      char a[100000];
      my_scanf("%d",&n);
for(k=1;k<=n;k++)
{     
      my_scanf("%s",a);
      len=strlen(a);
      for(c=0;c<=len-1;c++)
      {
          b[c]=0;
      }
      for(c=0;c<=len-1;c++)
      {
       for(d=0;d<=len-1;d++)
        {
            if (a[c]==a[d])
            b[c]++;
            else ;
        }
        
        if(b[c]==1)
           {
               my_printf("%c\n",a[c]);
               break ;
           }
        else ;
      }
      if (c==len)
      my_printf("no\n");
      else ;
      
     
     
     
     
}

}