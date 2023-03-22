#define NUM_ITER 1416198

#include <header.h>

int main_bench()
{   
          char s[1050];
          char bj;
          int i,j,k,f,l;
          my_scanf("%s",s);
          l=strlen(s);
          f=0;
          for (i=0;i<l;i++)
                 if (f==0)
                       {
                           bj=s[i];
                           if (bj>=97)
                              bj=bj-32;
                           f=1;
                        }
                       else
                       {
                           if   ((s[i]==bj)||(s[i]-32==bj))
                                        f++;
                                        else
                                        {
                                            my_printf("(%c,%d)",bj,f);
                                            f=1;
                                             bj=s[i];
                                             if (bj>=97)
                                             bj=bj-32;
                                        }
                       }
          my_printf("(%c,%d)",bj,f);
}
                                            
                                        
                           