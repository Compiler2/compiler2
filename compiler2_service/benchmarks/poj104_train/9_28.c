#include <header.h>

int main_bench()
{
	int n,i,j,old[100]={0},t[100]={0};
	char num[100][10]={0},temp[100][10]={0};
	int x,z=0;
	char y[10]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    my_scanf("%s %d",num[i],&old[i]);
	}
    for(i=0;i<n;i++)
	{
	  if(old[i]>=60)
	  {
		strcpy(temp[z],num[i]);
	    t[z]=old[i];
		z++;
	  }
	}
    for(i=0;i<z;i++)
	{
	  for(j=z-1;j>i;j--)
	  {
	    if(t[j]>t[j-1])
		{
		   x=t[j];
		   t[j]=t[j-1];
		   t[j-1]=x;
		   strcpy(y,temp[j-1]);
		   strcpy(temp[j-1],temp[j]);
		   strcpy(temp[j],y);
		}
	  }
	}
	for(i=0;i<z;i++)
		my_printf("%s\n",temp[i]);
	for(i=0;i<n;i++)
	{
		if(old[i]<60)
		my_printf("%s\n",num[i]);
	}
	return 0;
}