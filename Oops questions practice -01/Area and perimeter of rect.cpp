#include <iostream>
using namespace std;
class circle
{
    private:
    
     float radius;
     
    public:
    
    void Area(){
       
        cout <<" Enter radius = "<<endl;
        cin>>radius;
       cout<<"Area of circle is = "<<3.14*radius*radius<<endl;
       cout<< " Circumference of circle is = "<<2*3.14*radius<<endl;
    }
    
};
int main()
{
    circle R;
    R.Area();
    
    return 0;
}
