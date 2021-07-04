#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double a,b,c;
    long long d,e;
    cin>>a>>b>>c;
    d=ceil(a/c);
    e=ceil(b/c);

    cout<<d*e<<endl;

}