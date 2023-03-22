#include <header.h>

int main_bench()
{
    char zs[257];
    int n,i,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%s",zs);
        for(j=0;zs[j]!='\0';j++)
        {
            if(zs[j]=='A')
            {
                zs[j]='T';
            }
            else
            {
              if(zs[j]=='T')
              {
                  zs[j]='A';
              }
              else
              {
                  if(zs[j]=='C')
                  {
                      zs[j]='G';
                  }
                  else
                  {
                      if(zs[j]=='G')
                      {
                          zs[j]='C';
                      }
                  }
              }
            }
        }
     my_printf("%s\n",zs); 
    }
    


    return 0;
}
