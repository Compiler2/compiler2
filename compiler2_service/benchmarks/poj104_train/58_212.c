#define NUM_ITER 35199

#include <header.h>

int main_bench()
{
    int i,j,k,m,n;
    my_scanf("%d",&n);
    getchar();
    char a[n][100];
    for(i=0;i<n;i++)
    {
         gets(a[i]);
         if(a[i][0]!='_'&&((a[i][0]-'a')<0||(a[i][0]-'z')>0)&&((a[i][0]-'A')<0||(a[i][0]-'Z')>0))
         {my_printf("0\n");
         continue;
         }
         else
         {for(j=1;a[i][j]!='\0';j++)
         {
              if(a[i][j]=='\n'||a[i][j]==' ')
              {
                  my_printf("0\n");
                  break;
              }
              if(a[i][j]!='_'&&((a[i][j]-'a')<0||(a[i][j]-'z')>0)&&((a[i][j]-'A')<0||(a[i][j]-'Z')>0)&&((a[i][j]-'0')<0||(a[i][j]-'0')>9))
              {
                  my_printf("0\n");
                  break;
              }
         }
         if(a[i][j]=='\0')
         my_printf("1\n");
         }
    }
    getchar();
    getchar();
}