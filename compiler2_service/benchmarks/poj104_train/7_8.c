#define NUM_ITER 928535

#include <header.h>

int main_bench()
{ 
	char s1[256],s2[256],s3[256];
	int n,i,j,length1,length2,k,h;
	k=0;
	my_scanf("%s",s2);
	my_scanf("%s",s1);
	my_scanf("%s",s3);
	length1=strlen(s1);
	length2=strlen(s2);
	for(i=0;i<length2;i++)
	{
		if(s1[0]==s2[i])
		{
			j=0;
			while(s2[j+i]==s1[j]&&j<length1)j++;
			if(j==length1)k=i;
		}
		if(k)break;
	}
	h=k;
         if(k)
	{for(h=k;h<k+length1;h++)
         s2[h]=s3[h-k];}
	my_printf("%s",s2);
	
}