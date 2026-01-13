# Mathematical Series Matrix Generator

This project implements a computational algebra algorithm in C. It populates a $4 \times 10$ matrix with various mathematical growth series for integers ranging from 1 to 10.

## 🧮 Matrix Structure

The matrix is organized into 4 distinct rows, where each column $j$ (representing number $x$) contains:

1.  **Row 0 (Linear):** The number itself ($x$)
2.  **Row 1 (Quadratic):** The square of the number ($x^2$)
3.  **Row 2 (Factorial):** The factorial of the number ($x!$)
4.  **Row 3 (Exponential):** The number to the power of itself ($x^x$)

## ⚙️ Technical Implementation

* **Data Types:** Uses `long long` integers to handle large values (e.g., $10^{10}$ exceeds standard integer limits).
* **Complexity:** Populates the matrix in a single pass with nested loops for factorial and power calculations.

## 🚀 Output Example

The program generates a table structure similar to:

| n | 1 | 2 | 3 | ... | 10 |
|---|---|---|---|---|---|
| **$n^2$** | 1 | 4 | 9 | ... | 100 |
| **$n!$** | 1 | 2 | 6 | ... | 3,628,800 |
| **$n^n$** | 1 | 4 | 27 | ... | 10,000,000,000 |

---
*This repository demonstrates nested loops, mathematical algorithms, and data type management in C.*
