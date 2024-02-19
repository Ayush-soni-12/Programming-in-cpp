#include <algorithm>
#include <iostream>

using namespace std;
 
// Driver code

int main()
{

    int a, b, c;

    cout<<"Enter a"<<endl<<"Enter b"<<endl<<"Enter c"<<endl;
    cin>>a>>b>>c;
    
 

    int ans;
 

    ans = max(c, max(a,b));

    cout << ans << " is the largest";
 

    return 0;
}
