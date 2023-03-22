#define NUM_ITER 1151235

#include <header.h>

int main_bench()
{
    char a[1000];
    int count=1,i;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
                            if((a[i]==a[i+1])||(a[i]-a[i+1]=='a'-'A')||(a[i+1]-a[i]=='a'-'A'))
                            {
                                            count++;
                            }
                            else
                            {
                                if(a[i]>='a')
                                {
                                             a[i]=a[i]-'a'+'A';
                                             my_printf("(%c,%d)",a[i],count);
                                             count=1;
                                }
                                else
                                {
                                    my_printf("(%c,%d)",a[i],count);
                                    count=1;
                                }
                            }
    }
    getchar();
    getchar();
}
              