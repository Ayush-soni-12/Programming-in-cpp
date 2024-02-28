#include <iostream>
using namespace std;
int main() {
int n;
cout<<"Enter number"<<endl;
cin>>n;
int fib[n];
fib[0]=0;
fib[1]=1;
cout<<"Fibonacci series is:"<<endl;
for(int i=2;i<=n*2;i++){
    fib[i]=fib[i-1]+fib[i-2];
}
int sum =0;
for (int i=0;i<=2*n;i++){
    cout<<fib[i]<<endl;
    if (i%2==0){
        sum=sum+fib[i];
    }
}
cout<<"sum of "<< n <<" even indices is"<<endl<<sum<<endl;
    return 0;
}