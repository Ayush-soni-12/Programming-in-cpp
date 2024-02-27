#include <iostream>
using namespace std;
int main() {
int n,temp,sum=0;
cout<<"Enter number is:"<<endl;
cin>>n;
temp=n;
int rem;
while (n>0){
    rem=n%10;
    sum =sum +(rem*rem*rem);
    n=n/10;
}
if (temp==sum ){
    cout<<temp<<" is Armstrong number"<<endl;
    
}
else {
    cout<<temp<<" is not a Armstrong number"<<endl;
}

    return 0;
}