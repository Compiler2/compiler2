#define NUM_ITER 26002

#include <header.h>


void com(char str[10000]);
int main_bench()
{
    int t,i;
    char a[200][10000];
    my_scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    my_scanf("%s",&a[i]);
    com(a[i]);
    my_printf("\n");
    }
}
void com(char str[])
{
 int k,i,j,f=0,flag;
 k=strlen(str)-1;

 for(i=0;i<k;i++)
 {
     if( str[i]=='0')
     continue;
     else
     {
         flag=1;
     for(j=i+1;j<=k;j++)
        {
            if (str[i]==str[j])
        {
            str[j]='0';
            flag=0;
        }
       }
     }
        if (flag==1)
        {
          f=1;
          my_printf("%c",str[i]);
          break;
              }
 }
        if( f!=1)
        {
        if (str[k]!='0')
        my_printf("%c\n",str[k]);
        else
        my_printf("no\n");
        }
 }
