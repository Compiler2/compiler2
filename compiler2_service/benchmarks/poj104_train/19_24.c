#define NUM_ITER 840680

#include <header.h>

int main_bench()
{
	char s[100],w1[100],w2[100];
	gets(s);
	gets(w1);
	gets(w2);
	int i,l = strlen(s),l1 = strlen(w1),l2 = strlen(w2),p=0,m,n,j,k;
	for (i=0;i<l;i++)
	{
		   if (s[i]==w1[0] && (s[i-1]==32||i==0) && (s[i+l1]==32||i==l-1))
		   {
			    p = 1;
		    	for (m=i,n=0;n<l1;m++,n++)
				if (s[m]!=w1[n])
				{
					p = 0;
					break;
				}
		   }
		   if (p)
		   {
			   for (k=0;k<l2;k++)
			   my_printf ("%c",w2[k]);
			   i = i+l1-1;
			   p = 0;
		   }
	       else my_printf ("%c",s[i]);
	}
	

	return 0;
}