#include <stdio.h>

int main()
{
    char str[100];
    int c=0,c2=0,c3=0,c4=0, i;
    gets(str);

    while(str[i]!='\0')
    {
       if(str[i]>='0' && str[i]<='9'){
            c++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            c2++;
        }
        else if(str[i]==' '){
            c3++;
        }
        else
          c4++;
        i++;
    }

    printf("%d",c4);

    return 0;
}