# CalculatorProject

A modular C++ project for a simple calculator that performs basic arithmetic operations: addition, subtraction, multiplication, and division.

---

## **Features**
- Modular design adhering to C++ standards.
- Separate headers and source files for each operation.
- CMake build system.

---

## **Project Structure**

---

## **Core Concepts**
1. **Modularity**: Each operation is implemented in its own source file with corresponding declarations in the header file.
2. **Encapsulation**: Arithmetic functions are encapsulated within their own implementation files.
3. **Error Handling**: Division by zero is handled using exceptions.
4. **Standards**: C++17 standard ensures modern and efficient code.

---

## **Compilation Instructions**

### **Prerequisites**
- A C++ compiler (e.g., g++, clang++)
- CMake installed

### **Steps**
1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd CalculatorProject

2. Create a build directory and navigate to it:
   ```bash
    mkdir build
    cd build

3.  Run CMake to generate build files:
   ```bash
    cmake ..

4. Compile the project:
   ```bash
    make

5. Run the calculator:
   ```bash
    ./calculator

---

## Usage

-  Enter the first number.
-  Choose an operator (+, -, *, /).
-  Enter the second number.
-  View the result.

---

## Future Enhancements

-  Support for more operations (e.g., modulus, power, etc.).
-  Add a graphical interface.
-  Add unit tests.

---
This structure ensures modularity, adherence to C++ standards, and ease of understanding for developers. Follow these steps, and you’ll have a clean, professional calculator project!
