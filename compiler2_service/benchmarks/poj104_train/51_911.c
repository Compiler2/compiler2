#define NUM_ITER 1108081

#include <header.h>

struct T
{
       char s[10],n;
}s[300]={0};
int m=0,max=1;
void search(char t[])
{
     int i,b,j;
     for (i=0;i<m;i++)
     {
         b=strcmp(t,s[i].s);
         if (b==0)
         {
            s[i].n++;
            if (s[i].n>max)
               max=s[i].n;
            return;
         }
     }
     m++;
     strcpy(s[i].s,t);
     s[i].n=1;
     return;
}
int main_bench()
{
    int i,j,n,l;
    char S[600],t[10];
    my_scanf("%d",&n);
    my_scanf("%s",S);
    l=strlen(S);
    for (i=0;i<l-n+1;i++)
    {
        for (j=0;j<n;j++)
            t[j]=S[i+j];
        t[n]='\0';
        search(t);
    }
    if (max==1)
    {
       my_printf("NO\n");
       return 0;
    }
    my_printf("%d\n",max);
    for (i=0;i<m;i++)
        if (s[i].n==max)
           my_printf("%s\n",s[i].s);
    getchar();
    getchar();
    return 0;
}
