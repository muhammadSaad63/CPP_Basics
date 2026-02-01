#include <chrono>           // {}
#include <thread>           // {2}  sleep_for, sleep_until
#include <iomanip>          // {7}  left, right, setw, setprecision, setfill, boolalpha, noboolalpha
#include <iostream>         // {10} cin, get, getline, ws, good, fail, clear, ignore, cout, endl
using std::cin, std::cout;

#define _sleep_for_
// #define _sleep_until_


int main(){
    /*
        In the <thread> library, pausing execution is handled by the std::this_thread namespace. 
        Instead of a global "sleep" function, C++ provides two specific ways to pause the current thread: 
            <1> one based on duration of time
            <2> one based on a specific point in time.
    */

    // Method 1: using this_thread::sleep_for
    #ifdef _sleep_for_
        int x {20};

        while (x--){
            cout << "\rLoading: " << std::setw(2) << x; 
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        cout << "\rFinished! :D";
    #endif

    // Method 2: using this_thread::sleep_until
    #ifdef _sleep_until_
        cout << "Imma sleep for now ;o" << '\n';

        auto wakeUpTime = (std::chrono::system_clock::now() + std::chrono::seconds(30));
        std::this_thread::sleep_until(wakeUpTime);

        cout << "=> Yay, I slept for 30 seconds :D" << '\n';
    #endif
}