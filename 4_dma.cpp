#include <iostream>          // {8} cin, cout, getline, ws, endl, good, bad, clear
using std::cin, std::cout;

#define ptrToInt
// #define ptrToArr
// #define realloc


int main()
{
    #ifdef ptrToInt
        int* num = new int;

        *num = 23;
        cout << num << " | " << *num << "\n";

        delete num;
        cout << num << " | " << *num << "\n";       // value deleted, address same

        num = nullptr;                              // gud prac
        cout << num << " | " << *num << "\n\n";     // will end prematurely (ie *num will cause errors)
    #endif


    #ifdef ptrToArr
        int size {5};
        int* arr = new int[size];

        for (auto i = 0; i < size; ++i){
            arr[i] = (i * i);
        }

        for (auto i = 0; i < size; ++i){
            cout << arr[i] << ' ';
        }

        delete[] arr;
        arr = nullptr;      // to prevent dangling ptrs
    #endif


    #ifdef realloc
        // theres no realloc in cpp
        // so if u have to reallocate,
        // u woudlve have to manually do it
        // or use VECTORS :D

        int size {3};
        float* arr = new float[size];

        for (auto i = 0; i < size; ++i){
            *(arr + i) = i;
        }

        int newSize = {5};
        float* newArr = new float[newSize];

        for (auto i = 0; i < ((newSize > size)? size : newSize); ++i){
            newArr[i] = arr[i];
        }

        newArr = arr;
        delete[] arr;
        arr = nullptr;
    #endif
}