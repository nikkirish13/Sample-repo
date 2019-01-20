#include<stdio.h>
#include<conio.h>
void main() 
{
int x[1000],n,i;
float median(int,int[]);
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&x[i]);
printf("%f",median(n,x));
getch();
}



float median(int n, int x[]) {
    int temp;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(x[j] < x[i]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    if(n%2==0) {
        return((x[n/2] + x[n/2 - 1]) / 2.0);
    } else {
        return x[n/2];
    }
}