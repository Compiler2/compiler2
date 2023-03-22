#define NUM_ITER 28875

#include <header.h>

main_bench()
{
    int l,t,i,j,k,m;
    char s[100001];
    my_scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        my_scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            for(j=0;j<i;j++)
                if(s[j]==s[i]) 
                break;
            for(m=i+1;m<l;m++)
                if(s[m]==s[i]) 
                break;
            if(j==i&&m==l) 
            {
                my_printf("%c\n",s[i]); 
                break;
            } 
       }
       if(i==l) my_printf("no\n");
}
getchar();
getchar();
}