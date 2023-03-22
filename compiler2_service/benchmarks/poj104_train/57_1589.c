#define NUM_ITER 27450

#include <header.h>

int main_bench()
{
	char word[20],newword[20];
	int i,j,len,n;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",word);
		len=strlen(word);
		if(word[len-3]=='i'&& word[len-2]=='n'&& word[len-1]=='g')
		{
		   for (j=0;j<len-3;j++)
		   {
              newword[j]=word[j];
		   }
		   newword[j]='\0';
		}
		else 
		{
			 for (j=0;j<len-2;j++)
			 {
                newword[j]=word[j];
			 }
		     newword[j]='\0';
		
		}
		my_printf("%s\n",newword);
	}
	return 0;
}