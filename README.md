# ⚡ Electricity Bill Management System in C

## 📌 Project Overview
The Electricity Bill Management System is a console-based application developed using the C programming language. It accepts customer details and electricity meter readings, calculates electricity consumption, and generates the final bill using a slab-based billing system with fixed charges.

## ✨ Features

- **Customer Information Input:** Accepts the customer's name and consumer number.
- **Meter Reading Input:** Takes previous and current electricity meter readings.
- **Automatic Unit Calculation:** Calculates electricity consumption by subtracting the previous reading from the current reading.
- **Slab-Based Billing:** Applies different electricity rates according to the units consumed.
- **First 100 Units:** Charges ₹3 per unit.
- **Next 100 Units:** Charges ₹5 per unit.
- **Above 200 Units:** Charges ₹7 per unit.
- **Fixed Charges:** Adds a fixed charge of ₹50 to the calculated bill.
- **Reading Validation:** Detects negative previous readings and current readings lower than previous readings.
- **Error Handling:** Displays an invalid meter reading message and terminates the program when readings are invalid.
- **Detailed Bill Generation:** Displays customer name, consumer number, units consumed, and total bill.
- **Formatted Output:** Displays electricity consumption and the final bill with two decimal places.

## 🧮 Billing Structure

| Electricity Consumption | Rate |
|---|---:|
| First 100 units | ₹3/unit |
| Next 100 units | ₹5/unit |
| Above 200 units | ₹7/unit |
| Fixed charge | ₹50 |

## 🛠️ Technologies Used

- C Programming Language
- `stdio.h` header file
- Variables and data types
- `scanf()` and `printf()`
- `if-else` conditional statements
- Arithmetic operators
- Input validation

## 🚀 How to Run

### 1. Compile the Program

Install a C compiler such as GCC and run:

```bash
gcc main.c -o electricity
```

### 2. Execute the Program

**Windows:**
```bash
electricity.exe
```

**Linux/macOS:**
```bash
./electricity
```

## 💻 Sample Output

```text
-----ELECTRICITY BILL MANAGEMENT SYSTEM-----
Enter name = Rahul Sharma
Enter consumer no. = 101
Enter previous reading = 1000
Enter current reading = 1250

------ELECTRICITY BILL-------
Customer Name: Rahul Sharma
Consumer Number: 101
Units Consumed: 250.00
Total bill: Rs. 1200.00
```

## 🔮 Future Improvements

The following features can be added in future versions:

- Customer registration and management.
- File handling to save customer records permanently.
- Search and display previous customer bills.
- Support for multiple customers.
- Stronger validation for invalid user inputs.
- Menu-driven interface for easier navigation.
- Bill history and monthly consumption reports.

## 🎯 Learning Outcomes

- Understanding C programming fundamentals.
- Using conditional statements to implement billing logic.
- Performing arithmetic calculations.
- Accepting and displaying customer information.
- Implementing basic input validation.
- Generating formatted billing reports.

## 👨‍💻 Author

Developed as a C programming project to practice fundamental programming concepts.
