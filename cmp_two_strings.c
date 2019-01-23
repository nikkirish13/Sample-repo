#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    scanf("%s %s",str1,str2);
    for(i=0;str1[i]==str2[i]&&str1[i]!='\0';i++);
       if(str1[i]>str2[i])
       printf("%s",str1);
       else if(str1[i]<str2[i])
       printf("%s",str2);
       else 
       printf("%s",str1);
    

    return 0;
}
