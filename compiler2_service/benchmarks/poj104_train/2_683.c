#include <header.h>

int main_bench()
{
    struct book
    {
        int num;
        char name[27];
    }b[1000];
    int m,i,j,a=0;
    int c[26];
    my_scanf("%d",&m);
    for (i=0;i<m;i++)
        my_scanf("%d%s",&b[i].num,b[i].name);
    for (i=0;i<m;i++)
    {
        for (j=0;j<strlen(b[i].name);j++)
            c[*(b[i].name+j)-'A']++;
    }
    for (i=0;i<26;i++)
        a=c[i]>c[a]?i:a;
    my_printf("%c\n",a+'A');
    my_printf("%d\n",c[a]);
    for (i=0;i<m;i++)
    {
        for (j=0;j<strlen(b[i].name);j++)
        {
            if ( *(b[i].name+j)==('A'+a))
                my_printf("%d\n",b[i].num);
        }
    }
return 0;
}
