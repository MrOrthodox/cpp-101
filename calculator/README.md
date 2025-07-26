# C++ Calculator

A comprehensive command-line calculator written in C++ that supports basic arithmetic operations and advanced mathematical functions.

## Features

### Basic Arithmetic Operations
- **Addition** (`+`) - Add two numbers
- **Subtraction** (`-`) - Subtract two numbers  
- **Multiplication** (`*`) - Multiply two numbers
- **Division** (`/`) - Divide two numbers with zero-division protection

### Advanced Mathematical Operations
- **Power** (`^`) - Calculate base raised to exponent
- **Square Root** (`√`) - Calculate square root with negative number protection
- **Factorial** (`!`) - Calculate factorial of non-negative integers
- **Trigonometric Functions**:
  - **Sine** (`sin`) - Calculate sine of angle in degrees
  - **Cosine** (`cos`) - Calculate cosine of angle in degrees
  - **Tangent** (`tan`) - Calculate tangent of angle in degrees

## Building and Running

### Prerequisites
- C++ compiler (g++ recommended)
- Make (optional, for using Makefile)

### Compilation Options

#### Option 1: Using Makefile (Recommended)
```bash
# Build the calculator
make

# Build and run immediately
make run

# Build debug version
make debug

# Clean build artifacts
make clean
```

#### Option 2: Manual Compilation
```bash
g++ -std=c++17 -Wall -Wextra -O2 -o calculator calculator.cpp -lm
```

### Running the Calculator
```bash
# If built with make
./calculator

# Or using make
make run
```

## Usage

1. **Start the program** - Run the executable
2. **Choose an operation** - Select from the menu (0-10)
3. **Enter numbers** - Follow the prompts to input required values
4. **View results** - The calculation result will be displayed
5. **Continue or exit** - Press Enter to continue or choose 0 to exit

### Example Usage Session

```
Welcome to the C++ Calculator!
This calculator supports basic arithmetic and advanced mathematical operations.

========== C++ Calculator ==========
1.  Addition (+)
2.  Subtraction (-)
3.  Multiplication (*)
4.  Division (/)
5.  Power (^)
6.  Square Root (√)
7.  Factorial (!)
8.  Sine (sin)
9.  Cosine (cos)
10. Tangent (tan)
0.  Exit
====================================
Enter your choice (0-10): 1
Enter first number: 15.5
Enter second number: 7.3
15.50 + 7.30 = 22.80

Press Enter to continue...
```

## Error Handling

The calculator includes robust error handling for:
- **Division by zero** - Prevents crashes when dividing by zero
- **Invalid input** - Handles non-numeric input gracefully
- **Negative square roots** - Prevents calculation of imaginary numbers
- **Negative factorials** - Validates factorial input
- **Input validation** - Ensures proper data types for each operation

## Technical Details

### Class Structure
- **Calculator class** - Encapsulates all mathematical operations
- **Clean separation** - Logic separated from user interface
- **Exception handling** - Uses C++ exceptions for error management

### Input Validation
- **Type checking** - Validates numeric input
- **Range checking** - Ensures valid ranges for specific operations
- **Buffer clearing** - Prevents input buffer issues

### Precision and Formatting
- **Decimal precision** - 2 decimal places for most operations
- **High precision** - 4 decimal places for trigonometric functions
- **Integer display** - Whole numbers for factorial results

## Installation (Optional)

### System-wide Installation
```bash
# Install to /usr/local/bin (requires sudo)
make install

# Uninstall
make uninstall
```

After installation, you can run the calculator from anywhere using:
```bash
calculator
```

## Development

### Code Organization
- `calculator.cpp` - Main source file containing all functionality
- `Makefile` - Build configuration and common tasks
- `README.md` - This documentation file

### Extending the Calculator
To add new operations:
1. Add the function to the `Calculator` class
2. Update the `displayMenu()` function
3. Add a new case in `performCalculation()`
4. Update the menu validation logic

## License

This project is open source and available under standard licensing terms.

## Contributing

Feel free to contribute improvements, bug fixes, or additional features to this calculator project.