# **Prefix Expressions**

*by Jay Vince Serato*

Prefix expressions are mathematical expressions derived from expression trees that are obtained using **pre-order traversal**.
 
### **Evaluation Algorithm**
In order to evaluate a prefix expression, perform the following steps:
1. Read the entire expression until the last symbol. **Start scanning from the last symbol to the first** (right to left).
2. If the current symbol is an **operand** (e.g., numerical value), push it onto a stack.
3. If the current symbol is an **operator** (`+`, `-`, `*`, `/`), pop two operands from the stack. Call the operands `a` and `b` respectively.
4. Evaluate the operation `a op b`.
5. Push the result back onto the stack.
6. Repeat the above steps until the start of the expression is reached.
7. At the end, the stack should contain only one number, which is the result of the entire prefix expression. This will be printed when the user exits the program via the `'x'` input.
 
> **Note:** In the `main.cpp` file, the code is currently structured to handle postfix expressions as it handles operations.

---

### **Sample Output 1**
```text
Enter number of inputs: 5
Enter expression: + 9 * 2 6
Answer is 21
```

### **Sample Output 2**
```text
Enter number of inputs: 7
Enter expression: + * 3 4 * 2 5
Answer is 22
```

### **Sample Output 3**
```text
Enter number of inputs: 7
Enter expression: / * + 9 5 2 7
Answer is 4
```
