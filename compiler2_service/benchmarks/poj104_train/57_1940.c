#include <header.h>


int main_bench()
{
    char s[50];
    int n, len, i, j;
    my_scanf("%d",&n);
    for (j=0; j<n; j++) {
        my_scanf("%s", s);
        len = strlen(s);
        if (s[len-2]=='e' && s[len-1]=='r'||s[len-2]=='l' && s[len-1]=='y') 
		{
            for (i=0; i<len-2; i++) {
                my_printf("%c", s[i]);
            }
        }
        else if (s[len-3]=='i' && s[len-2]=='n' && s[len-1]=='g') {
            for(i=0;i<len-3;i++) {
                my_printf("%c",s[i]);
            }
        }
        my_printf("\n");
    }
    return 0;
}
