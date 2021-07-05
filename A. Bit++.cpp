#include<iostream>
using namespace std;

int main()
{
    int a,x=0;
    string b;
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cin>>b;
        if(b=="++X"||b=="X++"||b=="--x"||b=="x++")
        {
            x++;
        }
        else 
        {
            x--;
        }
    }
    cout<<x<<endl;
}