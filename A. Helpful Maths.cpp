#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a[100];
    int ar[100];
    string b;
    int size;
    int j=0,temp=0;

    cin>>b;
    size=b.size();
    
    for (int i=0;i<size;i+=2)
    {       
        a[j]=b.at(i);
        ar[j]=stoi(a[j]);
        j++;       
    }
    for(int i=0;i<(size/2)+1;i++)
    {
        for(int j=i+1;j<(size/2)+1;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

    for(int i=0;i<(size/2)+1;i++)
    {
        cout<<ar[i];
        if(i!=(size/2))
        {
            cout<<"+";
        }
    }
}