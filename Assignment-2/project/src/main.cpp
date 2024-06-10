#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class ATMInterface {
private:
    unordered_map<int, int>* accounts;
    unordered_map<int, float>* balances;
    bool exit = false;

public:
    ATMInterface() {
        accounts = new unordered_map<int, int>();
        balances = new unordered_map<int, float>();
        initializeAccounts();
    }

    ~ATMInterface() {
        delete accounts;
        delete balances;
    }

    void initializeAccounts() {
        (*accounts)[123456] = 1234;
        (*balances)[123456] = 10000.1567f;

        (*accounts)[702160] = 1234;
        (*balances)[702160] = 1567.00f;
    }

    bool authenticate(int accountNo, int pin) {
        return accounts->find(accountNo) != accounts->end() && (*accounts)[accountNo] == pin;
    }

    void withdraw() {

        int accountNo, pin;
        float amount;
        cout <<"==================================================================== " << endl;

        cout << "Enter Your Account No.: ";
        cin >> accountNo;
        cout << "Enter Your PIN: ";
        cin >> pin;

        if (authenticate(accountNo, pin)) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && (*balances)[accountNo] >= amount) {
            	(*balances)[accountNo] = (*balances)[accountNo] - amount;
                cout << "Your Money has been successfully Withdrawn which is RS :" << amount << endl;
            } else {
                cout << "Invalid amount or insufficient funds." << endl;
            }
        } else {
            cout << "Invalid Account NO. or Password" << endl;
        }
        cout << endl;
        cout << endl;
    }

    void deposit() {
    	cout << endl;
        int accountNo, pin;
        float amount;

        cout << "Enter Your Account No.: ";
        cin >> accountNo;
        cout << "Enter Your PIN: ";
        cin >> pin;

        if (authenticate(accountNo, pin)) {
            cout << "Enter amount to Deposit: ";
            cin >> amount;

            if (amount > 0) {
                (*balances)[accountNo] += amount;
                cout << "Your Money has been successfully Deposited which is RS :" << amount << endl;
            } else {
                cout << "Invalid amount. Kindly enter a positive amount !" << endl;
            }
        } else {
            cout << "Invalid Account NO. or Password" << endl;
        }
        cout << endl;
        cout << endl;
    }

    void balance() {
    	cout << endl;
        int accountNo, pin;

        cout << "Enter Your Account No.: ";
        cin >> accountNo;
        cout << "Enter Your PIN: ";
        cin >> pin;

        if (authenticate(accountNo, pin)) {
            cout << "Your Account Balance is " << (*balances)[accountNo] << endl;
        } else {
            cout << "Invalid Account NO. or Password" << endl;
        }

        cout << endl;cout << endl;
    }

    void exitATM() {
    	cout <<" " << endl;
        exit = true;
        cout << endl;
        cout << "Thank you for using the ATM. Goodbye !" << endl;
    }

    void run() {
        cout << "ATM Machine" << endl;
        cout << "" << endl;

        while (!exit) {
            cout << "Choose 1 for Withdraw" << endl;
            cout << "Choose 2 for Deposit" << endl;
            cout << "Choose 3 for Check Balance" << endl;
            cout << "Choose 4 for EXIT" << endl;

            int choice;
            cout << "Choose the operation: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    withdraw();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    balance();
                    break;
                case 4:
                    exitATM();
                    break;
                default:
                    cout << "Invalid Choice. !  Please try again. !" << endl;
            }
        }
    }
};

int main() {
    ATMInterface atm;
    atm.run();
    return 0;
}
