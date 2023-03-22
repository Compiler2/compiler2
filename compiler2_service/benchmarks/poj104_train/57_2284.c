#define NUM_ITER 30444

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char word[1000];
	int i;
	for (i=0; i<n; i++) 
	{
		my_scanf("%s",word);
		int len=strlen(word);
		switch (word[len-1]){
			case 'r':
				if (word[len-2]=='e') word[len-2]='\0';
				break;
			case 'y':
				if (word[len-2]=='l') word[len-2]='\0';
				break;
			case 'g':
				if (word[len-2]=='n'&&word[len-3]=='i') word[len-3]='\0';
				break;
		}
		my_printf("%s\n",word);
	}

	return 0;
}
