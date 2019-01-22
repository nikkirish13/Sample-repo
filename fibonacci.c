#include<stdio.h>
int main(){
    int a=0,b=1,n,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",a);
        t=a+b;
        a=b;
        b=t;
    }
    return 0;
}