#include <iostream>
using namespace std;
class Student 
{
    private : 
    
    string name;
    int Class;
    int rollno;
    int marks;
   
     
    public :
    
    void setdata(){
        cout<<"Enter name of student = "<<endl;
        cin>>name;
        cout<<"Enter Class ="<<endl;
        cin>>Class;
        cout<<"Enter roll no ="<<endl;
        cin>>rollno;
        cout<<"Enter marks ="<<endl;
        cin>>marks;
        
    }
        void checkgrade();
       
        
    
    
};
void Student :: checkgrade(){
    if (marks<=100 && marks >=90){
        cout <<" Grade is = A+"<<endl;
    }
   else if (marks<=90 && marks>=80){
    cout <<"Grade is = A"<<endl;
    }
    else if (marks <=80 && marks >=60){
        cout <<"Grade is = B"<<endl;
    }
    else if (marks<=60 && marks>=40 ){
        cout <<"Grade is = C"<<endl;
    }
}
int main()
{
    Student S;
    S.setdata();
    S.checkgrade();
    return 0;
}
