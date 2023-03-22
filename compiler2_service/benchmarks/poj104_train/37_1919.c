#define NUM_ITER 27122

#include <header.h>


main_bench()
{
    char s[100000];
    int t,i,j,k,n,m;
    my_scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        my_scanf("%s",s);
        n=strlen(s);
        
        for(i=0;i<n;i++)
        {
            m=0;
            for(j=0;j<n;j++)
            {
                if(s[i]==s[j])
                m++;
                else;
            }
            if(m==1)
            break;
            else;
        }
        if(m!=1)
        my_printf("no\n");
        else
        my_printf("%c\n",s[i]);
    }
   
  
}