# Simple C Calculator

A lightweight, command-line interface (CLI) calculator written in **C**. This program performs basic arithmetic operations through a simple menu-driven system.

---

## 🚀 Features

The calculator supports the following operations:
* **Addition (+)**: Adds two floating-point numbers.
* **Subtraction (-)**: Subtracts the second number from the first.
* **Multiplication (*)**: Multiplies two floating-point numbers.
* **Division (/)**: Divides the first number by the second.
* **Error Handling**: Includes a safety check to prevent division by zero.
* **Continuous Execution**: Runs in a loop until the user selects the exit option.

---

## 🛠️ Code Overview

The project is structured into modular functions for better readability and logic separation:

### Core Functions
* `float add(float a, float b)`: Returns the sum.
* `float subtract(float a, float b)`: Returns the difference.
* `float multiply(float a, float b)`: Returns the product.
* `float divide(float a, float b)`: Handles division and checks for zero-divisor errors.

### Implementation Details
* **Input Handling**: Uses `scanf` to capture user choices and numeric values.
* **Control Flow**: Utilizes a `while(1)` loop and a `switch` statement for navigation.
* **Formatting**: Results are displayed with two decimal places (`%.2f`) for precision.

---

## 💻 How to Run

1. **Prerequisites**: Ensure you have a C compiler installed (like GCC, Clang, or MSVC).

2. **Compile the code**:
   Open your terminal and run:
   ```bash
   gcc Calculator.c -o calculator

3. **Run the executable**
   ```bash
   ./calculator

  ## Usage Example
**When you run the program, the interface will look like this:**
===== SIMPLE CALCULATOR =====
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
Enter your choice: 1
Enter first number: 10
Enter second number: 5
Result = 15.00

## 📜 License
This project is open-source and available under the MIT License.
