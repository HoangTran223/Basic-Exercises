// ma trận nxm; tìm số ô mà ko là giao của các hàng hoặc cột có chứa số 1
#include<iostream>
#include<string>
using namespace std;
typedef long long int lli;
typedef long int li;
li tangmatran(li c[100][100],li n,li m, li i, li j)
{
for(li k=0; k<m;k++)
{
    c[i][k]+=1;
}
for(li h=0;h<n;h++)
{
    c[h][j]+=1;
}
}
int main()
{
    li m,n;
    cin>>n>>m;
    li a[100][100];
    li b[100][100];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>a[i][j];
    
        }
    }
     for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
          b[i][j]=0;
        }
    }
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(a[i][j]==1)
            tangmatran(b,n,m,i,j);
        }
    }
li dem=0;
for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(b[i][j]==0)
            dem+=1;
        }
    }
cout<<dem;
}