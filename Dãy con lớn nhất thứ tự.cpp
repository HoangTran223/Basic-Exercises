#include<iostream>
#include<string>
using namespace std;
typedef long long int lli;
typedef long int li;

lli timmax( lli a[], li n)
{
   lli maxx= a[0];
    for(li i=0; i<n;i++)
{
    if(maxx<a[i])
    maxx=a[i];

}
return maxx;
}
int main()
{
    li n;
    cin>>n;
    li j=n-1;
    lli a[100000];
    lli b[100000];
    for(li i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(li i=0;i<n;i++)
    {
        b[i]=1;
    }
    
    for(j; j>0;j--)
    {
        if(a[j]> a[j-1])
        {
            b[j-1]=b[j]+1;
        }
        
    }
    lli kqua1= timmax(b,n);
cout<<kqua1;
}