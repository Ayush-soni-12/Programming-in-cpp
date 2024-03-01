#include <iostream>
using namespace std;
class Rectangle 
{
    private :
    int length,breadth;
     
    public:
    void setdata();
    void display();
    
};
void Rectangle ::setdata(){
    cout<<"Enter length = "<<endl;
    cin>>length;
    cout<<"Enter breadth = "<<endl;
    cin>>breadth;
}
void Rectangle :: display(){
    cout<<"Area of rectangle is = "<< length*breadth<<endl;
    cout << " Perimeter of rectangle is = "<<2*(length+breadth)<<endl;
}
 
int main()
{
    Rectangle R;
    R.setdata();
    R.display();
    
   
    return 0;
}
