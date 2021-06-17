#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int tottal =0; 

void add()
{

  int choice;  
  cout<<"How many pakage do you want to add:    ";
  cin>>choice;
  // if(tottal==0)
  // {
  //   tottal=tottal+choice;
  //   for(int i=0;i<choice;i++)
  //   {
  //     cout<<"Please enter information of your pakage:    "<<i+1<<endl<<endl;
  //     cout<<"please enter pakage name:    ";
  //     cin>>arr1[i];
  //     cout<<"please enter no of days:    ";
  //     cin>>arr2[i];
  //     cout<<"please enter hotel name,Enter no if not aplicable:    ";
  //     cin>>arr3[i];
  //     cout<<"do you have return ticket?:    ";
  //     cin>>arr4[i];
  //     cout<<"please enter your contact number:    ";
  //     cin>>arr5[i];

  //   }
    
  // }
  // else
  // {
    for(int i=tottal;i<tottal+choice;i++)
    {
      cout<<"Please enter information of your pakage:    "<<i+1<<endl<<endl;
      cout<<"please enter pakage name:    ";
      cin>>arr1[i];
      cout<<"please enter no of days:    ";
      cin>>arr2[i];
      cout<<"please enter hotel name,Enter no if not aplicable:    ";
      cin>>arr3[i];
      cout<<"do you have return ticket?:    ";
      cin>>arr4[i];
      cout<<"please enter your contact number:    ";
      cin>>arr5[i];
    }
    tottal=tottal+choice;
  // }

}

void remove()
{
  int a;
  cout<<"Enter 1 to delete all"<<endl;
  cout<<"enter 2 to delete specific one"<<endl;
  cin>>a;
  if(a==1)
  {
    tottal=0;
    cout<<"All record is deleted"<<endl;
    system("pause");
  }
  else
  {
    string callid;
    cout<<"Please enter your contact number"<<endl;
    cin>>callid;
    for(int i=0;i<tottal;i++)
    {
      if(callid==arr5[i])
      {
        for(int j=i;j<tottal;j++)
        {
          arr1[j]=arr1[j+1];
          arr2[j]=arr2[j+1];
          arr3[j]=arr3[j+1];
          arr4[j]=arr4[j+1];
          arr5[j]=arr5[j+1];
          // system("pause");
        }
        tottal--;
        cout<<"your required record is deleted"<<endl;
        system("pause");
      }
    }
  }
  
}

void edit()
{
  string callid;
  cout<<"please enter your contact number:    ";
  cin>>callid;
  for(int i=0;i<tottal;i++)
  {
    if(callid==arr5[i])
    {
      cout<<"      Previous data    "<<endl<<endl;
      cout<<"information of pakage:    "<<i+1<<endl<<endl;
      cout<<"Pakage name:    "<<arr1[i]<<endl;
      cout<<"No of days:    "<<arr2[i]<<endl;
      cout<<"Hotel name:    "<<arr3[i]<<endl;
      cout<<"return ticket:    "<<arr4[i]<<endl;
      cout<<"Contact number:    "<<arr5[i]<<endl;
      system("pause");
      cout<<"please enter new data"<<endl;
      cout<<"Please enter information of your pakage:    "<<i+1<<endl<<endl;
      cout<<"please enter pakage name:    ";
      cin>>arr1[i];
      cout<<"please enter no of days:    ";
      cin>>arr2[i];
      cout<<"please enter hotel name,Enter no if not aplicable:    ";
      cin>>arr3[i];
      cout<<"do you have return ticket?:    ";
      cin>>arr4[i];
      cout<<"please enter your contact number:    ";
      cin>>arr5[i];
    }
  }
  
}

void search()
{
  string callid;
  cout<<"please enter your contact number:    ";
  cin>>callid;
  for(int i=0;i<tottal;i++)
  {
    if(callid==arr5[i])
    {
      cout<<"information of pakage:    "<<i+1<<endl<<endl;
      cout<<"Pakage name:    "<<arr1[i]<<endl;
      cout<<"No of days:    "<<arr2[i]<<endl;
      cout<<"Hotel name:    "<<arr3[i]<<endl;
      cout<<"return ticket:    "<<arr4[i]<<endl;
      cout<<"Contact number:    "<<arr5[i]<<endl;
      system("pause");
    }
  }
}

void print()
{
  if(tottal==0)
  {
    cout<<"No records"<<endl;
    system("pause");
  }
  for (int i=0;i<tottal;i++)
  {
    cout<<"information of pakage:    "<<i+1<<endl<<endl;
    cout<<"Pakage name:    "<<arr1[i]<<endl;
    cout<<"No of days:    "<<arr2[i]<<endl;
    cout<<"Hotel name:    "<<arr3[i]<<endl;
    cout<<"return ticket:    "<<arr4[i]<<endl;
    cout<<"Contact number:    "<<arr5[i]<<endl;
    system("pause");

  }

  
}

void logout()
{
  
}

int main()
{
    int option;
    do
    {
    
      cout<<"1. Add a Package"<<endl;
      cout<<"2. Remove a Package"<<endl;
      cout<<"3. Edit a Package"<<endl;
      cout<<"4  Search a Package"<<endl;
      cout<<"5  Print All Packages"<<endl;
      cout<<"6  Logout"<<endl;
      cout<<"7  Exit"<<endl;
      cin>>option;
      switch (option)
      {
        case 1:
          add();
          break;

        case 2:
          remove();
          break;

        case 3:
          edit();
          break;

        case 4:
          search();
          break;

        case 5:
          system("cls");
          print();
          break;

        case 6:
          logout();
          break;

      
        default:
          if(option !=7)
          {
            cout<<"Invalid input"<<endl;
          }
            break;
          }

    } 

    while (option !=7);

       
}
