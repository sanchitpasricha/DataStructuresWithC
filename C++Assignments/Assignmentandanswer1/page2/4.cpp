#include<iostream>
using namespace std;

struct employee{
    int employee_number;
    float employee_salary;
};

int main(){
    int i;
    struct employee E[3];
    
    for(i=1;i<=3;i++){
        cout<<"Enter employee_number for employee "<<i<<" ::";
        cin>>E[i].employee_number;
    }
    for(i=1;i<=3;i++){
        cout<<"Enter employee_salary for employee "<<i<<" ::";
        cin>>E[i].employee_salary;
    }
    
    cout<<"E_Number  E_Salary";
    for(i=1;i<=3;i++){
        cout<<endl<<E[i].employee_number<<"         "<<E[i].employee_salary;
    }
}