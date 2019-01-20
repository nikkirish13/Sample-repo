#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int i,flag;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(isdigit(str[i])==0)
        flag++;
    }
    if(flag==0)
    printf("Yes");
    else
    printf("No");
}