#include <vector>               // {15} at, size, capacity, reserve, shrink_to_fit, begin, end, push_back, insert, pop_back, erase, clear, empty, front, back
#include <iomanip>              // {7} left, right, setw, setprecision, setfill, boolalpha, noboolalpha 
#include <numeric>              // {1} accumulate
#include <iostream>             // {9} cin, cout, getline, ws, endl, good, bad, clear
#include <algorithm>            // {7} find, binary_search, sort, stable_sort, is_sorted, count, reverse
using std::cin, std::cout;


int main(){
    // declaring & reserving
    std::vector<int> v (9);

    // assigning
    for (auto i = 0; i < v.capacity(); ++i){
        v[i] = (i * i);
    }

    // searching
    int toSearch {6};
    cout << std::boolalpha << std::binary_search(v.begin(), v.end(), toSearch) << '\n';

    // push push
    v.push_back(5);
    v.push_back(99);
    v.push_back(43);
    v.push_back(2);

    // summation
    int startSum {0};
    auto sum = std::accumulate(v.begin(), v.end(), startSum);          // in <numeric>
    cout << "Sum: " << sum << "\n";

    // counting
    int toCount {5};
    auto c = std::count(v.begin(), v.end(), toCount);

    // finding
    int toFind {6};
    auto it = std::find(v.begin(), v.end(), toFind);                  // returns iterator
    cout << ((it == v.end())? -1 : (it - v.begin())) << "\n";

    // sorting (unstable)                                             // -> changes relative order of equal elements
    std::sort(v.begin(), v.end());                                    // ascending/normal sort

    // sorting (stable)
    std::stable_sort(v.begin(), v.end(), std::greater<int>());        // descending sort

    // reversing vector
    std::reverse(v.begin(), v.end());                                 // reverses order

    // printing
    cout << std::right;
    for (auto i : v){
        cout << std::setfill('0') << std::setw(2) << i << " ";
    }
}