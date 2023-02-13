#include<bits/stdc++.h>
using namespace std;
int main()
{
    double EI,EO,EQ,ILF,EIF;
    double EFFORT,TD,UD,COST;
    cout<<"1. The number of user inputs: ";
    cin>>EI;
    cout<<"2. The number of user outputs: ";
    cin>>EO;
    cout<<"3. Number of inquiries: ";
    cin>>EQ;
    cout<<"4. Number of files: ";
    cin>>ILF;
    cout<<"5. The number of external interfaces: ";
    cin>>EIF;
    cout<<"6. Effort: ";
    cin>>EFFORT;
    cout<<"7. Technical documents(pages): ";
    cin>>TD;
    cout<<"8. User documents(pages): ";
    cin>>UD;
    cout<<"9. Cost: ";
    cin>>COST;

    cout<<"Various processing complexity factors are (14 values): ";
    double fun=0.0,f;
    for(int j=0;j<14;j++)
    {
        cin>>f;
        fun = fun+f;
    }
    cout<<"Sum of all f(i) = "<<fun<<endl;

    double we[]={4,4,6,10,5};
    double count_total= ((EI*we[0])+(EO*we[1])+(EQ*we[2])+(ILF*we[3])+(EIF*we[4]));
    cout<<"Count total: "<<count_total<<endl;

    double FP,produc,document;
    double DOCS,cost_function,tpod;

    FP = count_total * (0.65+(0.01*fun));
    cout<<"Function point: "<<FP<<endl;

    produc = FP/EFFORT;
    cout<<"Productivity: "<<produc<<endl;

    tpod = TD+UD;
    cout<<"Total pages of documentation: "<<tpod<<endl;

    DOCS=TD+UD;
    document = DOCS/FP;
    cout<<"Documentation: "<<document<<endl;

    cost_function = COST/produc;
    cout<<"Cost per function: "<<cost_function<<endl;

}
