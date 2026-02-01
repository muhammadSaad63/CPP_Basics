#include <iomanip>           // {7} left, right, setw, setprecision, setfill, boolalpha, noboolalpha 
#include <iostream>          // {9} cin, get, cout, getline, ws, endl, good, bad, clear
using std::cin, std::cout;

// #define iomanip
#define ansi            // my treat :>


int main()
{
    std::ios_base::sync_with_stdio(false);

    #ifdef iomanip
        // precision
        cout                          << 10/3.0 << '\n';
        cout << std::setprecision(13) << 10/3.0 << "\n\n";

        // boolalpha
        cout                   << true    << '\n';
        cout << std::boolalpha << (4 > 3) << '\n';
        cout << std::boolalpha << false   << "\n\n";

        // alignment, width, fill
            // cout is left-aligned by default;
            // but, upon using setw, it defaults to right-alignment
        cout               << std::setw(5) << std::setfill('0') << 3 << '\n';
        cout << std::right << std::setw(5) << std::setfill('0') << 3 << '\n';
        cout << std::left  << std::setw(5) << std::setfill('0') << 3 << '\n';
    #endif


    #ifdef ansi                             
        /*
            ansi escape sequences
            => special characters which command the terminal to perform specific actions

            escape sequence:       \033
            start of sequence:     [
            end of sequence:       m
            resetting formatting:  \033[1m
        */
    
        char RESET[] = "\033[0m";
        // std::string RESET = "\033[0m";
        //const char* RESET= "\033[0m";

        cout << "[Basics]"                                     << '\n';
        cout << "1: " << "\033[1m" << "Bold"          << RESET << '\n';
        cout << "2: " << "\033[2m" << "Dim"           << RESET << '\n';
        cout << "3: " << "\033[3m" << "Italic"        << RESET << '\n';
        cout << "4: " << "\033[4m" << "Underline"     << RESET << '\n';
        cout << "9: " << "\033[9m" << "Strikethrough" << RESET << '\n';

        cout << '\n';

        cout << "[Text Colors]"                             << '\n';
        cout << "30: " << "\033[30m" << "Grey"    << RESET << '\n';
        cout << "31: " << "\033[31m" << "Red"     << RESET << '\n';
        cout << "32: " << "\033[32m" << "Green"   << RESET << '\n';
        cout << "33: " << "\033[33m" << "Yellow"  << RESET << '\n';
        cout << "34: " << "\033[34m" << "Blue"    << RESET << '\n';
        cout << "35: " << "\033[35m" << "Magenta" << RESET << '\n';
        cout << "36: " << "\033[36m" << "Cyan"    << RESET << '\n';
        cout << "37: " << "\033[37m" << "White"   << RESET << '\n';

        cout << '\n';

        cout << "[BackGround Colors]"                       << '\n';
        cout << "40: " << "\033[40m" << "Grey"    << RESET << '\n';
        cout << "41: " << "\033[41m" << "Red"     << RESET << '\n';
        cout << "42: " << "\033[42m" << "Green"   << RESET << '\n';
        cout << "43: " << "\033[43m" << "Yellow"  << RESET << '\n';
        cout << "44: " << "\033[44m" << "Blue"    << RESET << '\n';
        cout << "45: " << "\033[45m" << "Magenta" << RESET << '\n';
        cout << "46: " << "\033[46m" << "Cyan"    << RESET << '\n';
        cout << "47: " << "\033[47m" << "White"   << RESET << '\n';

        cout << '\n';

        cout << "[Chaining Sequences]"                                               << '\n';
        cout << "=> \033[1;3;4;33;40m" << "You can also chain em using ';'" << RESET << '\n';

        cout << "\n\n";

        cout << "[Special Commands]\n";                                  // no need for RESET or m here
        cout << std::left;
        cout << "    " << std::setw(27) << "Clearing screen: "           << "\\033[2J"  << '\n';
        cout << "    " << std::setw(27) << "Move cursor home: "          << "\\033[H"   << '\n';
        cout << "    " << std::setw(27) << "Hide Cursor: "               << "\\033[?25l"<< '\n';
        cout << "    " << std::setw(27) << "Show Cursor: "               << "\\033[?25h"<< '\n';
        cout << "    " << std::setw(27) << "Move Up n lines: "           << "\\033[nA"  << '\n';
        cout << "    " << std::setw(27) << "Move Down n lines: "         << "\\033[nB"  << '\n';
        cout << "    " << std::setw(27) << "Move Right n lines: "        << "\\033[nC"  << '\n';
        cout << "    " << std::setw(27) << "Move Left n lines: "         << "\\033[nD"  << '\n';
        cout << "    " << std::setw(27) << "Clear line: "                << "\\033[K"   << '\n';
        cout << "    " << std::setw(27) << "Clear from cursor > end: "   << "\\033[0K"  << '\n';
        cout << "    " << std::setw(27) << "Clear from start > cursor: " << "\\033[1K"  << '\n';
        cout << "    " << std::setw(27) << "Clear entire line: "         << "\\033[2K"  << '\n';
    #endif
}