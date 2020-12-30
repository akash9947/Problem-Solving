#include <iostream>
using namespace std;



int main() 
{
    string s="dsaf";
    cout<<s.length()<<endl;
    int a,j=1;
    cin>>a;
   
    for(int j=0; j<a; j++)
    {
        int x=0,y=0,b=0;    
        cin>>x>>y;

        if(x%2==0)
        {
            x+=1;
        }
        for(int i=0; i<y; i++)
        {   b+=x;
            x+=2;            
        }

        cout<<b<<endl;
    }
 
    return 0;
zsmyc