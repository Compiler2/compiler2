#define NUM_ITER 1043719

#include <header.h>

void fanzhuan(char * a, int begin, int end);
void fanzhuan(char * a, int begin, int end)
{
    for(int i = 0; i < (end - begin + 1) / 2; i++)
    {
         char ch = a[begin + i];
         a[begin + i] = a[end - i];
         a[end - i] = ch;
    }
}
int main_bench()
{
    char a[101];
    gets(a);
    int i = 0, j = 0;
    for (; j <= (int)strlen(a); j++)
    {
        if( a[j]==' ' ||  a[j]=='\0')
        {
             fanzhuan(a, i, j - 1);
             i = j + 1;
        }
    }
    fanzhuan(a, 0, strlen(a) - 1);
    my_printf("%s\n", a);
    return 0;
}