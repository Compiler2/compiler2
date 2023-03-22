#include <header.h>

main_bench()
{
      char c[100];
      int answer[100];
      int a,j=1,i=0,p,q,m,l;
      my_scanf("%s",&c);
      a=strlen(c);
      if(a==1){
               my_printf("0\n");
               my_printf("%d",c[0]-'0');
               }
      else{
           while(j<a){
                      if(j==1)
                         p=c[j-1]-'0';
                      q=c[j]-'0';
                      m=10*p+q;
                      if(m<=12&&j==1&&a<=2){
                                            my_printf("0\n");
                                            my_printf("%d",m);
                                            break;
                                            }
                      else{
                           if(m<=12&&a>2&&j==1){
                                                m=100*p+q*10+(c[j+1]-'0');
                                                j=j+1;
                                                }
                           answer[i]=m/13;
                           p=m%13;
                           i=i+1;
                           }
                      j=j+1;
                      }
           for(l=0;l<i;l++)
              my_printf("%d",answer[l]);
           if(a!=2||(a==2&&i!=0))
              my_printf("\n%d",p);
           }
}
