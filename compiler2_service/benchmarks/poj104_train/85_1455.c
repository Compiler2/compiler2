#define NUM_ITER 23672

#include <header.h>


int judge(char c[21],int n)
{
    int i;
    i=0;
    if  (c[0]>='a'&&c[0]<='z'||c[0]>='A'&&c[0]<='Z'||c[0]=='_')
    {
        while  ((c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z'||c[i]=='_'||c[i]>='0'&&c[i]<='9')&&i<n)
        i++;
        if  (i==n)
        return 1;
        else
        return 0;
    }
    else
    return 0;
}

main_bench()
{
      char c[21];
      int n,m,i;
      
      my_scanf("%d\n",&n);
      for  (i=1;i<=n;i++)
      {
           gets(c);
           m=strlen(c);
           if(judge(c,m))
           my_printf("yes\n");
           else
           my_printf("no\n");
      }

}