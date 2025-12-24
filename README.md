# SimpleLang-Compiler

A simple compiler for the **SimpleLang** programming language written in C.  
This project implements lexical analysis, parsing, AST generation, and basic code generation for SimpleLang programs.

> A minimal compiler designed for educational purposes to demonstrate the key compiler stages.

---

## 🧠 Overview

SimpleLang-Compiler is a lightweight compiler that takes `SimpleLang` source code and produces executable or intermediate code. It includes:

- **Lexer** for tokenizing source input  
- **Parser** for syntax analysis  
- **Abstract Syntax Tree (AST)** construction  
- **Code Generation** module  
- A sample test file demonstrating compilation  

This project is ideal for learning how compilers work or extending into more advanced language features.

---

## 🛠️ Features

- Lexical analysis
- Grammar parsing
- AST building
- Simple target code generation
- Example test files included

---

## 📁 Repository Structure

├── ast.h # AST node definitions
├── codegen.c # Code generation logic
├── lexer.c # Lexer implementation
├── parser.c # Parser implementation
├── main.c # Main driver for the compiler
├── test.s1 # Sample SimpleLang source program
└── README.md # Project documentation



---

## 🚀 Getting Started

### 💡 Prerequisites

Before building the compiler, make sure you have:

- A **C compiler** (e.g., `gcc`)
- A Unix-like environment (Linux, macOS, WSL on Windows)

---

## 🧱 Installation

1. **Clone the repository**

bash
git clone https://github.com/ayushtiwari5679/SimpleLang-Compiler.git
cd SimpleLang-Compiler

2 .Compile all sources

gcc -o simplelang_compiler main.c lexer.c parser.c codegen.c
