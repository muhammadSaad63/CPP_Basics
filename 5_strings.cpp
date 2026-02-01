#include <string>              // {15} string, at, size, capacity, shrink_to_fit, append, insert, erase, replace, substr, find, stoi, stoll, stod, to_string
#include <iomanip>             // {7}  left, right, setw, setprecision, setfill, boolalpha, noboolalpha
#include <iostream>            // {10} cin, get, getline, ws, good, fail, clear, ignore, cout, endl
using std::cin, std::cout;

// uncomment whichever test u wanna perf
// #define test1_basics
// #define test2_getline
// #define test3_methods1
// #define test4_methods2
// #define test5_methods3
// #define test6_misc
#define test7_conversions


int main()
{
    #ifdef test1_basics 
        std::string str3{"meow"};
        cout << str3;
    #endif

    #ifdef test2_getline
        std::string str{};

        int some;
        std::cin >> some;
        cout << "Enter a string: ";
        std::getline(std::cin, str);
    #endif

    #ifdef test_3_methods1
        std::string str{};
        str = "muhammad Saad 63";

        std::cout << "-> Capacity: " << str.capacity() << "\n-> Length: " << str.size();

        str.shrink_to_fit();
        std::cout << "\n\n-> Capacity: " << str.capacity() << "\n-> Length: " << str.size();

        str = "saad";
        std::cout << "\n\n-> Capacity: " << str.capacity() << "\n-> Length: " << str.size();

        cout << "\n\n\n";
        cout << str;
        cout << std::boolalpha;
        cout << '\n' << str.empty();

        str.clear();
        cout << str.empty();
    #endif

    #ifdef test4_methods2
        std::string = {"muhammadSaad63"};
        // cout << str;

        // cout << str.append("! :D");               or += "! :D";
        // cout << str.insert(8, ":) ");
        // cout << (str += " :)");
        // cout << str.replace(0, 8, "I am m").append(". :)");
        // cout << str.erase(0, 2);
        //// can use arithmetic & logic operators like +=, ==, >, <, !=
        cout << str.substr(0, 4);
    #endif

    #ifdef test5_methods3
        std::string str;
        str = "muhammad Saad 63.";

        std::string x = "hammad s";
        cout << ((str.find(x) != std::string::npos) ? str.find(x) : false);
    #endif

    #ifdef test6_misc
        str::string str{};
        cout << "Enter a string: ";
        std::getline(std::cin >> std::ws, str);

        cout << "\n[Initially]";
        cout << std::left;                          // input manipulator; effectively redundant as left-aligned by default
        cout << std::setw(15) << "\n   String: " << str;
        cout << std::setw(15) << "\n   Size: " << str.size();
        cout << std::setw(15) << "\n   Capacity: " << str.capacity();
        cout << std::setw(15) << "\n   IsEmpty?: " << std::boolalpha << str.empty();

        cout << "\n\n";
        for (int i : str){
            cout << (char)(short)i << " ";
        }

        std::string str2{};
        for (char i : str){
            if (i != ' '){
                str2 += i;
            }
        }

        // removing whitespace
        for (int i = 0; i < str.size(); i++){
            if (str[i] == ' ')
            { // or str.at(i)
                str.erase(i, 1);
            }
        }

        cout << "\n\n[Finally]";
        cout << std::setw(15) << "\n   String: " << str;
        cout << std::setw(15) << "\n   Size: " << str.size();
        cout << std::setw(15) << "\n   Capacity: " << str.capacity();
        cout << std::setw(15) << "\n   IsEmpty?: " << std::boolalpha << str.empty();
    #endif

    #ifdef test7_conversions
        // from string
        int       num          {std::stoi("23")        };
        float     pi           {std::stof("3.142")     };
        double    third        {std::stod("0.3333333") };
        long long speedOfLight {std::stoll("300000000")};

        // to string
        std::string max9      {std::to_string(9.999999)};
        std::string fibonacci {std::to_string(11235813)};

        cout << num          << '\n';
        cout << pi           << '\n';
        cout << third        << '\n';
        cout << speedOfLight << '\n';
        cout << fibonacci    << '\n';
        cout << max9         << '\n';
    #endif
}