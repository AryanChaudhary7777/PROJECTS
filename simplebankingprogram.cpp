//BANKING PRACTICE PROGRAM
#include<iostream>
#include<iomanip>
using namespace std;

double showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice;

    do{
        cout<<"Enter your choice"<<endl;
        cout<<"1.showBalance"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdraw"<<endl;
        cin>>choice;

        switch(choice){
            case 1: showBalance(balance);
            break;
            case 2: balance +=deposit();
                showBalance(balance);
            break;
            case 3: balance-=withdraw(balance);
                showBalance(balance);
            break;
            case 4: cout<<"Thanks for visiting"<<endl;
            break;
            default: cout<<"Invalid Choice"<<endl;

        }
    }while(choice!=4);
    
    return 0;
}
double showBalance(double balance){
    cout<<"Your balance is $"<<setprecision(2)<<fixed<<balance<<endl;
}
double deposit(){
    double amount=0;
    cout<<"Enter the amount to be deposited: ";
    cin>>amount;
    if (amount>0){
    return amount;
    }
    else{
        cout<<"The amount is not valid";
        return 0;
    }
}

double withdraw(double balance){
    double amount=0;
    cout<<"Enter the amount to be withdrawn: "<<endl;
    cin>>amount;

    if (amount>balance){
        cout<<"Insufficient funds";
        return 0;
    }
    else if(amount<0){
        cout<<"Invalid amount"<<endl;
        return 0;
    }
    else{
        return amount;
    }
}
 
