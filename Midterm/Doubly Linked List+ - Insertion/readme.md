# **Doubly Linked List+ - Insertion**

*by Jay Vince Serato*

Modify the **`add(int num)`** method to add the given `num` in the rightful place following an ascending numerical order.
 
Say we have an existing `10 <-> 20 <-> 30 <-> 40` in the list that was also added using the `add()` method, performing `add(25)` should place `25` in between `20` and `30`, making the list `10 <-> 20 <-> 25 <-> 30 <-> 40`. For this, you must use the **`addBetween()`** method. You can also use the other existing methods.
 
Additionally, this will start searching for its rightful place from the **head** or from the **tail** depending on which is nearer to the given number:
* If it is nearer to the first element than the last, it should start from the head and return the value **`1`**.
* If it is nearer to the tail, choose to start from the tail and return **`2`**.
* If the list is empty or when they are equal in difference like the example above, choose to start from the head and return **`1`**.

---

### **Sample Output 1**
```text
Op: a 10
Added from head
Op: a 20
Added from head
Op: a 40
Added from tail
Op: a 30
Added from tail
Op: p
Size: 4
From HEAD: 10->20->30->40
From TAIL: 40<-30<-20<-10
Op: a 25
Added from head
Op: p
Size: 5
From HEAD: 10->20->25->30->40
From TAIL: 40<-30<-25<-20<-10
Op: x
Exiting
```

### **Sample Output 2**
```text
Op: a 10
Added from head
Op: a 20
Added from head
Op: a 40
Added from tail
Op: a 30
Added from tail
Op: p
Size: 4
From HEAD: 10->20->30->40
From TAIL: 40<-30<-20<-10
Op: a 24
Added from head
Op: p
Size: 5
From HEAD: 10->20->24->30->40
From TAIL: 40<-30<-24<-20<-10
Op: x
Exiting
```

