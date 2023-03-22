#define NUM_ITER 520117

#include <header.h>

int main_bench()
{
	char a[100],d[100][100]={0},*p1, *p3, *p2;
	char longest[30], shortest[30];
	int i=0, j=0, k=0,flag=1;
	gets (a);
	
	p1=a;
	while (*(p1+i))
	{
		if(*(p1+i)!=' ')
        {   
			d[j][k]=*(p1+i); 
			k++;
        }
		if(*(p1+i)==' ')
		{	
			j++;
			k=0;
		}
		i++;
	}
	strcpy(longest,d[0]);
	strcpy(shortest,d[0]);
	for(k=0;k<j+1;k++)
	{	  
		if(strlen(d[k])>strlen(longest))
		{
			strcpy(longest,d[k]);
		}
		if(strlen(d[k])<strlen(shortest))
		{
			strcpy(shortest,d[k]);	
		}
    }	
	
	my_printf("%s",longest);	
	my_printf ("\n");	
	my_printf("%s",shortest);
	my_printf ("\n");
	return 0;
}