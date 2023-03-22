#define NUM_ITER 33158

#include <header.h>


int isidentifor(const char* name)
{
    const char *p = name;
    char ch = *p;
    if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && (ch != '_'))
    {
        return 0;
    }
    for (p++; *p; p++)
    {
        ch = *p;
        if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z') && (ch != '_') && (ch < '0' || ch > '9'))
        {
            return 0;
        }
    }
    return 1;
}

int main_bench()
{
    char name[33];
    int n;

    my_scanf("%d", &n);
    while (n--)
    {
        my_scanf("%s", name);

        if (isidentifor(name))
        {
            my_printf("yes\n");
        }
        else 
        {
            my_printf("no\n");
        }
    }
    return 0;
}