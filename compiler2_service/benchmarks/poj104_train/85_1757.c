#define NUM_ITER 31285

#include <header.h>

int main_bench()
{
    int n;
    int i,j;
    my_scanf("%d",&n);
    char sz[21];
    for(i=0;i<n;i++)
    {
        int zs=1;
        my_scanf("%s",sz);
        if(sz[0]>='0'&&sz[0]<='9')
        {
            zs=0;
        }else{
        for(j=0;sz[j];j++)
        {
            if(!((sz[j]=='_')||(sz[j]>='0'&&sz[j]<='9')||(sz[j]>='a'&&sz[j]<='z')||(sz[j]>='A'&&sz[j]<='Z')))
               {
                   zs=0;
               }
    }
        }
        if(zs==1)
            {
                my_printf("yes\n");
            }
          if(zs==0)
            {
                my_printf("no\n");
            }
    }
    return 0;
}