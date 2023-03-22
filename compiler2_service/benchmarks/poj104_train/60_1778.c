#define NUM_ITER 1

#include <header.h>

int s[1500]={0};
int main_bench()
{
  int x=1,i=0,j=1,k=0;
  while(k<1500)
   {while (j<=x)
     {if(x%j==0)
        i=i+1;
      else
        i=i;
      j=j+1;}
     if (i==2)
        {s[k]=x;
		k=k+1;
        }
	 i=0;
     j=1;
	 x=x+1;}
  int n; 
  my_scanf("%d",&n);
  if(n<5)
    my_printf("empty");
  else  
     {for(i=1;i<1500;i++)
        {if(s[i]>n)
      	   break;
         if(s[i]-s[i-1]==2)
      	  my_printf("%d %d\n",s[i-1],s[i]);}}
  return 0;
}  