#include<iostream>

using namespace std;

int main()
{
    char a[100],b[100];
    string x,y;
    int lenth,result,sumx=0,sumy=0,lenthx,lenthy,m=0;
    cin>>x>>y;   
    lenthx=x.size();
    lenthy=y.size();
    if(x.size()>y.size())
    {
        lenth=x.size();
    }
    else{
        lenth=y.size();
    }
    for(int i=0;i<lenthx;i++)
    {
        a[i]=int(tolower(x.at(i)));
        sumx+=a[i];
    } 
    for(int i=0;i<lenthy;i++)
    {
        b[i]=int(tolower(y.at(i)));
        sumy+=b[i];
    }
    for(int i=0;i<lenth;i++)
    {
       if(a[i]!=b[i])
       {
            if(a[i]>b[i])
            {
                cout<<"1"<<endl;
                break;
            }
            else if (a[i]<b[i])
            {
                cout<<"-1"<<endl;
                break;
            }
       }
       else if(a[i]==b[i])
       {
          m++;
          if(m==lenth)
          {
              cout<<"0"<<endl;
          }
       }
    }
    // if(sumx>sumy)
    // {
    //     cout<<"1"<<endl;
    // }
    // else if (sumx<sumy)
    // {
    //     cout<<"-1"<<endl;
    // }
    // else if(sumx==sumy)
    // {
    //     cout<<"0"<<endl;
    // }   

}