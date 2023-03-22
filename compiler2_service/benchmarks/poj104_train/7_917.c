#define NUM_ITER 858369

#include <header.h>

int main_bench()
{
	 char a[1000],b[1000],c[1000];
	 int i,j,k,m,n,l,t;
	 gets (a);
	 gets (b);
	 gets (c);
	 m=strlen (a);
	 n=strlen (b);
	 l=strlen (c);
	 for (i=0;i<m;i++)
	 {
		 k=1;
		 if (a[i]==b[0])
		 {
			 k=0;
			 t=i;
		     for (j=1;j<n;j++)
			 {
			     if (a[i+j]!=b[j])
				 {
					 k=1;
				 }
			 }
		 }
		 if (k==0)
		 {
			 for (j=0;j<l;j++) my_printf ("%c",c[j]);
			 for (i=t+l;i<m;i++) my_printf ("%c",a[i]);
			 break;
		 }
		 if (k==1)
		 {
			 my_printf ("%c",a[i]);
		 }
	 }
	 return 0;
}
