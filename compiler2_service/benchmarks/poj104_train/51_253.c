#define NUM_ITER 84649

#include <header.h>

int main_bench()
{ char num[400];
  char num1[400][400];
  int  sum[400];
  int i,n,j,t,m,s,max;
  my_scanf("%d\n",&n);
  gets(num);
  m=strlen(num);
  for(i=0;i<400;i++)
	  sum[i]=1;
  for(i=0;i<=m-n;i++)
	  for(j=i;j<i+n;j++)
		  num1[i][j-i]=num[j];
  for(i=0;i<=m-n;i++)
  {  t=0;
     if(sum[i]!=0)
	 { for(j=0;j<=m-n;j++)
	 {  for(s=j;s<j+n;s++)
	      if(num[s]!=num1[i][s-j]) break;
		  if(s==j+n) {t++;sum[j]=0;}
	 }
	 sum[i]=t;
	 }
  }
  max=1;
  for(i=0;i<=m-n;i++)
	  if(sum[i]>max) max=sum[i];
  if(max!=1)
  {  my_printf("%d\n",max);
	  for(i=0;i<m-n;i++)
     if(sum[i]==max)
	 { for(j=0;j<n;j++)
	   my_printf("%c",num1[i][j]);
	   my_printf("\n");
	 }
  }
  else my_printf("NO");
return 0;
}
