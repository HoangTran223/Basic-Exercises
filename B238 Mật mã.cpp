#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<math.h>
using namespace std;
typedef long int li;

int main()
{
li n;
cin>>n;
li d[1000];
char s[1000];
for(li i=0;i<n;i++)
{
    cin>>d[i];
}

for(li i=0;i<n;i++)
{
    if(d[i]<27)
    {
        s[i]=static_cast<char>(d[i]+96);
    }
    else if(d[i]==27)
    {
        s[i]=' ';
    }
    
}
for(li i=0;i<strlen(s);i++)
{
    if(s[i]!=' ')
    {
        li t= 219- static_cast<char>(s[i]);
        s[i]=static_cast<int>(t);   
    }
}

for(li i=0;i<strlen(s);i++)
{
    if(s[i]!=' ')
    {
        li t= static_cast<char>(s[i]);
        if(t<100)
        {
            s[i]=static_cast<int>(t+23);   
        }
        else
        {
            s[i]=static_cast<int>(t-3);
        }
}
}
for(li i=0;i<strlen(s);i++)
{
    cout<<s[i];
}
}


    
    
    