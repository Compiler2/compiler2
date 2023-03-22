#include <header.h>

int main_bench()
{
  char a[100];
  gets(a);
  int i,j=0,k;
for(i=0;i<100;i++)
{
	j++;
	if(a[i]=='\0')
	{
     j-=1;
	 break;
	}
}
  for(i=j-1;i>=0;i--)
  {     
	  if(a[i]==' ')
	  {
		  for(k=i+1;k<j;k++)
		  my_printf("%c",a[k]);
		  my_printf(" ");
	      j=i;
	  }
  }
  for(i=0;i<j;i++)
	  my_printf("%c",a[i]);


}

