#define NUM_ITER 1734592

#include <header.h>

int main_bench()
{int n[300],i=0,max,k,mid,flag=1;
 char c;
 do
 {i++;
  my_scanf("%d",&n[i]);
  c=getchar();}
  while(c==',');
  k=i;
  if(k==1) flag=0;
  else 
  {max=n[1];
  for(i=1;i<=k;i++)
   if(max<n[i])
     max=n[i];
  mid=0;
  for(i=1;i<=k;i++)
    if(mid<n[i]&&n[i]<max)
		mid=n[i];}
  if(mid==0||flag==0)
	  my_printf("No");
  else my_printf("%d",mid);
 }
