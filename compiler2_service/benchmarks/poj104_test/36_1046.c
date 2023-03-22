#include <header.h>

int main_bench()
{
	int l1,l2,i,s1=0,s2=0;
  char a[300],b[300];
  my_scanf("%s %s",a,b);
  l1=strlen(a);
  l2=strlen(b);
  if(l1!=l2)
	  my_printf("NO");
  else
  {
	  for(i=0;i<l1;i++)
	  {
		  s1+=a[i];
	      s2+=b[i];
	  }
	  if(s1==s2)
		  my_printf("YES");
	  else
	  my_printf("NO");
  }

}