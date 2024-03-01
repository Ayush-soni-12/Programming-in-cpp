#include <iostream>
using namespace std;
class BankAccount
{
    private :
    
    string bankname;
    int accountNumber;
    double balance;
    public :
    
    double depositamount;
    double currentbalance;
    double withdrawalamount;
    
    BankAccount(string a,int Ac,double b){
        
        bankname =a;
        accountNumber=Ac;
        balance=b;
        
        cout<<"Bank name = "<<bankname<<endl;
        cout<<"Account Number= "<<accountNumber<<endl;
        cout<<"Balance ="<<balance<<endl;
        
    }
    void deposit();
    void withdraw(); 
    
};
void BankAccount :: deposit(){
   
    cout<<"Deposit amount ="<<endl;
    cin>>depositamount;
    cout<<"Deposit successfull "<<endl;
    currentbalance=depositamount + balance;
    cout<<"Current Balance = "<<currentbalance<<endl;
}
void BankAccount :: withdraw(){
    cout<<" withdrawal amount = "<<endl;
    cin>>withdrawalamount;
    if (withdrawalamount<=currentbalance){
    cout<<" withdrawal successfull "<<endl;
    currentbalance = currentbalance-withdrawalamount;
    cout<<" Current Balance = "<<currentbalance<<endl;
    }
    else{
        cout<<"withdrawal unsuccessful. Insufficient balance "<<endl;
    }
}
int main()
{
    BankAccount BA("SBI",13435663,1000.00);
    
    
    BA.deposit();
    BA.withdraw();
   
    return 0;
}