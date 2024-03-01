#include <iostream>
using namespace std;
class person
{
    private:
    
    string name;
    int age;
    string country;
    
    public :
    void setdata(string n,int a,string c);
    void getdata();
    
};
void person :: setdata(string n,int a,string c){
    name =n;
    age=a;
    country=c;
}
void person :: getdata(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"country = "<<country<<endl;
}
int main()
{
    person p;
    
    p.setdata("Ayush",18,"India");
    p.getdata();
    
    
    return 0;
}
