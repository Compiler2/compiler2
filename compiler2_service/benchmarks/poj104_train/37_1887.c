#define NUM_ITER 1

#include <header.h>

main_bench()
{
     int n,i,j,k,a[100001];
     char s[100001];
     my_scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          int x=0;
          for(j=0;j<100001;j++) {s[j]='\0';a[j]=1;}
          my_scanf("%s",s);
          for(j=0;j<100001;j++)
          {
               if(a[j]==1) for(k=j+1;k<100001;k++) if(s[j]==s[k]) {a[j]++;a[k]++;}
          }
          for(j=0;j<100001;j++) if(a[j]==1) {my_printf("%c\n",s[j]);x=1;break;}
          if(x==0) my_printf("no\n");
     }
    
}
   
