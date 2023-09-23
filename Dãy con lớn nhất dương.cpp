#include<iostream>
#include<string>
using namespace std;
typedef long long int lli;
typedef long int li;
int timmax( lli a[], li n)
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
    for(li j=n-1; j>0;j--)
    {
        if(a[j]> 0 && a[j-1]>0)
        {
            b[j-1]=b[j]+1;
        }
    }
    lli kqua= timmax(b,n);
    cout<< kqua;
}