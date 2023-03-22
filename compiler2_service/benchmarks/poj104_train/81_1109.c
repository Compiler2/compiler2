#define NUM_ITER 236874

#include <header.h>

int j[5][5];
int change()
{
	 int i,m,n,k,l;
	 int z[5];
	    for(k=0;k<5;k++)
   {
	   for(l=0;l<5;l++) my_scanf("%d",&j[k][l]);
   }
   my_scanf("%d%d",&m,&n);
     if(m<0||m>4||n<0||n>4) return 0;
	 else
	 {
		 for(i=0;i<5;i++) z[i]=j[m][i];
		 for(i=0;i<5;i++) j[m][i]=j[n][i];
		 for(i=0;i<5;i++) j[n][i]=z[i];
		 return 1;
	 }
	 
}
int main_bench()
{
   int fh,k,l;
   fh=change();
   if(fh==0) my_printf("error");
   else
   {
	for(k=0;k<5;k++)
   {
		my_printf("%d",j[k][0]);
		for(l=1;l<5;l++) my_printf(" %d",j[k][l]);
	   my_printf("\n");
   }
   }
}

		