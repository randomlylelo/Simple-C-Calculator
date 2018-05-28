#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout <<"Mathator 9000 v1\n";
    int fir_num;
    int sec_num;
    string operation;
    string correct;
    string correction;
    while(1==1){
        cout <<"Please choose what operation you would like to do\nNOTE PLEASE TYPE the word not the symbol\naddition(+)\nsubtraction(-)\nmuliplication(*)\ndivision(/)\n";
        cin >> operation;
        cout <<"Please choose a number: " << "\n";
        cin >> fir_num;
        cout <<"Please choose another number: " << "\n";
        cin >> sec_num;
        cout <<"Your first number is: " << fir_num << "\n" <<"Your second number is: " << sec_num << "\n" <<"Your choice of operation is: " << operation << "\n";
        cout <<"Is this correct? (answer with 'yes' or 'no')" << "\n";
        cin >> correct;
        if (correct == "yes")
        {
            if (operation == "addition")
            {
                cout << fir_num << "+" << sec_num << "=" << fir_num + sec_num << "\n";
            }
            if (operation == "subtraction")
            {
                cout << fir_num << "-" << sec_num << "=" << fir_num - sec_num << "\n";
            }
            if (operation == "muliplication")
            {
                cout << fir_num << "*" << sec_num << "=" << fir_num * sec_num << "\n";
            }
            if (operation == "division")
            {
                cout << fir_num << "/" << sec_num << "=" << fir_num / sec_num << "\n";
            }
            break;
        }
        if (correct == "no")
        {
            cout <<"Would you like to contiune and retype everything? (answer with 'yes' or 'no')" <<"\n";
            cin >> correction;
            if (correction == "no")
            {
                break;
            }
        }

    }

}

// compile using "g++ hello.cpp -o hello"
// the -o function is a way to name the file 

// to run do "./hello"
