#define NUM_ITER 1096628

#include <header.h>


int main_bench()
{
    char s[50], w[50], c[50];
    my_scanf("%s %s",s,w);
    int i=0,j;
    for(i;i<(int)(strlen(w)-strlen(s));i++)
    {
            for(j=0;j<(int)(strlen(s));j++)
            {
                    c[j]=w[i+j];
            }
            c[j]='\0';
            if (strcmp(c,s)==0)
            break;
    }
    my_printf("%d",i);
	return 0;
} 