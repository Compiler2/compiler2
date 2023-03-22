#include <header.h>

int main_bench()
{
	char *p;
	int i,j,k,l;
	p=(char*)malloc(50*sizeof(char));
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)==' ')
		{   
		  	my_printf("%c",*(p+i)); 
		   	for(k=i+1;k<l;k++)
            {
			   if(*(p+k)!=' ')  {i=k-1;break;}
            }
		} 
		
 	    else my_printf("%c",*(p+i));
       
  	 }
        
    free(p);
}
				
     