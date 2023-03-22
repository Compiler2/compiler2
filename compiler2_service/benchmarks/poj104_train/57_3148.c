#define NUM_ITER 37007

#include <header.h>

int main_bench()
{
  int n,i,j,k;
  my_scanf("%d",&n);
  char da[n][32];
  for(i=0;i<n;i++)
  {
	  my_scanf("%s",da[i]);
  }
  for(i=0;i<n;i++)
  {
      k=strlen(da[i]);
	  if(da[i][k-1]=='r'&&da[i][k-2]=='e')
	  { da[i][k-1]='\0';
	  da[i][k-2]='\0';}
      if(da[i][k-1]=='y'&&da[i][k-2]=='l')
      {  da[i][k-1]='\0';
	  da[i][k-2]='\0';}
      if(da[i][k-1]=='g'&&da[i][k-2]=='n'&&da[i][k-3]=='i')
	  { da[i][k-1]='\0';
		da[i][k-2]='\0';
		da[i][k-3]='\0';}
	  puts(da[i]);



  }

  return 0;




}