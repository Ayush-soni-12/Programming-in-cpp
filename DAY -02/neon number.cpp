#include <iostream>
using namespace std;
int main() {
int n,sqrno;
cout<<"Enter number is :"<<endl;
cin>>n;
sqrno=n*n;
int rem,sum =0;
while (sqrno>0){
    rem=sqrno%10;
    sum=sum+rem;
    sqrno=sqrno/10;
}
if (n==sum){
    cout<<n<<" is neon number"<<endl;
}
else {
    cout <<n<< " is not neon number"<<endl;
}

    return 0;
}