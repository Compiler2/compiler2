#define NUM_ITER 897979

#include <header.h>


int main_bench()
{
	int n,l,b[500]={0},i,j,k,max;
	char a[500],c[500][6];
	my_scanf("%d",&n);
	my_scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l-n+1;i++)
    {
        for(j=0;j<n;j++)
		   c[i][j]=a[i+j]; 
	    c[i][j]='\0';
    }
    for(i=0;i<l-n;i++)
    {
          if(b[i]!=-1)
          {
               for(j=i+1;j<l-n+1;j++)
               if(b[j]!=-1)
               if(strcmp(c[i],c[j])==0)
               {b[i]++;b[j]=-1;}
      }
    }
    max=b[0];
    for(i=1;i<l-n+1;i++)
    {
        if(b[i]>max) max=b[i];
    }
	if(max==0) my_printf("NO\n");
	else 
    {
        my_printf("%d\n",max+1);
    	for(i=0;i<l-n+1;i++)
    		if(b[i]==max) my_printf("%s\n",c[i]);
    }
}