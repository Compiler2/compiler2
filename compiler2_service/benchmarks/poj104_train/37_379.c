#include <header.h>

int main_bench()
{
    int t,i,sum,temp;
    char s[100][100];
    char *p,*q;
    my_scanf ("%d",&t);
    for (i=0;i<t;i++)
    my_scanf ("%s",s[i]);
    for (i=0;i<t;i++)
    {
        temp=0;
        for (p=s[i];*p!='\0';p++)
        {
            sum=0;
            for (q=s[i];*q!='\0';q++)
            {
                if (*p==*q)
                sum++;
            }
            if (sum==1&&temp==0)
            {
                                my_printf("%c\n",*p);
                                temp++;
            }
        }
        if (temp==0)
        my_printf ("no\n");
    }
    return 0;
}
            