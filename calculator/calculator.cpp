#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

class Calculator {
private:
    double result;
    
public:
    Calculator() : result(0) {}
    
    // Basic arithmetic operations
    double add(double a, double b) {
        return a + b;
    }
    
    double subtract(double a, double b) {
        return a - b;
    }
    
    double multiply(double a, double b) {
        return a * b;
    }
    
    double divide(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Error: Division by zero!");
        }
        return a / b;
    }
    
    // Advanced operations
    double power(double base, double exponent) {
        return std::pow(base, exponent);
    }
    
    double squareRoot(double number) {
        if (number < 0) {
            throw std::runtime_error("Error: Cannot calculate square root of negative number!");
        }
        return std::sqrt(number);
    }
    
    double factorial(int n) {
        if (n < 0) {
            throw std::runtime_error("Error: Cannot calculate factorial of negative number!");
        }
        if (n == 0 || n == 1) {
            return 1;
        }
        double result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
    
    // Trigonometric functions (angles in degrees)
    double sine(double angle) {
        return std::sin(angle * M_PI / 180.0);
    }
    
    double cosine(double angle) {
        return std::cos(angle * M_PI / 180.0);
    }
    
    double tangent(double angle) {
        return std::tan(angle * M_PI / 180.0);
    }
};

void displayMenu() {
    std::cout << "\n========== C++ Calculator ==========" << std::endl;
    std::cout << "1.  Addition (+)" << std::endl;
    std::cout << "2.  Subtraction (-)" << std::endl;
    std::cout << "3.  Multiplication (*)" << std::endl;
    std::cout << "4.  Division (/)" << std::endl;
    std::cout << "5.  Power (^)" << std::endl;
    std::cout << "6.  Square Root (√)" << std::endl;
    std::cout << "7.  Factorial (!)" << std::endl;
    std::cout << "8.  Sine (sin)" << std::endl;
    std::cout << "9.  Cosine (cos)" << std::endl;
    std::cout << "10. Tangent (tan)" << std::endl;
    std::cout << "0.  Exit" << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "Enter your choice (0-10): ";
}

double getNumber(const std::string& prompt) {
    double number;
    std::cout << prompt;
    while (!(std::cin >> number)) {
        std::cout << "Invalid input! Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return number;
}

int getInteger(const std::string& prompt) {
    int number;
    std::cout << prompt;
    while (!(std::cin >> number)) {
        std::cout << "Invalid input! Please enter a valid integer: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    return number;
}

void performCalculation(Calculator& calc, int choice) {
    double num1, num2, result;
    int intNum;
    
    try {
        switch (choice) {
            case 1: // Addition
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                result = calc.add(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " + " << num2 << " = " << result << std::endl;
                break;
                
            case 2: // Subtraction
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                result = calc.subtract(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " - " << num2 << " = " << result << std::endl;
                break;
                
            case 3: // Multiplication
                num1 = getNumber("Enter first number: ");
                num2 = getNumber("Enter second number: ");
                result = calc.multiply(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " * " << num2 << " = " << result << std::endl;
                break;
                
            case 4: // Division
                num1 = getNumber("Enter dividend: ");
                num2 = getNumber("Enter divisor: ");
                result = calc.divide(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " / " << num2 << " = " << result << std::endl;
                break;
                
            case 5: // Power
                num1 = getNumber("Enter base: ");
                num2 = getNumber("Enter exponent: ");
                result = calc.power(num1, num2);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << num1 << " ^ " << num2 << " = " << result << std::endl;
                break;
                
            case 6: // Square Root
                num1 = getNumber("Enter number: ");
                result = calc.squareRoot(num1);
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "√" << num1 << " = " << result << std::endl;
                break;
                
            case 7: // Factorial
                intNum = getInteger("Enter a non-negative integer: ");
                result = calc.factorial(intNum);
                std::cout << std::fixed << std::setprecision(0);
                std::cout << intNum << "! = " << result << std::endl;
                break;
                
            case 8: // Sine
                num1 = getNumber("Enter angle in degrees: ");
                result = calc.sine(num1);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "sin(" << num1 << "°) = " << result << std::endl;
                break;
                
            case 9: // Cosine
                num1 = getNumber("Enter angle in degrees: ");
                result = calc.cosine(num1);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "cos(" << num1 << "°) = " << result << std::endl;
                break;
                
            case 10: // Tangent
                num1 = getNumber("Enter angle in degrees: ");
                result = calc.tangent(num1);
                std::cout << std::fixed << std::setprecision(4);
                std::cout << "tan(" << num1 << "°) = " << result << std::endl;
                break;
                
            default:
                std::cout << "Invalid choice! Please select a valid option." << std::endl;
                break;
        }
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    Calculator calc;
    int choice;
    
    std::cout << "Welcome to the C++ Calculator!" << std::endl;
    std::cout << "This calculator supports basic arithmetic and advanced mathematical operations." << std::endl;
    
    do {
        displayMenu();
        std::cin >> choice;
        
        // Clear input buffer
        std::cin.ignore(10000, '\n');
        
        if (choice == 0) {
            std::cout << "Thank you for using the C++ Calculator. Goodbye!" << std::endl;
            break;
        }
        
        if (choice >= 1 && choice <= 10) {
            performCalculation(calc, choice);
        } else {
            std::cout << "Invalid choice! Please enter a number between 0 and 10." << std::endl;
        }
        
        // Pause before showing menu again
        std::cout << "\nPress Enter to continue...";
        std::cin.get();
        
    } while (choice != 0);
    
    return 0;
}