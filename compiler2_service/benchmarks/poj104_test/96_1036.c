#define NUM_ITER 1202505

#include <header.h>

int main_bench()
{
      char a[101];
      int b[101],s,m,n,c=0,i,p,q=1,sum=0;
      my_scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
      c++;
      c++;
      for(i=0;i<c-1;i++)
      b[i]=a[i]-'0';
      if(c>=10)
      {s=100*b[0]+10*b[1]+b[2];
      m=s/13;
      n=s%13;
      my_printf("%d",m);i=3;
      do{
               s=100*b[i]+10*b[i+1]+b[2+i];
               m=(n*1000+s)/13;
               n=(n*1000+s)%13;
               if(m>99)
               my_printf("%d",m);
               else if(m>9)
               my_printf("0%d",m);
               else
               my_printf("00%d",m);
               i=i+3;}while(i+3<=c-1);
               if(i==c-3)
               {s=n*100+10*b[c-3]+b[c-2];
               m=s/13;
               n=s%13;
               if(m>9)
               my_printf("%d\n%d",m,n);
               else
               my_printf("0%d\n%d",m,n);}
               if(i==c-2)
               {
                         s=10*n+b[c-2];
                         m=s/13;
                         n=s%13;
                         my_printf("%d\n%d",m,n);
                         }
                         if(i==c-1)
                         {
                                 my_printf("\n%d",n);}}
                                 else
                                { for(i=c-2;i>=0;i--)
                                 {
                                                    p=b[i]*q;
                                                    q=q*10;
                                                    sum=sum+p;}
                                                    my_printf("%d\n%d",sum/13,sum%13);}
                                                   
                                                                  }
                                 
                 
