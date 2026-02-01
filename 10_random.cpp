#include <random>             // {4}  random_device, mt19937, uniform_int_distribution, uniform_real_distribution; for random nums instead of rand();
#include <iostream>           // {10} cin, get, getline, ws, good, fail, clear, ignore, cout, endl
using std::cin, std::cout;

// #define test1_int
// #define test2_real
#define test3_func

#ifdef test3_func
    int randNum(const int& min, const int& max){                        // read only parameter references
        static std::random_device seed;                                 // using static so theyre initialized only once per program-lifetime
        static std::mt19937 engine(seed());
        std::uniform_int_distribution<int> distribution(min, max);

        return distribution(engine);
    }
#endif


int main(){
    #ifdef test1_int
        // 1. generate seed once
        std::random_device seed;                                    // A seed source that uses hardware entropy (true randomness) to initialize the engine; engine should be seeded only once; use static if used inside a function;

        // 2. define/use the engine
        std::mt19937 engine(seed());                                // The Mersenne Twister engine. It’s fast, has a huge period, and is the industry standard for general-purpose use.

        // 3. define the distribution range of the generated nums
        std::uniform_int_distribution<int> distribution(1, 100);    // Maps the engine's output to your desired range (e.g., 1 to 100).

        int x {23};
        while (x--){
            std::cout << distribution(engine) << " ";
        }
    #endif


    #ifdef test2_real
        // 1. generate seed once
        std::random_device seed;                                    // A seed source that uses hardware entropy (true randomness) to initialize the engine; engine should be seeded only once; use static if used inside a function;

        // 2. define/use the engine
        std::mt19937 engine(seed());                                // The Mersenne Twister engine. It’s fast, has a huge period, and is the industry standard for general-purpose use.

        // 3. define the distribution range of the generated nums
        std::uniform_real_distribution<double> distribution(1, 100);    // Maps the engine's output to your desired range (e.g., 1 to 100).

        int x {23};
        while (x--){
            std::cout << distribution(engine) << " ";
        }
    #endif


    #ifdef test3_func
        int x {23};
        while (x--){
            std::cout << randNum(1, 100) << " ";
        }
    #endif
}