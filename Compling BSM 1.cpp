#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string name;
    int balance;

    Account() {
        balance = 0;
    }

    void createAccount() {
        string firstname, lastname;
        cout << "Enter your first name: ";
        cin >> firstname;
        cout << "Enter your last name: ";
        cin >> lastname;
        name = firstname + " " + lastname;
        cout << "Welcome " << name << ", your account has been created.\n";
    }

    void deposit() {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw() {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient funds. Current balance: " << balance << endl;
        } else {
            balance -= amount;
            cout << amount << " withdrawn successfully. Remaining balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Your current balance is: " << balance << endl;
    }
};

int main() {
    Account acc;
    char choice;
do{

    cout << "Please select an option:\n";
    cout << "A. Create Account\nB. Check Balance\nC. Withdraw\nD. Deposit\n E.exit";
    cin >> choice;

    switch (choice) {
        case 'A':
            acc.createAccount();
            break;
        case 'B':
            acc.checkBalance();
            break;
        case 'C':
            acc.withdraw();
            break;
        case 'D':
            acc.deposit();
            break;
        default:
            cout << "Invalid option\n";
    }
} while(choice!='E');
    return 0;
}

