#include <iostream>          // {10} cin, get, cout, getline, ws, endl, good, fail, clear, ignore
using std::cin, std::cout;

// uncomment whichever code block u wanna run
// #define ptr_1
// #define ptr_2
// #define ref_1
// #define ref_2
// #define ref_3
#define ref_4

#ifdef ref_2
    int& max(int& a, int& b){
        return (a > b) ? a : b;
    }
#endif
#ifdef ref_3
    void increment(int& x){
        x++;
    }
#endif


int main(){
    /*
        [Pointers]
            => a variable that stores an address
            - can be null
            - can be reseated/reassigned
            - needs * to access
            - has its own address in memory
            - both in c & cpp
        [References]
            => an alias for an existing object
            => another name/identifier for an already existing object
            - can't be null
            - can't be reseated
            - doesn't need * to access
            - doesn't have its own, seperate address
            - only in cpp
    */

    #ifdef ptr_1
        int x = 23;
        int* ptr = &x;
        cout << &x << " | " << ptr << '\n';

        x = 63;
        cout << *ptr << '\n';

        *ptr = 40;
        cout << x << '\n';

        ptr = nullptr;
    #endif


    #ifdef ptr_2
        int x = 23;
        int* ptr = &x;
        int** ptr2 = &ptr;

        cout << x << " | " << ptr  << " | " << ptr2   << '\n';
        cout << x << " | " << *ptr << " | " << **ptr2 << '\n';
    #endif


    #ifdef ref_1
        int x = 5;
        int& r = x;     // r is another name for x; they share the same memory

        cout << "x: " << x << " | r: " << r << '\n';
        cout << "&x: " << &x << " | &r: " << &r << "\n\n";

        r = 7;
        cout << "x: " << x << " | r: " << r << "\n\n";

        x = 9;
        cout << "x: " << x << " | r: " << r << "\n\n";
    #endif


    #ifdef ref_2
            int x = 10, y = 20;
            max(x, y) = 100;

            std::cout << x << " " << y;  // 10 100
    #endif


    #ifdef ref_3
        int a {5};
        increment(a);

        std::cout << a;                  // 6
    #endif


    #ifdef ref_4
        int v[] = {1, 2, 3};

        for (int& i : v) {
            i *= 2;
        }
        for (int i : v) {
            cout << i << " ";
        }
    #endif
}