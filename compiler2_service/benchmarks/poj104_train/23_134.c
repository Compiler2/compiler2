#define NUM_ITER 1273467

#include <header.h>

main_bench()
{
	char a[500],b[500];
	int i,la,k=0,j;
	gets(a);
	la=strlen(a);
	for(i=0;i<la;i++)
	{
		if(a[i]!=' ') k=k+1;
		else 
		{
		    for(j=i-k;j<i;j++)
			   b[la+j+k-2*i]=a[j];
			b[la-i-1]=' ';
			k=0;
		}
	}
	for(j=i-k;j<i;j++)
		b[la+j+k-2*i]=a[j];
	b[la]='\0';	
    puts(b);
}