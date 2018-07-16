#include <iostream>
#include <string>

using namespace std;

bool login (int logged)
{
    string username;
    string password;
    cout <<"Please login" << endl << "Username: ";
    cin >> username;
    cout <<"Password: ";
    cin >> password;
    if (username == "root" && password == "root")
    {
        logged == true;
        cout <<"Access Granted..." << "\n";
        return true;
    }
    else
    {
        cout <<"Incorrect username or password" << "\n";
        return false;
    }
}

int addition (int fir_num, int sec_num)
{
    cout << fir_num << " + " << sec_num << " = " << fir_num + sec_num << "\n";
}

int subtraction (int fir_num, int sec_num)
{
    cout << fir_num << " - " << sec_num << " = " << fir_num - sec_num << "\n";
}

int muliplication (int fir_num, int sec_num)
{
    cout << fir_num << " * " << sec_num << " = " << fir_num * sec_num << "\n";
}

int division (int fir_num, int sec_num)
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

int main ()
{
    int operation;
    int fir_num;
    int sec_num;
    bool logged;
    logged = login(logged);
    if (logged == true)
    {
        cout <<"Please choose a number: " << "\n";
        cin >> fir_num;
        cout <<"Please choose another number: " << "\n";
        cin >> sec_num;
        cout <<"What operation would you like to do?" << "\n";
        cout << "1. addition(+)\n";
        cout << "2. subtraction(-)\n";
        cout << "3. muliplication(*)\n";
        cout << "4. division(/)\n";
        cout << "Selection: ";
        cin >> operation;
        switch (operation)
        {
            case 1:
                addition(fir_num, sec_num);
                return 0;
                
            case 2:
                subtraction(fir_num, sec_num);
                return 0;
                
            case 3:
                muliplication(fir_num, sec_num);
                return 0;
                
            case 4:
                division(fir_num, sec_num);
                return 0;
        }
    }
}
