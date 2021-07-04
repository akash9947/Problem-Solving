#include <iostream>
#include <fstream>
#include <sstream>
#include "utility.h"
using namespace std;


const int maxNumberOfPackage=100;
const int maxNumberOfuser=100;


struct HajAndUmrahPackage{
    int id;    
    string name;
    int days;
    string hotelName;
    bool returnAirTicket;
    string description;
    double totalCost;
    bool deleted=false;
    string toString(){
        return "ID: "+to_string(id)+"\n"+
                "Name: "+name+"\n"+
                "Days: "+to_string(days)+"\n"+
                "Hote Name: "+hotelName+"\n"+
                "Return Air Ticket: "+(returnAirTicket?"Yes":"No")+"\n"+
                "Description:\n"+description+"\n"+
                "Total Cost: "+to_string(totalCost)+"\n";

    }
};
struct User{
    string userName;
    string password;
    string name;
};

HajAndUmrahPackage packages[maxNumberOfPackage];
int currentTotalNumberOfPackages = 0;
int deletedCount=0;
int lastMaxId=0;

User users[maxNumberOfuser];
int currentTotalNumberOfUsers = 0;

User *currentUser;
bool isAuthenticated = false;




int getPackageIndexById(int id){
    int index=-1;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        if(packages[i].id==id)
            return i;
    }
    return index;
}
void inputPackageName(HajAndUmrahPackage& p){
    cout<<"Package Name:";
    p.name=TakeStringInput();
}

void inputDays(HajAndUmrahPackage& p){
    cout<<"No of Days:";
    cin>>p.days;
}

void inputHotelName(HajAndUmrahPackage& p){
    cout<<"Hotel Name, Enter NA if not applicable:";
    cin.ignore();
    p.hotelName=TakeStringInput();

}
void inputReturnTicket(HajAndUmrahPackage& p){
    cout<<"Return Air Ticket included ?"<<endl;
    p.returnAirTicket= (takeChoice()=="Yes"? true: false);

}
void inputDescription(HajAndUmrahPackage& p){
    cout<<"Package description(End your input by ; in a single line): ";
    string tmp;
    while(getline(cin,tmp) && tmp!=";" ){
        p.description+=tmp+"\n";
    }
}
void inputTotalCost(HajAndUmrahPackage& p){
    cout<<"Total Cost:";
    cin>>p.totalCost;

}

void addPackage(){
    HajAndUmrahPackage p;
    cout<<"Please enter details of package to add."<<endl;

    inputPackageName(p);
    inputDays(p); 
    inputHotelName(p);
    inputReturnTicket(p);
    inputDescription(p);
    inputTotalCost(p);

    p.id=++lastMaxId;
    packages[currentTotalNumberOfPackages++]=p;
    cout<<"Successfully added!"<<endl;
}
void removePackage(){
    cout<<"Please enter the package ID to removed:";
    int id;
    cin>>id;

    bool isDeleted=false;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        if(packages[i].id==id){
            packages[i].deleted=true;
            cout<<"Successfully removed!"<<endl;
            isDeleted=true;
            deletedCount++;
        }
    }
    if(!isDeleted)
        cout<<"ID not found, removing failed!"<<endl;

}
void editPackage(){
    int id;
    cout<<"Enter package ID to edit: ";
    cin>>id;


    int index=getPackageIndexById(id);
    if(index==-1){
        cout<<"Given ID isn't found."<<endl;
        return;
    }

    cout<<"Choose corresponding option to edit value"<<endl;
    cout<<"   1. Name"<<endl
        <<"   2. Days"<<endl
        <<"   3. Hotel Name"<<endl
        <<"   4. Return Ticket"<<endl
        <<"   5. Description"<<endl
        <<"   6. Total Cost"<<endl
        <<"   7. Go back to previous Menu"<<endl;

    char choice= takeChoice('6');

    switch(choice){
        case '1':
            inputPackageName(packages[index]);
            break;
        case '2':
            inputDays(packages[index]);
            break;
        case '3':
            inputHotelName(packages[index]);
            break;
        case '4':
            inputReturnTicket(packages[index]);
        case '5':
            inputDescription(packages[index]);
            break;
        case '6':
            inputTotalCost(packages[index]);
            break;
        case '7':
            return;
    }

}

void printSearchByDescription(){
    string desc;
    cout<<"Enter string to search: ";
    getline(cin,desc);
    int count=0;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        if(packages[i].description.find(desc)!=string::npos){
            cout<<"Result: "<<++count<<endl;
            cout<<packages[i].toString()<<endl;
        }
    }
    if(count==0)
        cout<<"Sorry, no result found"<<endl;
}

void printSearchByMaxCost(){
    double cost;
    cout<<"Enter max cost to filter: "<<endl;
    cin>>cost;
    
    int count=0;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        if(packages[i].totalCost<=cost){
            cout<<"Result: "<<++count<<endl;
            cout<<packages[i].toString()<<endl;
        }
    }
    if(count==0)
        cout<<"Sorry, no result found"<<endl;

}

