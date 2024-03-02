#include <iostream>
using namespace std;
class Triangle
{
    private :
    
    int L1,L2,L3;
    
    public :
   
    void setlength(){
    cout<<"Enter length of triangle = "<<endl;
     cin>>L1>>L2>>L3;
     chktriangle();
    }
    void chktriangle();
    void triangle_type();
};
void Triangle :: chktriangle(){
    if (L1+L2>L3 && L2+L3>L1 && L1+L3>L2){
        cout <<"Trinagle formation is possible : "<<endl;
        triangle_type();
    }
    else {
        cout<<" Trinagle formation are not possible : "<<endl;
    }
    
}
void Triangle :: triangle_type(){
    if (L1==L2 && L2==L3 && L3==L1){
        cout<<"Equilateral triangle: "<<endl;
    }
    else if (L1==L2 || L2==L3 ||L3==L1){
        cout <<" Isoclecs triangle: "<<endl;
        
    }
    else {
        cout<<" scalene triangle: "<<endl;
    }
}
int main()
{
     Triangle T;
     T.setlength();
    // T.chktriangle();
  // T.triangle_type();
    return 0;
}