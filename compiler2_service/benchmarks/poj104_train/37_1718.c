#define NUM_ITER 3369

#include <header.h>

int main_bench()
{
      int t,l,m,n,j,no;
      char i;
      my_scanf("%d\n",&t);
      for(l=0;l<t;l++)
      {
                      no=0;
                      char a[100000];
                      int b[26]={0};
                      my_scanf("%s",&a);
                      n=strlen(a);
                      for(i='a';i<='z';i++)
                      {
                           for(j=0;a[j]!='\0';j++)
                           {
                                                  m=i-'a';
                                                  if(i==a[j])b[m]=b[m]+1;
                           }
                      }
                      for(j=0;j<26;j++)
                      {
                         if(b[j]==1)
                         {
                                  i='a'+j;no=1;
                                  for(m=0;a[m]!='\0';m++)
                                  {
                                                         if(a[m]==i&&n>m)n=m;
                                  }
                          }
                      }
                      if(no==1)my_printf("%c\n",a[n]);
                      else my_printf("no\n");
      }
      return 0;
      
}