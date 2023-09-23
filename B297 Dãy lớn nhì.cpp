#include<iostream>
#include<iomanip>
using namespace std;
typedef long long int lli;
typedef long int li;
li timmax(li n, li arr[])
{
    li dem1=arr[0];
    for(li i=1; i<n;i++)
       if(dem1<=arr[i])
         dem1=arr[i];
    return dem1;
}
void sapxep(li a[], long int &n)
{
    for(long int i=0; i<n-1;i++)
    {
        for(long int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              li temp=a[i];
              a[i]=a[j];
              a[j]=temp;
            }
        }
    }
}
li tim2(li n, li a[])
{
 li dem=timmax(n,a);
 li kqua;
 sapxep(a,n);
 for(li i=n-1; i>=0;i--)
 {
    if(a[i]<dem)
    {
        kqua=a[i];
        break;
    }
 }
return kqua;
}
int main()
{
    li n,dem=1;
    cin>>n;
    li a[100000];
    li b[100000];
    for(li i=0; i<n;i++)
    {
            cin>>a[i];
    }
    for(li i=0; i<n;i++)
    {
            b[i]=a[i];
    }
    li solu=tim2(n,b);
    for(li i=0; i<n;i++)
    {
        if(a[i]==solu)
        {
            dem+=i;
            break;
        }
    }
    cout<<solu<<" "<<dem;
    
}