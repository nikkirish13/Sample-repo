#include <stdio.h>

int main()
{
    char str[100];
    int c=1, i;
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            c++;
        }
        
        i++;
    }

    printf("%d",c);

    return 0;
}