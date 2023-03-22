#define NUM_ITER 805801

#include <header.h>

int main_bench()
{
 int n,i,j,l[500],k,a,b=0,m,d1=0,d2=0,d3[500]={0},k8,k9=0;
 static char s[500],o[500][5],l1[7];
 my_scanf("%d",&n);
 gets(l1);
 gets(s);
 for(i=0;s[i+n-1]!='\0';i++)
   for(j=0;j<n;j++)
     {
      o[i][j]=s[i+j];      
     } 
   a=i;
 for(i=0;i<a;i++)
  {
   for(j=0;j<a;j++)
     {
      m=1;
      for(k=0;k<n;k++)
        if(o[i][k]!=o[j][k])
         {
          m=0;
          break;
         }
      if(m==1)
        b++;
     }
   l[i]=b;
   b=0;
  }
 for(i=0;i<a;i++)
   if(d1<l[i])
     d1=l[i];
 if(d1<=1)
   my_printf("NO\n");
 else
  {
   my_printf("%d\n",d1);
   for(i=0;i<a;i++)
     {
      k9=0;
      if(d1==l[i])
       {
        for(k8=1;k8<=d2;k8++)
          if(0==strcmp(o[i],o[d3[k8]]))
            {
             k9=1;
             break;
            }
        if(k9==0)
        {for(k=0;k<n;k++)
          my_printf("%c",o[i][k]);
        my_printf("\n");}
       }
      d2++;
      d3[d2]=i;
       
     }
  }
}
