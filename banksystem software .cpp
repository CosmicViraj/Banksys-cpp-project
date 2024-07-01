#include<iostream>
#include<string>
#include<map>
 using namespace std;
 class banksystem
 {
    public:
    map<string,double>accounts;
    void createaccount(string accountnumber)
    {
        accounts[accountnumber]=0.0 ;
        cout<<"Account created successfully";
    }

    void deposit(string accountnumber,double amount)
    {
        if(accounts.find(accountnumber)!=accounts.end())
        {
            accounts[accountnumber]+=amount;
            cout<<"Deposit successfully completed";
        }
        else
        {
            cout<<"Account not found";
        }
    }

    void withdraw(string accountnumber,double amount)
    {
        if(accounts.find(accountnumber)!=accounts.end())
        {
            if(accounts[accountnumber]>=amount)
            {
                accounts[accountnumber]-=amount;
                cout<<"withdraw successfully completed";
            }
            else
            {
                cout<<"Insufficient fund";
            }
        }
        else
        {
          cout<<"Account not found";
        }
    }

    void checkbalance(string accountnumber)
    {
        if(accounts.find(accountnumber)!=accounts.end())
        {
            cout<<"Account balance:"<<accounts[accountnumber];
        }
        else
        {
            cout<<"Account not found";
        }
    }
};
 int main()
 {
    banksystem bank;
    int choice ;
    string accountnumber;
    double amount;

    while(true)
    {
        cout<<"\n 1.create Account\n";
        cout<<"2.Deposit\n";
        cout<<"3.withdraw\n";
        cout<<"4.check balance\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice";
        cin>>choice;

        switch(choice)
        {
            case 1:
            cout<<"Enter account number:";
            cin>>accountnumber;
            bank.createaccount(accountnumber);
            break;

            case 2:
            cout<<"Enter account number:";
            cin>>accountnumber;
            cout<<"Enter amount";
            cin>>amount;
            bank.deposit(accountnumber,amount);
            break;

            case 3:
            cout<<"Enter account number:";
            cin>>accountnumber;
            cout<<"Enter amount";
            cin>>amount;
            bank.withdraw(accountnumber,amount);
            break;

            case 4:
            cout<<"Enter account number:";
            cin>>accountnumber;
            bank.checkbalance(accountnumber);
            break;

            case 5:
            return 0;
            deafult:
            cout<<"Invalid choice";
        }
    }
    return 0;
 }
