#define NUM_ITER 232

#include <header.h>

main_bench()
{
    int t;
    my_scanf("%d",&t);
    int i,j,k,m,r,x,p;
    char a[100000];
    for(i=0;i<t;i++)
    {
        p=0;
        int b[100000]={0};
        my_scanf("%s",a);
        m=strlen(a);
        for(j=0;j<m;j++)
        {
            for(k=0;k<26;k++)
            {
                if(a[j]=='a'+k)
                {
                    x=k;
                    break;
                }
            }
            for(r=0;r<m;r++)
            {
                if(a[r]=='a'+x)
                {
                    b[j]=b[j]+1;
                }
            }
            if(b[j]==1)
            {
                p=1;
                my_printf("%c\n",a[j]);
                break;
            }
        }
        if(p==0)
        {
            my_printf("no\n");
        }
    }
}

