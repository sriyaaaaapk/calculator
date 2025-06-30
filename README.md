# 🧮 C Calculator Project

A modular, command-line calculator built in **C**, supporting both **Basic** and **Scientific** operations.  
It is designed to be clean, extendable, and beginner-friendly.

---

## ✨ Features

### 🔹 Basic Calculator
- ➕ Addition  
- ➖ Subtraction  
- ✖️ Multiplication  
- ➗ Division (with zero-check)

### 🔹 Scientific Calculator
- 🧠 Power  
- 🧮 Square Root  
- 📐 Sine, Cosine, Tangent  
- 🔁 Inverse Trig Functions: `arcsin`, `arccos`, `arctan`

> All angle inputs are in **degrees**, automatically converted to radians.

---

## 🗂 Project Structure

```bash
.
├── main.c                      # Main driver menu
├── basic_calculator.c/.h      # Basic operations
├── scientific_calculator.c/.h # Scientific operations
├── inputs.c/.h                # Input validation helpers
├── calculator.exe             # Executable (after build)
├── .vscode/tasks.json         # Build task config (VS Code)
└── README.md                  # You're reading it :)
```

## ⚙️ How to Compile & Run

🛠 Using GCC (manual)

```bash 
gcc main.c basic_calculator.c scientific_calculator.c inputs.c -o calculator -lm
./calculator
```

💻 Using VS Code

```bash 
- Press Ctrl + Shift + B

- Select Build Calculator Project

- Run ./calculator.exe from terminal
```

> -lm links the math library required for functions like pow, sin, etc.
