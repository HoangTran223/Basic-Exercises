#include<iostream>
#include<string>
using namespace std;
void sapxep(unsigned int arr1[], unsigned int &m)
{
  if(m>1)
  {
    unsigned int bien;
    for(int i=0;i<m-1;i++)
       for(int j=i+1;j<m;j++)
         if(arr1[i]>arr1[j])
          {
           bien =arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=bien;
          }
}
else if(m<=1)
return;
}
void Xoa(unsigned int a[], unsigned int &n, unsigned int vitri) 
{
  if(n>1)
  {
  
    for (int i = vitri + 1; i < n; i++) {
        a[i-1] = a[i];
    }
    n--;
  }
  else if(n<=1)
  return;
}
void XoaTrung(unsigned int a[], unsigned int &n) 
{
if(n>1)
{
{
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i]==a[j]) {
                Xoa(a,n,j);
                i--;
            }
        }
    }
  }
}
else if(n<=1)
return ;
}
int kqua(unsigned int arr[], unsigned int &n)
{
  if(n>1)
  {
  XoaTrung(arr,n);
    sapxep(arr,n);
  
	// neu phan tu be nhat khong phai la 1 thi in 1 ra man hinh
	if(arr[0]!=1)
  {cout<<1<<endl;}
	if(arr[0]==1)
	{
    unsigned int dem=0;
    // neu hai phan tu lien tiep khong phai la hai so tu nhien lien tiep thi in ra so tiep theo cua phan tu dau
    for(int i=0;i<n-1;i++)
			{

      if(arr[i]+1!=arr[i+1])
		{
     
      dem++;
			cout<<arr[i]+1<<endl;
      goto lab;
    }
    
      }
    lab:
    if(dem==0)
    cout<<arr[0]+n<<endl;
	}
  }
  else if(n<=1)
  return 0;
}
int main()
{
    unsigned int n,t;
    unsigned int arr[100];
      cin>>t;
    for(int i=1;i<=t;i++)
    {  
      Hii:
        cin>>n;
        if(n==0)
        goto Hii;
        else if(n!=0)
       { for(int j=0;j<n;j++)
        {
        cin>>arr[j];
        }
      if(n==0)
      return 0;
      if(n==1)
      {
        if(arr[0]==1)
        cout<<2<<endl;
        else if(arr[0]!=1)
        cout<<1<<endl;
      }
     if(n==2)
     {
      sapxep(arr,n);
      if(arr[0]!=1)
      cout<<1<<endl;
      else if(arr[0]==1)
      {
        if(arr[1]==arr[0])
          cout<<arr[0]+1<<endl;
        else if(arr[1]!=0)
        {
          if(arr[1]==arr[0]+1)
          cout<<arr[0]+2<<endl;
          else if(arr[1]!=arr[0]+1)
          cout<<arr[0]+1<<endl;
        }
      }
     }
     if(n>2)
      kqua(arr,n);
}
    }
}

