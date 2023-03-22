#include <header.h>

int main_bench()
{  char aa[1000],bb[1000];int m,j,i,t,c;
   my_scanf("%s",aa);my_scanf("%s",bb);
    if (strlen(aa)!=strlen(bb))my_printf("NO");
   else{ m=strlen(aa);
        for(j=1;j<=m-1;j++)
     for(i=0;i<=m-j-1;i++)
     {
       if(aa[i]<aa[i+1]){t=aa[i];aa[i]=aa[i+1];aa[i+1]=t;}
       if(bb[i]<bb[i+1]){t=bb[i];bb[i]=bb[i+1];bb[i+1]=t;}
      }
     c=strcmp(aa,bb);
   if(c==0)my_printf("YES");
   else my_printf("NO");}
}


