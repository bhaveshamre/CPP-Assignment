/*
 * main.cpp
 *
 *  Created on: May , 2024
 *      Author: Bhavesh
 */

#include <iostream>
#include <unordered_map>
#include <stdexcept>

using namespace std;

class InvalidAccountException : public runtime_error {
public:
    InvalidAccountException() : runtime_error("Invalid Account Number or PIN.") {}
};

class InsufficientFundsException : public runtime_error {
public:
    InsufficientFundsException() : runtime_error("Insufficient funds.") {}
};

class InvalidAmountException : public runtime_error {
public:
    InvalidAmountException() : runtime_error("Invalid amount. Kindly enter a positive amount!") {}
};

class ATMInterface {
private:
    int accountNo, pin;
    float amount;

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

    void addAccount(int accountNo, int pin, float initialBalance) {
        (*accounts)[accountNo] = pin;
        (*balances)[accountNo] = initialBalance;
    }

    bool authenticate(int accountNo, int pin) {
        if (accounts->find(accountNo) == accounts->end() || (*accounts)[accountNo] != pin) {
            throw InvalidAccountException();
        }
        return true;
    }

    void withdraw() {
        try {
            cout << "\nEnter Your Account No.: ";
            cin >> accountNo;
            cout << "Enter Your PIN: ";
            cin >> pin;

            authenticate(accountNo, pin);

            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount <= 0) {
                throw InvalidAmountException();
            }
            if ((*balances)[accountNo] < amount) {
                throw InsufficientFundsException();
            }

            (*balances)[accountNo] -= amount;
            cout << "Your Money has been successfully Withdrawn which is RS: " << amount << endl;
        } catch (const InvalidAccountException& e) {
            cout << e.what() << endl;
        } catch (const InsufficientFundsException& e) {
            cout << e.what() << endl;
        } catch (const InvalidAmountException& e) {
            cout << e.what() << endl;
        } catch (const exception& e) {
            cout << "An unexpected error occurred: " << e.what() << endl;
        }
        cout << endl;
    }

    void deposit() {
        try {
            cout << "\nEnter Your Account No.: ";
            cin >> accountNo;
            cout << "Enter Your PIN: ";
            cin >> pin;

            authenticate(accountNo, pin);

            cout << "Enter amount to Deposit: ";
            cin >> amount;
            if (amount <= 0) {
                throw InvalidAmountException();
            }

            (*balances)[accountNo] += amount;
            cout << "Your Money has been successfully Deposited which is RS: " << amount << endl;
        } catch (const InvalidAccountException& e) {
            cout << e.what() << endl;
        } catch (const InvalidAmountException& e) {
            cout << e.what() << endl;
        } catch (const exception& e) {
            cout << "An unexpected error occurred: " << e.what() << endl;
        }
        cout << endl;
    }

    void balance() {
        try {
            cout << "\nEnter Your Account No.: ";
            cin >> accountNo;
            cout << "Enter Your PIN: ";
            cin >> pin;

            authenticate(accountNo, pin);

            cout << "Your Account Balance is: " << (*balances)[accountNo] << endl;
        } catch (const InvalidAccountException& e) {
            cout << e.what() << endl;
        } catch (const exception& e) {
            cout << "An unexpected error occurred: " << e.what() << endl;
        }
        cout << endl;
    }

    void exitATM() {
        cout << "\nThank you for using the ATM. Goodbye!" << endl;
        exit = true;
    }

    void Menu() {
        cout << "ATM Machine\n" << endl;

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
                        cout << "Invalid Choice! Please try again." << endl;
                }
            }
        }

};

int main() {
    ATMInterface atm;
    atm.Menu();
    return 0;
}




