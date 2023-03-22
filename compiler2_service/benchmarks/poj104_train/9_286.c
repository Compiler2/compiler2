#define NUM_ITER 17171

#include <header.h>

int main_bench()
{
	int i,n,f=0,m=0,j;
	
    
	struct 
	{
		char id[10];
		int age;
	} bingren[100],t[100],l[100],c;
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%s%d",&bingren[i].id,&bingren[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(bingren[i].age>=60)
			t[f++]=bingren[i];
		else if(bingren[i].age<60)
		    l[m++]=bingren[i];
	}


	for(i=1;i<f;i++)
	{
		for(j=i;j>0;j--)
		{
		  if(t[j].age>t[j-1].age)
		  {
		  c=t[j];	  
		  t[j]=t[j-1];
		  t[j-1]=c;
		  }
		}
	}
	
	for(i=0;i<f;i++)
	{
		my_printf("%s\n",t[i].id);
	}

    for(i=0;i<m;i++)
	{
	    my_printf("%s\n",l[i].id);
	}
	return 0;
}


