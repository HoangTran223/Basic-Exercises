#include <iostream>
#include<string>
using namespace std;
typedef long long unsigned int lli;
void mult(lli a[2][2], lli b[2][2])
{
	lli i, j, k;
	lli c[2][2] = {{0}};

	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			for (k = 0; k < 2; k++)
				c[i][j] += a[i][k] * b[k][j];

	for (i = 0; i < 2; i++)
		for (j = 0; j < 2; j++)
			a[i][j] = c[i][j];
}
lli fibo(lli n)
{
    lli A[2][2];
	A[1][0] = 1; A[1][1] = 0;
		A[0][0] = 1;
		A[0][1] = 1;

		lli  B[2][2];

		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				B[i][j] = A[i][j];

		lli m[2][2] = {{1,0},{0,1}};

		for (n--; n; n /= 2){
			if (n % 2)
				mult(m, B);
			mult(B, B);
	}
    return m[0][0];
}
int main() 
{
	lli n,m;
    lli dem=0;
    cin>>m>>n;
    for(lli i=1;i<=n;i++)
{
    if(fibo(i)>=m && fibo(i)<=n)
    {dem++;}
    else if(( fibo(i)>n))
    goto hi;
}
hi:
    cout<<dem;
}