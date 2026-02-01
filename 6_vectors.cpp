#include <vector>            // {15}  at, size, capacity, reserve, shrink_to_fit, begin, end, push_back, insert, pop_back, erase, front, back, clear, empty
#include <iostream>          // {10}  cin, get, getline, ws, good, fail, clear, ignore, cout, endl  
using std::cin, std::cout;

// #define _1d
#define _2d

#ifdef _1d
    void stats(std::vector<int>& v){
        cout << "Size: " << v.size() << " | Capacity: " << v.capacity() << '\n';
    }
    void print(std::vector<int>& v){
        for (auto u : v){                                  // or: for (auto i = 0; i < v.size(); ++i)...
            cout <<  u << " ";
        }
        for (auto i = v.size(); i < v.capacity(); ++i){
            cout << '_' << " ";
        }
        cout << "\n\n";
    }
#elifdef _2d
    void stats(std::vector<std::vector<int>>& v){
        cout << "Size: " << v.size() << " | Capacity: " << v.capacity() << '\n';
        for (auto i : v){
            cout << i.size() << ", " << i.capacity() << '\n'; 
        }
    }
    void print(std::vector<std::vector<int>>& v){
        int _ {0};
        for (auto i : v){
            _++;
            cout << _ << ":  ";
            for (auto j : i){
                cout << j << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }
#endif


int main()
{
    #ifdef _1d
        std::vector<int> u;                         // size 0, cap 0
        stats(u);
        print(u);

        std::vector<int> v (13);                    // size 23, cap 23, default initializes to 0
        stats(v);
        print(v);

        std::vector<int> w (13, 1);                 // size 23, cap 23, initializes to 1s
        stats(w);
        print(w);

        std::vector<int> x {15, 23, 25, 40, 63};    // size 5, cap 5
        stats(x);
        print(x);


        std::vector<int> y = {1, 2, 3};             // size 3, cap 3
        stats(y);
        print(y);

        y = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};                                 // size 2, cap 3
        stats(y);
        print(y);

        y = {14, 15};                               // size 2, cap 3
        stats(y);
        print(y);


        std::vector<int> z;
        z.reserve(23);
        stats(z);
        print(z);

        z.reserve(35);
        stats(z);
        print(z);

        z.push_back(1);
        z.push_back(1);
        z.push_back(2);
        z.push_back(3);
        z.push_back(5);
        z.push_back(8);
        z.push_back(13);
        z.push_back(21);
        stats(z);
        print(z);

        z.shrink_to_fit();
        stats(z);
        print(z);

        z.insert(z.begin(), 0);
        z.insert(z.begin() + 4, 2);
        z.insert(z.end() - 1, 21);
        z.insert(z.end(), 34);
        stats(z);
        print(z);

        z.pop_back();
        stats(z);
        print(z);

        z.pop_back();
        z.erase(z.begin() + 3, z.begin() + 4);
        stats(z);
        print(z);

        cout << "-> 1st element:  " << z.front() << '\n';
        cout << "-> 2nd element:  " << z[1]      << '\n';
        cout << "-> 5th element:  " << z.at(4)   << '\n';
        cout << "-> last element: " << z.back()  << "\n\n";

        z.clear();
        stats(z);
        print(z);
        cout << "\033[1A-> z is: " << ((z.empty())? "Empty" : "Not Empty");
    #endif

    
    #ifdef _2d
        std::vector<std::vector<int>> v;    // 2d int vector
        v = {   {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}   };
        stats(v);
        print(v);

        // calender, 12 x 31 matrix
        std::vector<std::vector<int>> w (12, std::vector<int> (31));
        stats(w);
        print(w);

        for (auto& month : w){                      // must use & here
            for (auto day = 0; day < 31; ++day){
                month.at(day) = (day + 1);
            }
        }
        stats(w);
        print(w);
    #endif
}