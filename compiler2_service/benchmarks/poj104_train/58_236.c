#define NUM_ITER 27560

#include <header.h>

int main_bench()
{
    int i,j,n,cnt=0;
    char s[800],temp[800];
    my_scanf("%d",&n);
    gets(temp);
    int a[n];
    for(i=0;i<n;i++)
    {
        gets(s);
        
        a[i]=strlen(s);
        cnt=0;
        if((s[0]>='0' && s[0]<='9'))
            my_printf("0\n");
        else
        {
            for(j=0;j<a[i];j++)
            {
                if(!((s[j]=='_')||(s[j]>='A' && s[j]<='Z')||(s[j]>='a' && s[j]<='z')||(s[j]>='0' && s[j]<='9' && j>0)))
                {    
                    my_printf("0\n");
                    break;
                }
                else
                {
                    cnt++;
                }    
            }
        }
        if(cnt==a[i])
        {
            my_printf("1\n");
        }
    }
    getchar();
    
    return 0;
}