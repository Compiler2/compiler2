#define NUM_ITER 31328

#include <header.h>

int main_bench()
{
	char word[40];
	int i,n,len,hang=0,shou=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
			{
			 my_scanf("%s",word);
			 len=strlen(word);
			 hang+=len;
			 hang+=1;
			 if(hang<=80)
						 { if(shou==1)
						   { my_printf("%s",word);hang-=1;}
							 else 	{ my_printf(" %s",word);}
						    shou=0;
						 }
			 else if(hang>80){my_printf("\n");my_printf("%s",word); shou=0;hang=len;}
			}

return 0;
}
