# **Circular Linked List**

*by Jay Vince Serato*

You are to design a structure known as a **circularly linked list**, which is essentially a singularly linked list in which the next reference of the tail node is set to refer back to the head of the list (rather than null).
 
The Circular Linked List only has a reference to its **tail** and the **size** of the list. Since it is circular, the head can be accessed from the tail's next. We keep the reference of its tail instead of its head since we can access the head from the tail, but not vice-versa since this is a singularly linked list and has no reference to its previous node.
 
### **The following methods must be supported by the Circular Linked List:**

* **`void addFirst(int)`**  
  This method will add the given integer as the first element. Refer to the image below for the guide on how to perform addFirst. You must achieve a running time of **O(1)** in this method.

* **`void addLast(int)`**  
  This method will add the given integer to the last element. You must achieve a running time of **O(1)** in this method.

* **`int getTail()`**  
  This method will simply return the element of the tail. If the list is empty, return **-1**. You must achieve a running time of **O(1)** in this method.

* **`int removeFirst()`**  
  This method will return and remove the first element. If the list is empty, return **-1**. You must achieve a running time of **O(1)** in this method.

* **`void rotate()`**  
  This method will rotate the circular linked list. Refer to the image below for the guide on how to perform this method. You must achieve a running time of **O(1)** in this method.

* **`void print()`**  
  This method will print the size of the list, then onto a new line the first element until the last element (separated by `->`) by the use of the `rotate()` method. At the end, it should also print the next element of the last element to illustrate a Circular Linked List. Of course, ensure that the tail must be the same before and after this method has been called. If the list is empty, output `"Empty"` instead of printing the elements.
 
*For all the above methods, you may utilize existing methods for your implementation.*

### **Sample Outputs**

```text
Sample Output 1
Op: p
Size: 0
Empty
Op: f 9
Op: p
Size: 1
9->9
Op: f 7
Op: p
Size: 2
7->9->7
Op: f 5
Op: p
Size: 3
5->7->9->5
Op: f 3
Op: p
Size: 4
3->5->7->9->3
Op: f 1
Op: p
Size: 5
1->3->5->7->9->1
Op: p
Size: 5
1->3->5->7->9->1
Op: x
Exiting

Sample Output 2
Op: f 8
Op: p
Size: 1
8->8
Op: O
Op: p
Size: 1
8->8
Op: f 6
Op: p
Size: 2
6->8->6
Op: O
Op: p
Size: 2
8->6->8
Op: f 7
Op: p
Size: 3
7->8->6->7
Op: p
Size: 3
7->8->6->7
Op: O
Op: p
Size: 3
8->6->7->8
Op: O
Op: p
Size: 3
6->7->8->6
Op: f 5
Op: f 4
Op: p
Size: 5
4->5->6->7->8->4
Op: O
Op: O
Op: p
Size: 5
6->7->8->4->5->6
Op: x
Exiting

Sample Output 3
Op: f 11
Op: f 9
Op: f 7
Op: f 5
Op: p
Size: 4
5->7->9->11->5
Op: O
Op: p
Size: 4
7->9->11->5->7
Op: O
Op: p
Size: 4
9->11->5->7->9
Op: O
Op: p
Size: 4
11->5->7->9->11
Op: O
Op: p
Size: 4
5->7->9->11->5
Op: O
Op: p
Size: 4
7->9->11->5->7
Op: f 6
Op: p
Size: 5
6->7->9->11->5->6
Op: O
Op: O
Op: p
Size: 5
9->11->5->6->7->9
Op: f 8
Op: p
Size: 6
8->9->11->5->6->7->8
Op: p
Size: 6
8->9->11->5->6->7->8
Op: O
Op: O
Op: O
Op: f 13
Op: p
Size: 7
13->5->6->7->8->9->11->13
Op: O
Op: p
Size: 7
5->6->7->8->9->11->13->5
Op: x
Exiting
