# **Singly Linked List - flip**

*by Jay Vince Serato*

The **List ADT** has the following operations already implemented in class:
* **`node* add(int num)`**: Inserts `num` into the list. Returns the node pointer created.
* **`int remove(int num)`**: Removes the first occurrence of `num` from the list and returns the position at which it was found.
 
### **Your task is to implement the following operation:**

* **`void flip()`**: Flips the elements. The first element becomes the last, second becomes second-to-the-last, and so on until the last element becomes the first.

> **NOTE:** You may only reassign the `next` pointers of each node. That means you cannot reassign the elements/values of the node. This is theoretically to protect the data from unnecessary access and movements. You cannot create new nodes or delete existing nodes.

---

### **Sample Output 1**
```text
Enter op: a 10
Enter op: a 20
Enter op: a 30
Enter op: a 40
Enter op: a 50
Enter op: p
10 -> 20 -> 30 -> 40 -> 50
Enter op: f
Enter op: p
50 -> 40 -> 30 -> 20 -> 10
Enter op: x
Exiting
```

### **Sample Output 2**
```text
Enter op: a 10
Enter op: a 20
Enter op: a 30
Enter op: a 40
Enter op: a 50
Enter op: p
10 -> 20 -> 30 -> 40 -> 50
Enter op: f
Enter op: p
50 -> 40 -> 30 -> 20 -> 10
Enter op: f
Enter op: p
10 -> 20 -> 30 -> 40 -> 50
Enter op: x
Exiting
```
