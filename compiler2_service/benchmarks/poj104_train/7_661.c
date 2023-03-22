#define NUM_ITER 908631

#include <header.h>

int main_bench()
{
    char string[256];
    char substring[256];
    char replacement[256];
    my_scanf("%s",string);
    my_scanf("%s",substring);
    my_scanf("%s",replacement);
    int length_string=strlen(string);
    int length_substring=strlen(substring);
    int length_replacement=strlen(replacement);
    int i,j,k;
    for(i=0;i<length_string;i++)
    {
       for(j=0;j<length_substring;j++)
       {
           if(substring[j]!=string[i+j])
           {
                 break;
           }
       }
       if(j==length_substring)
       {
           for(k=0;k<length_substring;k++)
           {  
                  string[i+k]=replacement[k];
           }
		   break;
       }
	}
    my_printf("%s\n",string);

}