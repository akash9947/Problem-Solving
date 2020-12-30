#include <bits/stdc++.h>
using namespace std;


struct Date{
    int day;
    int month;
    int year;

    string toString(){
       return to_string(this->day)+"-"+to_string(month)+"-"+to_string(year);
    }

    Date(){
        cout<<"x"<<endl;
    }
    Date(int d, int month, int y){
        day=d;
        this->month=month;
        year=y;
        cout<<"y"<<endl;
    }

    Date& operator= (const char[] day)
    {
        // this->day=stoi(day);
        day=222;
        return *this;
    }
};


int main(){
    Date y="13";
    cout<<y.day<<endl;
    Date d(11,12,1998);
    Date dd={11,12,1233};


    // Date dates[2]={
    //     Date(11,12,1777),
    //     Date(14,12,1444)
    // };

    Date dates[2]={
        {11,11,1342},
        {12,12,1111}
    };

    cout<<"Birthday d "<<dd.toString()<<endl;
    cout<<"Birthday 0 "<<dates[0].toString()<<endl;
    cout<<"Birthday 1 "<<dates[1].toString()<<endl;


}