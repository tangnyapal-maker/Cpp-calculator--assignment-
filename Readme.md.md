# 💻 Basic Calculator Project (C++)

This repository contains the C++ code for a **Basic Calculator** program, developed as part of a Class Exercise at **Strathmore University**.

**Author:** Nyapal Tang Kuei
**Course/Program:** Bachelor of Business Information Technology (BBIT)

---

## ✨ Project Overview

The goal of this exercise was to design a single C++ program that functions as a versatile calculator, handling multiple arithmetic and mathematical operations on **two user-inputted numbers** (integers or floating-point).

### 🧮 Calculator Capabilities

The program takes two numbers from the user and performs the following operations:

1.  **Addition** of the two numbers.
2.  **Subtraction** of the two numbers.
3.  **Multiplication** of the two numbers.
4.  **Division** of the two numbers.
5.  Determines the **square root** of the **first number** ($\sqrt{x}$).
6.  Calculates the **first number** raised to the power of the **second number** ($x^y$).
7.  Displays the **logarithm** of the **first number** ($\log(x)$).

---

## 🛠️ Requirements and Setup

To compile and run this C++ project, you need a C++ compiler and environment.

### Prerequisites

* A C++ compiler (e.g., **g++**).
* The standard C++ library, which includes the necessary **math library** (`<cmath>`).

### Compilation and Execution

Follow these steps to run the program using the command line (assuming your main file is named `calculator.cpp`):

1.  **Navigate to the project folder:**
    ```bash
    cd /path/to/your/repository
    ```
2.  **Compile the Code:**
    ```bash
    g++ calculator.cpp -o calculator -lm
    ```
    * *The `-lm` flag ensures the math library is linked correctly for functions like `sqrt()`, `pow()`, and `log()`. This step may vary based on your environment or IDE.*

3.  **Execute the Program:**
    ```bash
    ./calculator
    ```

The program will then prompt you to enter the two numbers and display the results of all seven operations.

---
