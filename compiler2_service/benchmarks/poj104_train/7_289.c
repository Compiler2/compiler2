#include <header.h>


int main_bench()
{
    char string[256], substring[256], replacement[256], buffer[256]={0}, result[256]={0};
    my_scanf("%s %s %s", string, substring, replacement);
    int mainlen=strlen(string), sublen=strlen(substring);
    int i;
    for (i=0;i<=mainlen-sublen;i++)
    {
        strncpy(buffer, (string+i), sublen);
        if (!strcmp(buffer,substring))
        {
   strncpy(result, string, i);
   strcat(result,replacement);
   strcat(result,(string+i+sublen));
            my_printf("%s",result);
            return 0;
        }
    }
 my_printf("%s",string);
 return 0;
}

