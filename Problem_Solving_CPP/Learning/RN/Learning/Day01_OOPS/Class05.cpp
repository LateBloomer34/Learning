// balance enquiry of account


#include<iostream>
using namespace std;

class bank {
private:
    string ACH_Name;
    int AC_Num;
    int tot_balance = 999999;
  
public:
      int withdraw(){
        int withdraw_amount;
        cout<<"eneter the withdraw value ";
        cin>>withdraw_amount;
        return withdraw_amount;
      }
      int deposit (){
        int deo_amu;
        cout<<"eneter the deposit value ";
        cin<<deo_amu;
        return deo_amu;
      }

    int balance(int withdraw_amount){
        if (withdraw_amount > tot_balance) {
            cout << "Insufficient balance!" << endl;
            return tot_balance;
        }
        tot_balance = tot_balance- withdraw_amount;
        return tot_balance;
    }
};

int main (){
    bank user;
    int amount = user.withdraw();
    int depo = user.deposit ();
    int remaining = user.balance(amount);
    int deporem = user.balance(depo);
    cout<<"your remianing balance in account is  "<<remaining;
}

