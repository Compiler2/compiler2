#define NUM_ITER 2662

#include <header.h>

int main_bench()
{
      int n,i,j,k,count,mz;
      char a[200]={'\0'},b[200];
my_scanf("%d\n",&n);
      for(i=0;i<n;i++)
      {
                      count=0;
                      for(j=0;j<200;j++)
                      {
                                        a[j]='\0';
                                        b[j]='\0';
                      }
                      gets(a);
                      strcpy(b,a);
                      for(j=0;j<200;j++)
                      {
                                        if(a[j]=='\0')break;
                                        count++;
                      }
                      for(j=count-1;j>=0;j--)
                      {
                                           if(b[j]=='(')
                                           {
                                                        mz=0;
                                                        for(k=j;k<count;k++)
                                                        {
                                                                            if(b[k]==')')
                                                                            {
                                                                                         b[k]=' ';
                                                                                         b[j]=' ';
                                                                                         mz=1;break;
                                                                            }
                                                        }
                                                        if(mz==0)b[j]='$';
                                           }
                      }
                      for(j=0;j<count;j++)
                      {
                                          if(b[j]==')')b[j]='?';
                      }
                      for(j=0;j<count;j++)my_printf("%c",a[j]);
                      my_printf("\n");
                      for(j=0;j<count;j++)
                      {
                                          if(b[j]!='$' && b[j]!='?')my_printf(" ");
                                          else my_printf("%c",b[j]);
                      }
my_printf("\n");
      }
      }