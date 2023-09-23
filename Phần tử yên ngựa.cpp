#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;
int timmin(int a[20][20],int n,int m)
{
  int k, min=a[n][0];
  for(k=1;k<m;k++)
     if(a[n][k]<min)
       min=a[n][k];
      return min;
    
}
int timmax(int a[20][20],int n,int m)
{
   int k, max=a[0][m];
   for(k=1;k<n;k++)
    if(a[k][m]>max)
      max= a[k][m];
      return max;
}
int main()
{
int n,m,i,j,sl=0;
cin>>n;
cin>>m;
int a[20][20];
for(i=0;i<n;i++) 
for(j=0;j<m;j++)
{
   cin>>a[i][j];
 }
for(i=0;i<n;i++)
 {
   for(j=0;j<m;j++)
   if(timmin(a,i,m)==timmax(a,n,j))
     {
     sl=sl+1;
 }

}
cout<<sl;
}


    