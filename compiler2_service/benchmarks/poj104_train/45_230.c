#define NUM_ITER 1038665

#include <header.h>





int mystrcmp(char* str1,char* str2,int lens)
{
    for(int i=0;i<lens;i++)
            if(*(str1+i)!=*(str2+i))return 0;
    return 1;
}

int main_bench()
{
    char big[50],small[50];
    my_scanf("%s %s",small,big);
    int l=strlen(small);
    for(int k=0;k<strlen(big)-l+1;k++)
            if(mystrcmp(big+k,small,l))
            {
                my_printf("%d\n",k);
                return 0;
            }

    my_printf("String Not Found");      
      
}