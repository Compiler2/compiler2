#define NUM_ITER 1296440

#include <header.h>

int main_bench()
{
       char a[100];
       int nn;
       my_scanf("%d",&nn);
       while(gets(a))
       {
             char ans[101];
             for(int i=0;i<101;i++)
             {
                  ans[i]=' ';
             }
             my_printf("%s\n",a);
             int L=strlen(a);
             ans[L]='\0';
             int mark=0;
             for(int i=99;i!=-1;i--)
             {
                  if(a[i]=='(')
                  {
                      for(int j=i+1;;j++)
                      {
                            if(a[j]==')')
                            {
                            a[i]='0';
                            a[j]='0';
                            mark++;
                            break;
                            }
                            if(j==101)
                            {
                             a[i]='0';
                             ans[i]='$';
                             break;
                            }
                       }
                    }
                }
                for(int i=0;i<101;i++)
                    if(a[i]==')') ans[i]='?';
                my_printf("%s\n",ans);
       }
}