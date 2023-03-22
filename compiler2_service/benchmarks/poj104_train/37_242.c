#include <header.h>


int main_bench()
{
    int hash[26],flag;
    int t,i,j;
    char a[10001];
    my_scanf("%d",&t);
    getchar();
    for(i=0; i<t; ++i)
    {
        gets(a);
        for(j=0; j<26; ++j)
            hash[j]=0;
        for(j=0; a[j] ; ++j)
            if(a[j]!='\n')  
                ++hash[a[j]-'a'];
        flag=1;
        for(j=0; a[j] ; ++j)
            if(hash[a[j] - 'a'] == 1)
            {
                my_printf("%c\n",a[j]);
                flag=0;
                break;
            }
        if(flag) my_printf("no\n");
    }
    
    getchar();  getchar();
    return 0;
}
