# **Array List (Dynamic) - removeAll**

*by Jay Vince Serato*

The **List ADT** has the following operations already implemented in class:
* **`void add(int num)`**: Inserts `num` into the list.
* **`int get(int pos)`**: Returns the integer at the *pos*-th position.
* **`int remove(int num)`**: Removes the first occurrence of `num` from the list and returns the position at which it was found.
 
---

### **Your task is to implement the following operations on a Dynamic Array List:**

* **`int removeAll(int num)`**: Removes all occurrences of the element `num`. Returns the total number of elements removed.
* **`void dynamic_deduce()`**: This method shall be called to dynamically reduce the capacity of the array.

---

### **Capacity & Reallocation Rules**
* **Trigger Condition:** When the number of elements reaches **$\le 3/4$ (75%) of the capacity (rounded down)**, reallocate the array by reducing its capacity by **20% (rounded down)**.
  * *Example:* If the array has capacity `12`, and after removing elements the size becomes $\le 9$ ($\lfloor 12 \times 0.75 \rfloor = 9$), reduce the capacity by 20% ($\lfloor 12 \times 0.20 \rfloor = 2$). The new capacity becomes `10` ($12 - 2$).
* **Single Reallocation:** Perform the reallocation **only once per method call** so that there will be at most one call to `realloc`.
* **Minimum Capacity:** Maintain a **minimum capacity of 5** at all times.

> *Note:* The `dynamic_add` and `remove` methods are provided as reference to guide your implementation.

---

### **Sample Output 1**
```text
Op: a 10
Op: a 20
Op: a 30
Op: a 40
Op: a 50
Op: p
10 20 30 40 50
Op: R 30
Removed 1 element/s
Op: p
10 20 40 50 ?
Op: x
Exiting...
```

### **Sample Output 2**
```text
Op: a 10
Op: a 20
Op: a 10
Op: a 40
Op: p
10 20 10 40 ?
Op: R 10
Removed 2 element/s
Op: p
20 40 ? ? ?
Op: x
Exiting...
```

### **Sample Output 3**
```text
Op: a 15
Op: a 25
Op: a 40
Op: a 50
Op: a 25
Op: p
15 25 40 50 25
Op: R 25
Removed 2 element/s
Op: p
15 40 50 ? ?
Op: x
Exiting...
```
