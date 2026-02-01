#include <iostream>            // {10}  cin, get, getline, ws, endl, good, fail, clear, ignore, cout
using std::cin, std::cout;

// #define test_1
// #define test_2


int main(){
    #ifdef test_1
        cout << "Enter a number: ";
        int num {};
        cin >> num;

        cout << "-> You entered: " << num << "\n";

        // cout is a object; therefore has its builtin attributes & errorFlags
        if (cin.good()){
            cout << "-> You entered a valid number :D\n";
        }
        else{
            cout << "-> You didn't listen to my request :(\n";
            cin.clear();                                        // resets error flag(s)
        }
    #endif


    #ifdef test_2
        cout << "[Month Wala]\n";
        int month {};

        while (1){
            cout << "Enter a month (1 - 12): ";
            cin >> month;

            if (cin.fail() || month < 1 || month > 12){                         // or just: if (cin || ...); or just: if (cin >> month || ...);
                cout << "[!] Please enter a valid month.\n";
                cin.clear();                                                    // resetting flags

                // char ch;
                // while (cin.get(ch) && ch != '\n'){}

                cin.ignore(1000, '\n');
            }
            else{
                cout << "[*] Yay! You actually listened to my request :D\n\n";
                break;
            }
        }

        cout << "You entered: " << month;
    #endif
}