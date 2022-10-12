#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,tdc=0,tdr=0,tds=0,t=0;
    double p,q,r;
    char c;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>c;
        if(c=='C')
        {
            tdc+=x;
        }
       else if(c=='R')
        {
            tdr+=x;
        }
        else if(c=='S')
        {
            tds+=x;
        }
    }
    t=tdc+tdr+tds;
    p=(tdc*100.00)/t;
    q=(tdr*100.00)/t;
    r=(tds*100.00)/t;
    cout<<"Total: "<<t<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<tdc<<endl;
    cout<<"Total de ratos: "<<tdr<<endl;
    cout<<"Total de sapos: "<<tds<<endl;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<p<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<q<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<r<<" %"<<endl;
    return 0;
}
