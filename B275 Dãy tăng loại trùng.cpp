#include <iostream>
#include<string>
using namespace std;
typedef long long int lli;
void sapxep(lli a[], long int &n)
{
    for(long int i=0; i<n-1;i++)
    {
        for(long int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              lli temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
}
void xoa(lli a[],long int &n, long int vitri) {
    if (n==1 || n==0) return; 
 else 
 {
    for (long int i = vitri + 1; i < n; i++) {
        a[i-1] = a[i];
    }
    n--;
}
}
void xoatrung(lli a[], long int &n) 
{
    if (n==1 || n==0) return; 
 else 
 {
    for (long int i = 0; i < n-1; i++) {
        for (long int j = i+1; j < n; j++) {
            if (a[i]==a[j]) {
                xoa(a,n,j);
                i--;
            }
        }
    }
}
}

int main() {
   
    long int n; 
    lli a[100000];
    cin >> n;
    for (long int i = 0; i < n; i++) {
        cin >> a[i];
    }
    xoatrung(a,n);
    sapxep(a,n);
    for (long int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}