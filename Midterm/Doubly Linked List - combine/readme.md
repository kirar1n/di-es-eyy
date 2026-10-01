# **Doubly Linked List - combine**

*by Jay Vince Serato*

Given a basic **sentinel-less Doubly Linked List**, implement the **`combine(DoublyLL*)`** method that will connect the contents of the `DoublyLL*` parameter to this instance's linked list.
 
### **Example:**
If this linked list contains `10 <-> 20 <-> 30 <-> 40` and the parameter `DoublyLL` contains `70 <-> 80`, this linked list should combine what is in the parameter into its own, resulting in this linked list having `10 <-> 20 <-> 30 <-> 40 <-> 70 <-> 80`. 

### **Requirements:**
* The parameter `DoublyLL` should be **reset** to not contain anything and its `size` set back to `0`.
* This operation must run in **$\mathcal{O}(1)$** time.
* You are **not** allowed to create new nodes; you are only to connect the existing nodes/pointers of the lists.

---

### **Sample Output 1**
```text
Operating on list1
Op: f 30
Op: f 20
Op: l 40
Op: f 10
Op: p
Size: 4
FROM HEAD: 10->20->30->40
FROM TAIL: 40<-30<-20<-10
Op: d
Operating on list2
Op: l 70
Op: l 80
Op: p
Size: 2
FROM HEAD: 70->80
FROM TAIL: 80<-70
Op: d
Operating on list1
Op: c
Combining on list1
Op: p
Size: 6
FROM HEAD: 10->20->30->40->70->80
FROM TAIL: 80<-70<-40<-30<-20<-10
Op: x
Exiting
```

### **Sample Output 2**
```text
Operating on list1
Op: f 30
Op: f 20
Op: l 40
Op: f 10
Op: p
Size: 4
FROM HEAD: 10->20->30->40
FROM TAIL: 40<-30<-20<-10
Op: d
Operating on list2
Op: l 70
Op: l 80
Op: p
Size: 2
FROM HEAD: 70->80
FROM TAIL: 80<-70
Op: d
Operating on list1
Op: c
Combining on list1
Op: p
Size: 6
FROM HEAD: 10->20->30->40->70->80
FROM TAIL: 80<-70<-40<-30<-20<-10
Op: d
Operating on list2
Op: p
Size: 0
FROM HEAD:
FROM TAIL:
Op: x
Exiting
```

### **Sample Output 3**
```text
Operating on list1
Op: f 30
Op: f 20
Op: l 40
Op: f 10
Op: p
Size: 4
FROM HEAD: 10->20->30->40
FROM TAIL: 40<-30<-20<-10
Op: d
Operating on list2
Op: l 70
Op: l 80
Op: p
Size: 2
FROM HEAD: 70->80
FROM TAIL: 80<-70
Op: d
Operating on list1
Op: c
Combining on list1
Op: p
Size: 6
FROM HEAD: 10->20->30->40->70->80
FROM TAIL: 80<-70<-40<-30<-20<-10
Op: d
Operating on list2
Op: p
Size: 0
FROM HEAD:
FROM TAIL:
Op: c
Combining on list2
Op: p
Size: 6
FROM HEAD: 10->20->30->40->70->80
FROM TAIL: 80<-70<-40<-30<-20<-10
Op: x
Exiting
```
