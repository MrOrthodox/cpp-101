#include <iostream>
#include <limits>

int main() {
    std::cout << "Simple Calculator (C++)\n";
    std::cout << "Enter expressions in the form: <number> <operator> <number>\n";
    std::cout << "Supported operators: +  -  *  /\n";
    std::cout << "Type 'q' (without quotes) at any prompt to quit.\n\n";

    while (true) {
        double lhs = 0.0, rhs = 0.0;
        char op = 0;

        std::cout << "First number: ";
        if (!(std::cin >> lhs)) {
            // Check if the user wants to quit
            if (std::cin.eof() || std::cin.fail())
                break;
            std::cin.clear();
            std::string input;
            std::cin >> input;
            if (input == "q" || input == "Q")
                break;
            std::cerr << "Invalid input. Try again.\n";
            continue;
        }

        std::cout << "Operator (+ - * /): ";
        std::cin >> op;
        if (op == 'q' || op == 'Q')
            break;
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            std::cerr << "Invalid operator. Try again.\n";
            // flush rest of line
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cout << "Second number: ";
        if (!(std::cin >> rhs)) {
            if (std::cin.eof() || std::cin.fail())
                break;
            std::cin.clear();
            std::string input;
            std::cin >> input;
            if (input == "q" || input == "Q")
                break;
            std::cerr << "Invalid input. Try again.\n";
            continue;
        }

        double result = 0.0;
        bool valid = true;
        switch (op) {
            case '+':
                result = lhs + rhs;
                break;
            case '-':
                result = lhs - rhs;
                break;
            case '*':
                result = lhs * rhs;
                break;
            case '/':
                if (rhs == 0) {
                    std::cerr << "Error: Division by zero.\n";
                    valid = false;
                } else {
                    result = lhs / rhs;
                }
                break;
            default:
                std::cerr << "Unknown operator.\n";
                valid = false;
        }

        if (valid) {
            std::cout << "Result: " << result << "\n\n";
        }
    }

    std::cout << "Calculator terminated. Goodbye!\n";
    return 0;
}