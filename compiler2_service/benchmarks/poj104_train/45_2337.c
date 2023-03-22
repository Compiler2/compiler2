#include <header.h>


int main_bench() 
{
    char s[20],w[20];
    int i,j,n,m,p,t=0;
    my_scanf("%s%s",s,w);
    n=strlen(w);
    m=strlen(s);
    for(i=0;i<n-m;i++)
    {
       j=i;p=0;
       while(j<i+m&&w[j]==s[p++])j++;
       if(j==i+m) {t=1;break;}
    }
    if(t=1) my_printf("%d\n",i);
}
