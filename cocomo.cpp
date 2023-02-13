// ID : B-180305020
// Name : Tanvir Ahammed Hridoy

#include<bits/stdc++.h>
using namespace std;
int main()
{
double value[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32};
    cout<<"For organic enter 1"<<endl;
    cout<<"For semi-detached enter 2"<<endl;
    cout<<"For embedded enter 3"<<endl;
    int model;
    double a,b,c,d,effort,tdev,kloc,staff,p;
    cin>>model;
    if(model==1)
    {
       a=value[0][0],b=value[0][1],c=value[0][2],d=value[0][3];
        cout<<"enter size of project : ";
        cin>>kloc;
        effort=a*pow(kloc,b);
        cout<<"Effort = "<<effort<<" PM"<<endl;
        tdev=c*pow(effort,d);
        cout<<"Tdev = "<<tdev<<" PM"<<endl;
        staff=effort/tdev;
        cout<<"Average staff size = "<<staff<<" Persons"<<endl;
        p=kloc/effort;
        cout<<"Productivity = "<<p<<" KLOC/PM"<<endl;
    }
    else if(model==2)
    {
       a=value[1][0],b=value[1][1],c=value[1][2],d=value[1][3];
        cout<<"enter size of project : ";
        cin>>kloc;
        effort=a*pow(kloc,b);
        cout<<"Effort = "<<effort<<" PM"<<endl;
        tdev=c*pow(effort,d);
        cout<<"Tdev = "<<tdev<<" PM"<<endl;
        staff=effort/tdev;
        cout<<"Average staff size = "<<staff<<" Persons"<<endl;
        p=kloc/effort;
        cout<<"Productivity = "<<p<<" KLOC/PM"<<endl;
    }
    else
    {
       a=value[2][0],b=value[2][1],c=value[2][2],d=value[2][3];
        cout<<"enter size of project : ";
        cin>>kloc;
        effort=a*pow(kloc,b);
        cout<<"Effort = "<<effort<<" PM"<<endl;
        tdev=c*pow(effort,d);
        cout<<"Tdev = "<<tdev<<" PM"<<endl;
        staff=effort/tdev;
        cout<<"Average staff size = "<<staff<<" Persons"<<endl;
        p=kloc/effort;
        cout<<"Productivity = "<<p<<" KLOC/PM"<<endl;
    }
}
