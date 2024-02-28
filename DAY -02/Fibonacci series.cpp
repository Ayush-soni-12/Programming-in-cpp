#include <iostream>
using namespace std;
int main() {
    int n,n1,n2,n3;
    n1=0;
    n2=1;
    cout<<"Enter length of fibnnocai series is :"<<endl;
    cin>>n;
    n3=n1+n2;
    cout<<"Fibonacci series is"<<endl;
    cout<<n1<<endl<<n2<<endl;
    for(int i=3;i<=n;i++){
        cout<<n3<<endl;
        n1=n2;
        n2=n3;
        n3= n1+n2;
       
        
    }
    
    return 0;
}