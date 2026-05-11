<<<<<<< HEAD
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice,accno,saccno;
    string name,sname;
    float balance = 0,amount,sbal;

    do {
        cout<<"\n***** BANK MANAGEMENT SYSTEM *****\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Check Balance\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {

            case 1: {
                cout<<"Enter Account Number: ";
                cin>>accno;
                cin.ignore();

                cout<<"Enter Name: ";
                getline(cin,name);

                cout<<"Enter Initial Deposit Amount: ";
                cin>>balance;

                ofstream file("accounts.txt");
                file<<accno<<endl;
                file<<name<<endl;
                file<<balance<<endl;
                file.close();

                cout<<"Account Created Successfully\n";
                break;
            }

            case 2: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"Enter Deposit Amount: ";
                cin>>amount;

                sbal += amount;

                ofstream file2("accounts.txt");
                file2<<saccno<<endl;
                file2<<sname<<endl;
                file2<<sbal<<endl;
                file2.close();

                cout<<"Deposit Successful\n";
                break;
            }

            case 3: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"Enter Withdrawal Amount: ";
                cin>>amount;

                if(sbal >= amount) {
                    sbal -= amount;
                    cout<<"Withdrawal Successful\n";
                } else {
                    cout<<"Insufficient Balance\n";
                }

                ofstream file2("accounts.txt");
                file2<<saccno<<endl;
                file2<<sname<<endl;
                file2<<sbal<<endl;
                file2.close();
                break;
            }

            case 4: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"\nAccount Number: "<<saccno;
                cout<<"\nName: "<<sname;
                cout<<"\nBalance: "<<sbal<<endl;
                break;
            }

            case 5:
                cout<<"Thank you\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    } while(choice!=5);

    return 0;
}
=======
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int choice,accno,saccno;
    string name,sname;
    float balance = 0,amount,sbal;

    do {
        cout<<"\n***** BANK MANAGEMENT SYSTEM *****\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Check Balance\n";
        cout<<"5. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice) {

            case 1: {
                cout<<"Enter Account Number: ";
                cin>>accno;
                cin.ignore();

                cout<<"Enter Name: ";
                getline(cin,name);

                cout<<"Enter Initial Deposit Amount: ";
                cin>>balance;

                ofstream file("accounts.txt");
                file<<accno<<endl;
                file<<name<<endl;
                file<<balance<<endl;
                file.close();

                cout<<"Account Created Successfully\n";
                break;
            }

            case 2: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"Enter Deposit Amount: ";
                cin>>amount;

                sbal += amount;

                ofstream file2("accounts.txt");
                file2<<saccno<<endl;
                file2<<sname<<endl;
                file2<<sbal<<endl;
                file2.close();

                cout<<"Deposit Successful\n";
                break;
            }

            case 3: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"Enter Withdrawal Amount: ";
                cin>>amount;

                if(sbal >= amount) {
                    sbal -= amount;
                    cout<<"Withdrawal Successful\n";
                } else {
                    cout<<"Insufficient Balance\n";
                }

                ofstream file2("accounts.txt");
                file2<<saccno<<endl;
                file2<<sname<<endl;
                file2<<sbal<<endl;
                file2.close();
                break;
            }

            case 4: {
                ifstream file("accounts.txt");
                file>>saccno;
                file.ignore();
                getline(file,sname);
                file>>sbal;
                file.close();

                cout<<"\nAccount Number: "<<saccno;
                cout<<"\nName: "<<sname;
                cout<<"\nBalance: "<<sbal<<endl;
                break;
            }

            case 5:
                cout<<"Thank you\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }

    } while(choice!=5);

    return 0;
}
>>>>>>> f4af662698b266fbfce786fb75114a9d1e6b1925
