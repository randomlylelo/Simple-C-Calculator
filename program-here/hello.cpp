#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout <<"\nMathator 9000 v1\n";
    int fir_num;
    int sec_num;
    string operation;
    string correct;
    string correction;
    string username;
    string password;
    cout <<"Please login" << "\n" << "Username: ";
    cin >> username;
    cout <<"Password: ";
    cin >> password;
    if (username == "root" && password == "root")
    {
        cout <<"Access Granted..." <<"\n";
        cout <<"Please choose what operation you would like to do\nNOTE PLEASE TYPE the word not the symbol\naddition(+)\nsubtraction(-)\nmuliplication(*)\ndivision(/)\n";
        cin >> operation;
        cout <<"Please choose a number: " << "\n";
        cin >> fir_num;
        cout <<"Please choose another number: " << "\n";
        cin >> sec_num;
        cout <<"Your first number is: " << fir_num << "\n" <<"Your second number is: " << sec_num << "\n" <<"Your choice of operation is: " << operation << "\n";
        cout <<"Is this correct? (answer with 'yes' or 'no')" << "\n";
        cin >> correct;
        cout <<"\n";
        if (correct == "yes")
        {
            if (operation == "addition")
            {
                cout << fir_num << " + " << sec_num << " = " << fir_num + sec_num << "\n";
            }
            if (operation == "subtraction")
            {
                cout << fir_num << " - " << sec_num << " = " << fir_num - sec_num << "\n";
            }
            if (operation == "muliplication")
            {
                cout << fir_num << " * " << sec_num << " = " << fir_num * sec_num << "\n";
            }
            if (operation == "division")
            {
                if (sec_num != 0)
                {
                    cout << fir_num << " / " << sec_num << " = " << fir_num / sec_num << "\n";
                }
                else
                {
                    cout <<"Please restart the program and not put '0' as the second number! Thanks." << "\n";
                }
            }
            cout <<"\n";
            return 0;
        }
        if (correct == "no")
        {
            cout <<"Would you like to contiune and retype everything? (answer with 'yes' or 'no')" <<"\n";
            cin >> correction;
            if (correction == "no")
            {
                return 0;
            }
            cout <<"Restarting the program..." << "\n";
        }
            
    }
        else
    {
        cout <<"Incorrect username or password" << "\n";
    }
}

// compile using "g++ hello.cpp -o hello"
// the -o function is a way to name the file 

// to run do "./hello"
