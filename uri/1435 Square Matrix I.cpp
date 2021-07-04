#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    while (cin>>a && a!=0)
    {        
        for(int i=0;i<a;i++)
        {
            for (int j=0;j<a;j++)
            {               
                int top=j+1;
                int left=i+1;
                int bottom=a-i;
                int right=a-j;
                cout<<setw(3)<<min(min(top,bottom),min(left,right));
                if(j!=a-1){
                    cout<<" ";
                }                
            }
            cout<<endl;
        }
        cout<<endl;
    }
   
}
    
    
  