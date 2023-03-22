#include <header.h>

main_bench()
{
      int n,j,y,len,k;
      char w, s[100000];
      my_scanf("%d",&n);
      int i;
      for(i=0;i<n;i++)
      {my_scanf("%s",s);
       len=strlen(s);
         for(j=0;j<len;j++)
           {for(k=0;k<len;k++)
              {if(k!=j&&s[j]==s[k])
                break;
              }
             if(k==len)
            {my_printf("%c",s[j]);
             my_printf("\n");
             break;}
           }         
             if(j==len)
              {my_printf("no");
              my_printf("\n");}
       }
        
       
}

