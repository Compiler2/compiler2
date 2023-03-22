#include <header.h>

int main_bench()
{
    char s1[1000],s2[1000];

    int i,j,k,l1,n,l2;
    double m;
    my_scanf("%lf",&m);
    my_scanf("%s",s1);
    my_scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
   
    if (l1!=l2) my_printf("error");
    else 
    {   
        n=0;
        for (i=0;i<l1;i++)
        {
          if (((s1[i]!='A')&&(s1[i]!='T')&&(s1[i]!='C')&&(s1[i]!='G'))||((s2[i]!='A')&&(s2[i]!='T')&&(s2[i]!='C')&&(s2[i]!='G')))
          {
             my_printf("error");
              exit (0);            
             }
          if (s1[i]==s2[i]) n++;
          }
         if (1.0*n/l1>=m) my_printf("yes");
         else my_printf("no");
         }                                                                       
         return 0; 
}
