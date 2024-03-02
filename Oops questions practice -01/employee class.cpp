#include <iostream>
using namespace std;
class Employee
{
    private : 
    
    string name;
    int EmpId;
    int salary;
    
     public :
      float rating;
     void setdata();
     void performance_Rating();
     
};

void Employee :: setdata(){
    cout<<" Enter employee name = "<<endl;
    cin>>name;
    cout<<" Enter employee id = "<<endl;
    cin>>EmpId;
    cout<<" Enter employee salary = "<<endl;
    cin>>salary;
    performance_Rating();
}
void Employee :: performance_Rating(){
    cout <<"Enter performance rating (0.0 to 5.0)= "<<endl;
    cin>>rating;
    if(rating>=0.0&&rating<=5.0){
        salary =salary*rating;
        cout <<"updated salary is = "<<salary<<endl;
    }
    else{
        cout<<"Wrong performance rating.salary is not updated "<<endl;
        
    }
}
int main()
{
    Employee E;
    E.setdata();
   
    return 0;
}
