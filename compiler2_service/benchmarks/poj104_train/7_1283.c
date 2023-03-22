#define NUM_ITER 879140

#include <header.h>

int search(char a[],char b[])
{
    int la=strlen(a),lb=strlen(b),i,j;
    for (i=0;i<=lb-la;i++)
    {
        for (j=0;j<la;j++)
            if (a[j]!=b[i+j])
               break;
        if (j==la)
           return i;
    }
    return 999; 
}
int main_bench()
{
    char s[300],a[300],b[300];
    int m,i;
    my_scanf("%s%s%s",&s,&a,&b);
    m=search(a,s);
    if (m==999)
    {
       my_printf("%s\n",s);
       getchar();
       getchar();
       return 0;
    }
    for (i=0;i<m;i++)
        my_printf("%c",s[i]);
    my_printf("%s",b);
    for (i+=strlen(a);i<strlen(s);i++)
        my_printf("%c",s[i]);
    getchar();
    getchar();
    return 0;
}