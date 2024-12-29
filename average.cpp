#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

double b[N];
int n,k;
double Mn,Mx;
double a[N];


bool check(double mid)
{
    for(int i=1;i<=n;i++)
    {
        b[i]=b[i-1]+a[i]-mid;    
    }
    double temp=INT_MAX;
    for(int i=k;i<=n;i++)
    {
        temp=min(temp,b[i-k]);
        if(b[i]-temp>=0)
        {
            return true;
        }
    }
    
    return false;
}

signed main()
{
    cin>>n>>k;
    Mn=INT_MAX,Mx=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        Mn=min(Mn,a[i]);
        Mx=max(Mx,a[i]);
        
    }
    double l=Mn,r=Mx;
    while(l+1e-8<r)
    {
        double mid=(l+r)/2;
        if(check(mid))
        {
            l=mid;
        }
        else
        {
            r=mid;
        }
    }
    printf("%.6f",r);
    
    return 0;
}