#include <iostream>
#include <algorithm>
using namespace std;


int main()
{    
    int a,b,c,d;

    int ex[2];
    cin>>ex[0]>>ex[1];
    // cin>>a>>b;

    // if(a>b){
    //    int tm=a;
    //    a=b;
    //    b=tm; 
    // }

    if(ex[1]%ex[0]==0 || ex[0]%ex[1]==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }
    return 0;
}

// int main()
// {    
//     int a,b,c,d;

//     int ex[2];
//     cin>>ex[0]>>ex[1];
//     sort(ex,ex+2);
//     // cin>>a>>b;

//     // if(a>b){
//     //    int tm=a;
//     //    a=b;
//     //    b=tm; 
//     // }

//     if(ex[1]%ex[0]==0){
//         cout<<"Sao Multiplos"<<endl;
//     }
//     else{
//         cout<<"Nao sao Multiplos"<<endl;
//     }
//     return 0;
// }