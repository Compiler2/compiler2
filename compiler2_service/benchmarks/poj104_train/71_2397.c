#define NUM_ITER 7181

#include <header.h>

main_bench()
{
      int n,y,x;
      my_scanf("%d",&n); 
      int s[12]={0};
      for(int i=0;i<n;i++)
      {
              int a,b,c,z=0;
              my_scanf("%d %d %d",&a,&b,&c);
              if((a%400==0)||(a%100!=0&&a%4==0))
              { 
                     s[0]=31;
                      s[1]=29; 
                      s[2]=31;
                       s[3]=30; 
                       s[4]=31; 
                       s[5]=30;
                        s[6]=31;
                         s[7]=31;
                          s[8]=30;
                           s[9]=31;
                            s[10]=30;
                             s[11]=31;                      
              }
              else 
              { 
                     s[0]=31;
                      s[1]=28; 
                      s[2]=31;
                       s[3]=30; 
                       s[4]=31; 
                       s[5]=30;
                        s[6]=31;
                         s[7]=31;
                          s[8]=30;
                           s[9]=31;
                            s[10]=30;
                             s[11]=31;                      
              }         
              y=(b>c)?b:c;
              x=(b<c)?b:c;
              for(int j=x;j<y;j++)
              {
                      z+=s[j-1];
              } 
              if(z%7==0) 
              my_printf("YES\n");
              else
              my_printf("NO\n");      
      }
      getchar();
      getchar();
}