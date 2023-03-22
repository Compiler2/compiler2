#include <header.h>



int main_bench()
{ 

 int n,a,b,i,c,k=0,j=0;
  my_scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {my_scanf("%d %d",&a,&b);
    c=a-b;
	if(c==-1||c==2)  k++;
	else if(c!=0) j++;
  }
  if(k>j)  my_printf("A");
  else if(k==j)  my_printf("Tie");
  else     my_printf("B");
return 0;
}