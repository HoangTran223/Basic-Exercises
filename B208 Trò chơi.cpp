// chỉ giải quyết dc khi các số trong dãy khác 0
#include<iostream>
#include<string>
using namespace std;
int timmax(int arr[100][100], int n)
{
    int max;
    max=arr[0][0];
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         if(arr[i][j]>max)
         max=arr[i][j];
    return max;
}
int timmin(int arr[100], int n)
{
    int min;
    min=arr[0]*arr[1];
    for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
         if(arr[i]*arr[j]<min)
         min=arr[i]*arr[j];
    return min;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
   cin>>arr[i];
int arr1[100][100];

   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          arr1[i][j]=timmin(arr,n);
    
   for(int i=0;i<n;i++)
       for(int j=i+1;j<n;j++)
           arr1[i][j]=arr[i]*arr[j];

for(int i=0;i<n;i++)
  for(int j=0;j<n;j++)
     if(arr1[i][j]==timmax(arr1,n))
     {
     cout<<i+1<<" "<<j+1;
     break;
     }
}