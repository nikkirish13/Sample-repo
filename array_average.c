#include <stdio.h>
int main()
{
   int n,arr[100],sum=0,avg=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
       sum=sum+arr[i];
   }
   avg=sum/n;
   printf("%d",avg);
    return 0;
}
