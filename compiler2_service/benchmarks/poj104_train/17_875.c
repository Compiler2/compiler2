#define NUM_ITER 2831

#include <header.h>

main_bench()
{
    char s[101];
    int i,l,n,x,j,r;
    int le[101]={0},ri[101]={0};
    my_scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        for(i=0;i<100;i++)
        {le[i]=0;ri[i]=0;}
        my_scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='(') le[i]=1;
            if(s[i]==')') ri[i]=1;
        }
        for(i=l-1;i>=0;i--)
        {
            if(le[i]==1)
            {
                for(j=i;j<l;j++)
                {
                    if(ri[j]==1)
                    {ri[j]=0;le[i]=0;break;}
                }
            }
        }
        puts(s);
        for(i=0;i<l;i++)
        {
            if(ri[i]==1) my_printf("?");
            if(le[i]==1) my_printf("$");
            if(ri[i]==0&&le[i]==0) my_printf(" ");
        }
        my_printf("\n");
    }
}
