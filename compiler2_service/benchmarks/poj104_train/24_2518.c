#include <header.h>

int main_bench()
{
    char a[500];char ch[100][15]={0};int b[100]={0},i=0,j=0,k=0;
    gets(a);int m,n,x=0,y=0;
   while(i<strlen(a))
    {
        while(a[i]!=' '&&a[i]!=','&&a[i]!=0)
        {
            ch[j][k++]=a[i++];b[j]++;
        }
        if(k!=0)
        {j++;k=0;}
        i++;
    }
   
   m=b[0];
    for(i=1;i<j;i++)
    {
        if(b[i]>m)
        {
            m=b[i];x=i;
        }
    }
    n=b[0];
    for(i=1;i<j;i++)
    {
        if(b[i]<n)
        {
            n=b[i];y=i;
        }
    }

    my_printf("%s\n%s",ch[x],ch[y]);
    return 0;
}