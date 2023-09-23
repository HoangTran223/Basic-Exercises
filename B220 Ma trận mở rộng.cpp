// bai 220 nhung bang i*j bat ky, lay ma tran k phai ma tran vuong
#include<iostream>
#include<string>
using namespace std;
int tongPhanTu(int a[100][100],int th , int tc,int k, int l)
{
int tong1 = 0;
for (int i =th ; i<=k; i++ )
for(int j = tc ; j<=l;j++)
{
tong1 = tong1 + a[i][j];
}
return tong1;
}

int tinhTong(int a[100][100],int h, int c)
{
int tong = tongPhanTu(a,0,0,1,1);
int tuHang = 0;
int tuCot = 0;
int denHang = 1;
int denCot = 1;

for (int i=0; i< h-1; i++ )
{
for(int j =0 ; j< c-1; j++)
{
for (int k = i+1 ;k < h ;k++)
{
for (int l = j+1;l<c ;l++ )
{
if (tongPhanTu(a,i,j,k,l) > tong)
{
tong = tongPhanTu(a,i,j,k,l);
tuHang = i;
tuCot = j;
denHang = k;
denCot = l;
}
}
}
}
return tongPhanTu(a,tuHang, tuCot, denHang, denCot);
}

}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<n;i++)
       for(int j=0;j<m;j++)
          cin>>arr[i][j];
cout<<tinhTong(arr,n,m);
}

