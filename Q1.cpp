

#include<iostream>
using namespace std;

enum EAccountType {SAVING, CURRENT, DMAT};

class InSufficientFundsException
{
private:
    int accno;
    double currentBalance;
    double withdrawAmount;

public:
    InSufficientFundsException()
    {
        accno=0;
        currentBalance=0;
        withdrawAmount=0;
    }
    InSufficientFundsException(int accno,double currentBalance, double withdrawAmount)
    {
        this->accno = accno;
        this->currentBalance = currentBalance;
        this->withdrawAmount = withdrawAmount;
    }
    void displayInSufficientFundsException()
    {
        cout << "InSufficient Funds Exception :" << endl;
        cout << "Account no :" << accno << endl;
        cout << "Current Balance :" << currentBalance<< endl;
        cout << "With Draw Amount :" <<withdrawAmount<< endl;
    }
};

class Account
{
    private:
    int accno;
    EAccountType acctype;
    double balance;

    public:
   
    Account()
    {
        accno=0;
        balance=0;
        acctype=SAVING;
    }

    Account(int accno, EAccountType acctype, double balance)
    {
        this->accno=accno;
        this->acctype=acctype;
        this->balance=balance;
    }

    void accept()
    {
        cout<<"Account no.: ";
        cin>>accno;
        cout<<"Balance:";
        cin>>balance;

        int i;
        cout<<"Enter Account type: "<<"0.SAVING"<<","<<"1.CURRENT"<<","<<"2.DMAT"<<endl;
        cin>>i;
        acctype=EAccountType(i);
    }

    void display()
    {
        cout<<"Account no.: "<<accno<<endl;
        cout<<"Account type: "<<acctype<<endl;
             if(acctype==0)
            {
             cout<<"Account type: SAVING"<<endl;
            }
            else if(acctype==1)
            {
             cout<<"Account type: CURRENT"<<endl;
            }
            else(acctype==2);
            {
             cout<<"Account type: DMT"<<endl;
            }
        cout<<"Balance: "<<balance<<endl;
    }

    void deposite(double amount)
    {
      if (amount < 0) 
      {
            throw invalid_argument("Invalid amount for deposit.");
      }
        balance += amount;
       cout << "Amount deposited successfully. Updated balance: " << balance <<endl;
    }

    void withdraw(double amount)
    {
      if (amount < 0 || amount > balance) 
      {
            throw InSufficientFundsException();
      }
        balance -= amount;
        cout << "Amount withdrawn successfully. Updated balance: " << balance << endl;
    }

    double getBalance() const 
    {
        return balance;
    }

    virtual~Account()
    {

    }
};

int main() 
{
    // Create an array of 5 Accounts
    Account accounts[5];
    Account a;

    // Accept details for each account from user
    for (int i = 0; i < 5; ++i) 
    {
        int accno;
        EAccountType accType;
        double balance;

        cout << "Enter account number for Account " << i + 1 << ": ";
        cin >> accno;

        cout << "Enter account type (0 for SAVINGS, 1 for CURRENT, 2 for DMT) for Account " << i + 1 << ": ";
        a.accept();

        cout << "Enter initial balance for Account " << i + 1 << ": ";
        cin >> balance;

        accounts[i] = Account(accno, accType, balance);
    }


int choice;
double amount;
int accountIndex;

do
{
    cout << "----------------Menu--------------"<<endl;
    cout << "1. Deposit"<<endl;
    cout << "2. Withdraw"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter account number (1-5): ";
    cin >> accountIndex;

    accountIndex--;

        if (accountIndex < 0 || accountIndex >= 5) 
        {
            cout << "Invalid account number.\n";
            continue;
        }

        try {
            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    accounts[accountIndex].deposite(amount);
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    accounts[accountIndex].withdraw(amount);
                    break;
                case 3:
                    cout<<"Thanks for using app...."<<endl;   
                default:
                    cout << "Invalid choice. Please enter a valid option."<<endl;
            }
        } catch (const exception& ex) {
            cout<< "Error: " << ex.what() <<endl;
        }
    }
     while (choice!=0);

    return 0;
}