// Gọi F(i) là dãy con tăng dài nhất kết thúc ở A(i), thì có ct
//  F(1)=1
//  F(i)=max(F(i), F(j)+1) với 1<=j<i và A(j)<A(i)
// kqua sẽ là max F
// => độ phức tạp O(n^2)


#include <iostream>
#include <algorithm>
using namespace std;
 
int main ()
{
    int n;
    cin>>n;
    long arr[1001];
    long F[1001];
    for (int i=1; i<=n; i++)
        cin>>arr[i];
    arr[0] = 0;
    F[0] = 0;
    long dmax = 1;
    for (int i=1; i<=n; i++)
    {
        F[i] = 1;
        for (int j=i-1; j>=1; j--)
        {
            if (arr[i]>arr[j])
            {
                F[i]=max(F[i], F[j]+1);
            }
        }
        dmax=max(dmax, F[i]);
    }
    
    cout<<dmax;
    return 0;
}
    

 
 