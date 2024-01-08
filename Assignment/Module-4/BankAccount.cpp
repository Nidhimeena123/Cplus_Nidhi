#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Member function to assign values
    void assignValues(string name, long accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully. Updated balance: " << balance << endl;
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal not allowed." << endl;
        }
    }

    // Member function to display name and balance
    void displayInfo() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    // Assign initial values
    account.assignValues("John Doe", 123456789, "Savings", 1000.0);

    // Display account information
    cout << "Initial Account Information:" << endl;
    account.displayInfo();

    // Deposit and display updated information
    account.deposit(500.0);
    account.displayInfo();

    // Withdraw and display updated information
    account.withdraw(200.0);
    account.displayInfo();

    // Attempt to withdraw more than the balance
    account.withdraw(10000.0);

    return 0;
}

