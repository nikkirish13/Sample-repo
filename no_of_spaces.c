#include <stdio.h>

int main()
{
    char str[100];
    int c=0, i;
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            c++;
        }
        
        i++;
    }

    printf("%d",c);

    return 0;
}