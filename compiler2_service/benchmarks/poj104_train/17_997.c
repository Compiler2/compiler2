#define NUM_ITER 1668582

#include <header.h>

int main_bench()
{
    char a[105];
    while(gets(a))
    {
        int n=strlen(a);int i=0,j,b[105];
        for(i=0;i<n;i++)
        {
            if(a[i]=='('){b[i]=1;}
            else if(a[i]==')'){b[i]=-1;}
            else b[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(b[i]==-1)
            {
                for(j=i;j>=0;j--)
                {
                    if(b[j]==1)
                    {
                        b[i]=0;b[j]=0;break;
                    }
                }

            }
        }
        puts(a);my_printf("\n");
        for(i=0;i<n;i++)
        {
            if(b[i]==0)
                my_printf(" ");
            else if(b[i]==1)
                my_printf("$");
            else my_printf("?");
        }

        my_printf("\n");




    }
    return 0;
}
