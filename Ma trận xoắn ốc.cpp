// bảng mxn
#include <iostream>
#include<string>
#include<math.h>
using namespace std;
void chuyen(int A[][100],int m,int n,int B[],int &p)
{ p=m*n;
for(int i=0;i<m;i++)
  for(int j=0;j<n; j++)
  B[i*n+j]=A[i][j];
}
void sapxep(int A[],int n)
{ for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
     if(A[i]>A[j])
    {
     int t=A[i];
         A[i]=A[j];
         A[j]=t;
    }
}
void Xoan(int A[][100],int m,int n)
{
 int B[100];
 int p;
chuyen(A,m,n,B,p);
sapxep(B,p);
int tren=0, duoi=m-1, trai=0, phai =n-1;
int i,vt=0;
do
{
 for(i=trai; i<=phai && vt<p;i++)
    A[tren][i]= B[vt++];
    tren++;
 for(i=tren;i<=duoi && vt<p;i++)
    A[i][phai]=B[vt++];
    phai--;
 for(i=phai;i>=trai && vt<p;i--)
    A[duoi][i]=B[vt++];
    duoi--;
 for(i=duoi;i>=tren && vt<p;i--)
    A[i][trai]=B[vt++];
    trai++;
}
while(tren <=duoi && trai<=phai);
}
void ketqua(int A[][100],int m,int n)
 { for(int i=0;i<m;i++)
    {for(int j=0;j<n;j++)
     cout<<A[i][j]<<" ";
     cout<<endl;
    }
 }
int main()
{
int n,m;
cin>>m;
cin>>n;
int A[100][100];
for(int i=0;i<m;i++)
{
   for(int j=0;j<n;j++)
   cin>>A[i][j];
}
Xoan(A,m,n);
ketqua(A,m,n);
}


