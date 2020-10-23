#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{

    // cout<<-7%2<<endl;
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        // if(b>0 && b%2==0)
        // {
        //     cout<<"EVEN POSITIVE"<<endl;
        // }
        // else if(b>0 && b%2!=0 )
        // {
        //     cout<<"ODD POSITIVE"<<endl;
        // }
        // else if(b<0 && b%2==0)
        // {
        //     cout<<"EVEN NEGATIVE"<<endl;
        // }
        // else if(b<0 && b%2!=0)
        // {
        //     cout<<"ODD NEGATIVE"<<endl;
        // }
        // else if(b==0)
        // {
        //     cout<<"NULL"<<endl;
        // }
        if(b==0){
            cout<<"NULL"<<endl;
        }
        else if(b>0){
            cout<<((b%2==0)?"EVEN POSITIVE":"ODD POSITIVE")<<endl;
        }
        else{
            cout<<((b%2==0)?"EVEN NEGATIVE":"ODD NEGATIVE")<<endl;
        }
    }


    return 0;
}