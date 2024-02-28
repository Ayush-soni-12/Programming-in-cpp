#include <iostream>
using namespace std;
int main() {
int n,temp;
cout<<" Enter number is :"<< endl;
cin>>n;
temp=n;
int rem,sum=0;
while (n>0){
    rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
}
if (temp==sum){
    cout<<temp<<" is palindrome number"<<endl;
    
}
else{
    cout<<temp<<" is not palindrome number";
}
    return 0;
}