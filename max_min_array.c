#include <stdio.h>
int main()
{
   long long int n;
   long long int arr[10000];
   long long int min=0,max=0;
   scanf("%lld",&n);
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   max=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>max)
       max=arr[i];
   }
   min=arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]<min)
       min=arr[i];
   }
   printf("%d %d",min,max);
    return 0;
}
