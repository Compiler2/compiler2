#define NUM_ITER 912832

#include <header.h>

int main_bench()
{
    char *p1,*p2;
    int i,j,n,m,w;
    char r[200],s[200],t[200];
    gets(r);gets(s);gets(t);
    p1=r;p2=s;n=strlen(s);
    for(i=0;*(p1+i)!='\0';)
    {
        if(*(p1+i)!=*p2) {my_printf("%c",*(p1+i));i++;}
        else
        {
            for(j=1,w=1;j<n;j++)
            {
                if(*(p1+i+j)!=*(p2+j))
                {
                    for(m=0;m<j;m++) my_printf("%c",*(p1+i+m));break;
                }
                w++;
            }
            if (w==n)
            {if(((*(p1+i+n)==' '||*(p1+i+n)=='\0')&&*(p1+i-1)==' ')||((i==0)&&*(p1+n)==' ')) my_printf("%s",t);
            else my_printf("%s",s);
            i=i+n;}
            else i=i+j;
        }

    }
    return 0;
}
