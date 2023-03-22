#include <header.h>


main_bench()
{	char words[500][40];
	int n,i,j,numwords[500]={0},num=0;
    my_scanf("%d",&n);
	for(i=0;i<n;i++)
  	{my_scanf("%s",words[i]);}
	
	for(i=0;i<n;i++)
	{	for(j=0;words[i][j]!='\0';j++)
 		{	numwords[i]++;
		 							  }
	 						
					 }
					 
	for(i=0;i<n-1;i++)
	{	if((numwords[i]+num)>80)
		{	my_printf("\n");
			my_printf("%s ",words[i]);
			num=numwords[i]+1;
		 						}					 
	 	else if((numwords[i+1]+num+numwords[i]+1)>80)
	 	{	my_printf("%s",words[i]);
	 		num=num+numwords[i]+1;
		 						}			
		else
		{	my_printf("%s ",words[i]);
	 		num=num+numwords[i]+1;
		 						}						 
					 }
  	  my_printf("%s",words[n-1]); 
		 
			 }

