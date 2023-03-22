#define NUM_ITER 4967

#include <header.h>

main_bench()
{
     char s[100000];
     char temp;
     int lens,i,j,k,n,z,pt,num;
     int a[26][2];
     
     my_scanf("%d",&n);
     for (z=1;z<=n;z++)
     {
         num=0;
         for (i=0;i<=25;i++) for (j=0;j<=1;j++) a[i][j]=0;
         my_scanf("%s",&s);
         for (pt=0;s[pt]!='\0';pt++)
         {
             temp=s[pt]-'a';
             if (a[temp][1]==0)
             {
                num++;
                a[temp][1]=num;
             }
             a[temp][0]++;
         }
         
         pt=-1;k=31;
         for (i=0;i<=25;i++)
         {
             if (a[i][0]==1)
             {
                if (k>a[i][1])
                {
                   pt=i;
                   k=a[i][1];
                }
             }
         }
         
         if (pt==-1) my_printf("no\n");
         else my_printf("%c\n",pt+'a');
     }
}
     
