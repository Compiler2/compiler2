#define NUM_ITER 1029062

#include <header.h>

int main_bench()
{
    char s[50],w[50];
    int i,j;
    my_scanf("%s%s",s,w);
    for(i=0;i<=strlen(w)-strlen(s);i++)
    {
                                      for(j=0;j<strlen(s);j++)
                                      {
                                                              if(s[j]!=w[j+i])
                                                              break;
									  }
									if(j==strlen(s))
									{
															my_printf("%d",i);
															return 0;
									}
									
	}
    return 0;
}