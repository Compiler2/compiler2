#include <header.h>

int main_bench()
{
	int j,i,k=0,m;
     char s[1000];
	 my_scanf("%s",s);
     if(s[0]>96)
		 i=s[0]-96;
	 else
		 i=s[0]-64;
	 for(j=0;s[j]!='\0';j++)
	 {
         if(s[j]>96)
		 m=s[j]-96;
	     else
		 m=s[j]-64;
		 if (m==i)
             k++;
		 else
		 {
			 my_printf("(%c,%d)",i+64,k);
			 i=m;
			 k=1;
		 }
	 }
	 my_printf("(%c,%d)",i+64,k);
	return 0;
}
