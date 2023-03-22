#define NUM_ITER 913893

#include <header.h>

int main_bench()
{
    int i,j,k,result;
    char input[100],substring[20],replace[20],cpy[20];
    my_scanf("%s\n%s\n%s",input,substring,replace);
    result=strlen(input)-strlen(substring);
	for(i=0;i<=result;i++)
    {
        if(input[i]==substring[0])
        {
            int a;
            a=strlen(substring);
            for(j=0;j<a;j++)
            {
                cpy[j]=input[i+j];
				cpy[j+1]='\0';
            }
            int m;
            m=strcmp(cpy,substring);
            if(m==0)
            {

                for(k=0;k<i;k++)
                {
					my_printf("%c",input[k]);
                }
				my_printf("%s",replace);
				for(k=i+a;k<strlen(input);k++)
                {
					my_printf("%c",input[k]);
                }
				return 0;    
            }
        }
    }
	my_printf("%s",input);
	return 0;
}