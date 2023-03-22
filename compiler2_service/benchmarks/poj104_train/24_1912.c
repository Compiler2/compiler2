#include <header.h>


main_bench()
{
    char ch='0';
    char a[202][100],b[100],max[100],min[100];
    int i=0,j=0;
	while(1)
	{
	   while(1)
	   {
	      my_scanf("%c",&ch);
	      if(ch==' '||ch=='\n') break;
		 else b[i++]=ch;
	    }
	    b[i]='\0';i=0;
	       
	     strcpy(a[j++],b);
	     if(ch=='\n')break;
	   
	}
	strcpy(max,a[0]);
	strcpy(min,a[0]);
	for(i=1;i<j;i++)
	{
	    if(strlen(a[i])>strlen(max)) strcpy(max,a[i]);
	    if(strlen(a[i])<strlen(min)) strcpy(min,a[i]);

	}
     my_printf("%s\n",max);
	    my_printf("%s\n",min);
	
}