void printSearchByMinCost(){
    double cost;
    cout<<"Enter min cost to filter: "<<endl;
    cin>>cost;
    int count=0;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        if(packages[i].totalCost>=cost){
            cout<<"Result: "<<++count<<endl;
            cout<<packages[i].toString()<<endl;
        }
    }
    if(count==0)
        cout<<"Sorry, no result found"<<endl;

}
void searchPackage(){
    cout<<"Chose below option to search: "<<endl;
    cout<<"    1. Search By Description contains"<<endl
        <<"    2. Search by Min Total Cost"<<endl
        <<"    3. Search by Max Total Cost"<<endl
        <<"    4. Go back"<<endl;

    char choice= takeChoice('4');

    switch(choice){
        case '1':
            printSearchByDescription();
            break;
        case '2':
            printSearchByMinCost();
            break;
        case '3':
            printSearchByMaxCost();
            break;
        case '4':
            return;
    }
}


void printAllPackages(){
    cout<<"All Packages: "<<endl;
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        string tm=packages[i].toString();
        cout<<tm<<endl;
    }
    cout<<endl;
}
void loadUser(){
    ifstream fin("users.txt");

    string tmp;
    while(getline(fin,tmp)){
        User *user= new User();
        int index=tmp.find(';');
        user->userName=tmp.substr(0,index);

        tmp=tmp.substr(index+1);
        index=tmp.find(';');
        user->password=tmp.substr(0,index);

        user->name = tmp.substr(index+1);
        users[currentTotalNumberOfUsers++]=*user;
    }
    fin.close();


}
void loadData(){
    ifstream pin("packages.txt");

    string tm;
    getline(pin,tm,';');

    if(tm=="")
        return;

    currentTotalNumberOfPackages=stoi(tm);

    for(int i=0;i<currentTotalNumberOfPackages;i++){
        HajAndUmrahPackage p;

        getline(pin,tm,';');
        p.id=stoi(tm);

        getline(pin,tm,';');
        p.name=tm;

        getline(pin,tm,';');
        p.days=stoi(tm);

        getline(pin,tm,';');
        p.hotelName=tm;

        getline(pin,tm,';');
        p.returnAirTicket= (tm=="1"?true:false);

        getline(pin,tm,';');
        p.description=tm;

        getline(pin,tm,';');
        p.totalCost=stod(tm);

        packages[i]=p;

        lastMaxId=max(lastMaxId,p.id);
    }
    deletedCount=0;
    pin.close();
}
void saveData(){
    ofstream pout("packages.txt");
    pout<<currentTotalNumberOfPackages-deletedCount<<";";
    for(int i=0;i<currentTotalNumberOfPackages;i++){
        HajAndUmrahPackage p=*(packages+i);
        if(p.deleted)
            continue;
        pout<<p.id<<";"
            <<p.name<<";"
            <<p.days<<";"
            <<p.hotelName<<";"
            <<p.returnAirTicket<<";"
            <<p.description<<";"
            <<p.totalCost<<";";
    }
    pout.close();
}

bool doLogin(){

    if(isAuthenticated) return true;

    string userName, password;

    cout<<"Enter UserName:";
    userName=TakeStringInput();
    cout<<"Enter Password:";
    password=TakeStringInput();

    for(int i=0;i<currentTotalNumberOfUsers;i++){
        if(users[i].userName==userName && users[i].password==password){
            currentUser= &users[i];
            isAuthenticated= true;
            return true;
        }
    }
    cout<<endl;
    return false;
}

void logout(){
    isAuthenticated=false;
    currentUser=NULL;
}

bool showMainMenu(){
    while (!doLogin())
    {
        cout<<"Authenticaton is needed to proceed further. Please try again..."<<endl<<endl;
    }
    cout<<"Hi "<<currentUser->name<<"!"<<endl;
    cout<<"Please choose a option bellow:"<<endl;
    cout<<"      1. Add a Package"<<endl
        <<"      2. Remove a Package"<<endl
        <<"      3. Edit a Package"<<endl
        <<"      4  Search a Package"<<endl
        <<"      5  Print All Packages"<<endl
        <<"      6  Logout"<<endl
        <<"      7  Exit"<<endl;

    char choice=takeChoice('7');

    switch(choice){
        case '1':
            addPackage();
            break;
        case '2':
            removePackage();
            break;
        case '3':
            editPackage();
            break;
        case '4':
            searchPackage();
            break;
        case '5':
            printAllPackages();
            break;
        case '6':
            logout();
            break;
        case '7':
            return false;
            break;
    }
    saveData();
    loadData();
    cout<<endl;
    return true;
}
int main(){

    cout<<"<<---   Welcome to Halj and Umrah Package management system  --->>"<<endl<<endl;
    loadUser();
    loadData();

    // for(int i=0;i<currentTotalNumberOfUsers;i++){
    //     cout<<users[i].userName<<" "<<users[i].password<<" "<<users[i].name<<endl;
    // }
    while(showMainMenu()){
        
    }
    cout<<"Exiting program!"<<endl;
}