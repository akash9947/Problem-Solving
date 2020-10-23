#include <iostream>

using namespace std;

int main()
{
    int a,b,c=0,aa=0,bb=0,n=0,ri=0,rg=0,f,emp=0;
    while (1)
    {
        cin>>a>>b; 
        if(a!=b)
        {
            if(a>b)
            {
                ri++;
            }
            else
            {
                rg++;
            }
        }
        else
        {
            emp++;
        }
        aa+=a;
        bb+=b;  
        c++;   

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        if (n==1)
            continue;
        
        break;
    }

    // if(ri>rg)
    // {
    //     f=ri;
    // }
    // else
    // {
    //     f=rg;
    // }
    
    cout<<c<<" grenais"<<endl;
    cout<<"Inter:"<<ri<<endl;
    cout<<"Gremio:"<<rg<<endl;
    cout<<"Empates:"<<emp<<endl;
    if(ri>rg)
    {
        cout<<"Inter venceu mais"<<endl;
    }
    else
    {
        cout<<"Gremio venceu mais"<<endl;
    }
    

    
    return 0;
}