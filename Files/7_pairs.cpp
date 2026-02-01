#include <string>            // {15} string, at, size, capacity, shrink_to_fit, append, insert, erase, replace, substr, find, stoi, stoll, stod, to_string
#include <vector>
#include <utility>
#include <iostream>             // {8} cin, cout, getline, ws, endl, good, bad, clear
using std::cin, std::cout;

#define learn
// #define burn    // :>


int main(){
    #ifdef learn
        std::pair<int, int> p;                        // effectively a tuple of 2 ints
        p = {23, 40};

        cout << p.first << " " << p.second << "\n";
        p = {p.second, p.first};                      // swaps members
        cout << p.first << " " << p.second;
    #endif

    #ifdef burn
        std::pair<unsigned short, std::pair<std::vector<signed long>, std::pair<float, std::string>>> p {23, {{-1, 5, !true, 999999, false}, {112358.0, "-_|_-"}}};

        p.first = 123;
        p.second.first.push_back(63 + 2);
        p.second.second.first = 3.142f;
        p.second.second.second = "__inf__";

        // predict output
        cout << (true + ((p.first > '@')? false : 1) + !p.second.first[p.second.first.size() - 2]) << (char)(p.second.first.back() + 9) << std::endl;
    #endif
}