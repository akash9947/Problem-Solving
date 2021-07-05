#include<iostream>
using namespace std;

int main()
{
    string n;
    int s=0;
    char array[100];
    cin>>n;
    s=n.size();

    for(int i=0 ; i<s;i++)
    {
        array[i]=n.at(i);
    }

    for(int i=0;i<s;i++)
    {
        char lowerChar=tolower(array[i]);

        if(lowerChar!='a' &&lowerChar!='e'&& lowerChar!='o'
         && lowerChar!='i' && lowerChar!='o' && lowerChar!='u' && lowerChar!='y')
        {
            cout<<".";
            cout<<lowerChar;
        }
    }

}