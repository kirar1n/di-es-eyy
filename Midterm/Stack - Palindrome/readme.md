# **Stack - Palindrome**

*by Jay Vince Serato*

Given a one-word string containing lowercase letters, write a program to determine if the input string is a **palindrome**. 

A palindrome is a word that is spelled the same way forwards and backwards (e.g., `racecar`, `radar`, `kayak`, `noon`, `deed`, `rotator`). 

> **Constraint:** You may only use the stack operations **`push`**, **`pop`**, **`top`**, **`size`**, and **`isEmpty`** to solve this problem.

---

### **Algorithm / Instructions**
1. Store the **first half** of the characters of the string into the stack.
2. After reaching the midpoint:
   - If the string length is **odd**, skip/ignore the middle character.
   - Pop elements from the stack one by one and compare each popped character with the remaining characters in the second half of the string.
3. For example, for `"racecar"`:
   - Store the first half `'r'`, `'a'`, `'c'` into the stack.
   - Ignore the middle letter `'e'`.
   - Pop characters one by one (`'c'`, `'a'`, `'r'`) and compare them to the second half continuation (`'c'`, `'a'`, `'r'`).

---

### **Implementation Details**
* Use **`str.length()`** to get the length of the string `str`.
* Use indexing brackets like **`str[i]`** to access individual characters.
* In the `main.cpp` file, implement **`bool is_palindrome(string str)`**:
  * Return **`true`** if the string is a palindrome.
  * Return **`false`** otherwise.

---

### **Sample Output 1**
```text
Enter a string: racecar
The string is a palindrome!
```

### **Sample Output 2**
```text
Enter a string: jayvince
The string is not a palindrome!
```
### **Sample Output 3**
```text
Enter a string: peep
The string is a palindrome!
```
