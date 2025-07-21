#include <iostream>

int main() {
    int level;
    std::cout << "Your level is: ";
    std::cin  >> level;

    if (level <= 5) {
        std::cout << "🥉 You have been awarded Bronze\n";
    }
    else if (level <= 10) {
        // we only get here if level > 5, so this covers 6–10
        std::cout << "🥈 You have been awarded Silver\n";
    }
    else if (level <= 15) {
        // here level is >10, so this is 11–15
        std::cout << "🥇 You have been awarded Gold\n";
    }
    else if (level <= 20) {
        // here level is >15, so this is 16–20
        std::cout << "🏅 You have been awarded Platinum\n";
    }
    else if (level <= 25) {
        // here level is >20, so this is 21–25
        std::cout << "💎 You have been awarded Diamond\n";
    }
    else {
        std::cout << "Invalid level. Please enter a value between 1 and 25.\n";
    }

    return 0;
}
