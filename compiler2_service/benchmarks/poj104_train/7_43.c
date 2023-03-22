#include <header.h>

int main_bench()
{
	char s1[100],s2[100],s3[100];
	int i,j,k,n,m,f,q;
	my_scanf ("%s",s1);
	my_scanf ("%s",s2);
	my_scanf ("%s",s3);
	m=strlen(s2);
	n=strlen(s1);
	for (i=0;i<strlen(s1);i++)
	{
		f=0;
		for (j=0;j<strlen(s2);j++)
			if(s2[j]!=s1[i+j])
			{
				f=1;
				break;
			}
		if(f==0)
			{
				q=i;
				break;
			}
	}
   if (f==1)
       my_printf("%s\n",s1);
   else 
   {
       for (k=0;k<q;k++)
           my_printf("%c",s1[k]);
       my_printf("%s",s3);
       for (k=q+m;k<n;k++)
       my_printf("%c",s1[k]);
       my_printf("\n");
	}

   return 0;
}