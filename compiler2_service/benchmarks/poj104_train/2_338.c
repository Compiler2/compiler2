#define NUM_ITER 1722

#include <header.h>

int main_bench()
{
    int i,j,n,k,c,big=0;
    int num[30]={0},a[1000];
    char name[1000][20];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %s",&a[i],name[i]);
    }
    for(k=0;k<26;k++)
    {
      for(i=0;i<n;i++)
      {
        for(j=0;j<strlen(name[i]);j++)
        {
            if(name[i][j]==k+'A')
               num[k]=num[k]+1;
        }
      }
    }
    for(i=0;i<26;i++)
    {
        if(big<num[i])
        {big=num[i];
        c=i+'A';
        }
    }
    my_printf("%c\n",c);
    my_printf("%d\n",big);
   
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(name[i]);j++)
        {
            if(name[i][j]==c)
            my_printf("%d\n",a[i]);
        }
    }
    return 0;
}
