#include <iostream>

using namespace std;

int main()
{
    int array[15],par[5],impar[5];
    int j=0,k=0,l=0,c=0,x=0;

    for(int i =0;i<15;i++)
    {
        cin>>array[i];

    }
    
    for(int a=0 ; a<15; a++)
    {



        if(j==5)
        {
            for (int i=0;i<5;i++)
            {
                cout<<"par["<<i<<"] = "<<par[i]<<endl;
            }
            j=0;
        }




        if(k==5)
            {
                for (int i=0;i<5;i++)
                {
                    cout<<"impar["<<i<<"] = "<<impar[i]<<endl;

                }
                k=0;
            }
        



    if(array[a]%2==0)
    {
        par[c]=array[a];
        c++;
        j++;
        if(c==5)c=0;

    }

    else
    {
        impar[x]=array[a];
        x++;
        k++;
        if(x==5)x=0;

    }
    }

    




    for (int i=0;i<k;i++)
    {
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
        
    }

    for (int i=0;i<j;i++)
    {
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
        
    }


  
}
