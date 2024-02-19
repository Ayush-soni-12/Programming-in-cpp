#include <iostream>
using namespace std;

int main() {
int n;
cout<<"Enter number is: "<<endl;
cin>>n;
int rem;
cout<<"Reverse number is:"<<endl;
while(n>0){
    rem=n%10;
    cout<<rem;
    n=n/10;
    
}
    return 0;
}