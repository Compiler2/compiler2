#define NUM_ITER 32098

#include <header.h>

 int main_bench()
{
    char str[100000];
    int i,j,t,flag,k,n;
    my_scanf("%d",&t);
    getchar();           
    for(k=0;k<t;k++)
    {
        gets(str);
        flag=0;
        for(i=0;str[i];i++)
        {
            for(n=1,j=0;str[j];j++)
            {
                if(i!=j&&str[i]==str[j])
                    n++;
                if(n>1)
                    break;
            }
            if(n==1)
            {
                my_printf("%c\n",str[i]);
                flag=1;
                break;
            }
        }
        if(!flag)
            my_printf("no\n");
    }
    return 0;
}