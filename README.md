The program implements (1) a linked list-based queue of template class and performs the functions of a queue, such as push(), pop(), front(), size(), empty(), and move_to_rear() functions,
(2) a recursive function to return the last occurance of a target in a vector, and (3) a function to apply insertion sort on to a linked list.

**Linked List Based Queue**

In main, the user must create a queue object of any data type using the Queue class. Below shows the object 'q' with the integer type using the Queue class.
<img width="218" height="67" alt="image" src="https://github.com/user-attachments/assets/a7396f51-a8b4-4b11-ae2a-b31e63c32678" />

Using the isEmpty() function will return either true or false. True if the queue is empty and false if it is not. There is no data in the queue, so, below, isEmpty() returns false, or "Yes".
<img width="956" height="78" alt="image" src="https://github.com/user-attachments/assets/30c412e2-9363-4b70-9deb-0640f610e974" />
<img width="247" height="51" alt="image" src="https://github.com/user-attachments/assets/afb5ad7e-2356-46df-86bf-84ecf28c744b" />

The size() function will return a number indicating the number of values in the queue at the moment. The queue is currently empty so it returns zero.
<img width="785" height="65" alt="image" src="https://github.com/user-attachments/assets/c5ff9fe3-c69a-4b3c-aab8-4a71ec9a2f0e" />
<img width="351" height="52" alt="image" src="https://github.com/user-attachments/assets/328e4832-b3ec-4058-a9a1-d3141a7d5c3a" />

Using the push() function will load an element into the queue. Here, the integer '1' is pushed onto the queue.
<img width="172" height="52" alt="image" src="https://github.com/user-attachments/assets/bfa9b1ac-d272-47b5-b500-a5115f42e037" />

The print_queue() function will print the queue. Let's see the 1 that was just pushed and see the current size of the queue.
<img width="787" height="78" alt="image" src="https://github.com/user-attachments/assets/e8d96c00-cf13-4994-8097-5c027a7fe7f8" />
<img width="390" height="82" alt="image" src="https://github.com/user-attachments/assets/fc138b67-497a-48c7-b988-30260cf6515b" />

Calling the isEmpty() function will now display "No" because the queue has at least one element now.
<img width="232" height="46" alt="image" src="https://github.com/user-attachments/assets/5f8ca6d2-c8bf-49d6-a8bb-a8f2b33a3db8" />

Pushing 9 more elements, numbers 2 through 10 onto the queue with the push() function.

<img width="212" height="315" alt="image" src="https://github.com/user-attachments/assets/97190c6e-94b8-4235-9c90-784e9e169f53" />



<img width="420" height="405" alt="image" src="https://github.com/user-attachments/assets/cdfd6050-101a-49d8-af06-e8214c5e6085" />

Using print_queue(), the queue now displays as:

<img width="461" height="27" alt="image" src="https://github.com/user-attachments/assets/51d23ac5-e5a2-4974-9965-a3ee1ae19444" />

The pop() function will remove the front element of the queue. The front element is 1 and is removed and shown below:
<img width="787" height="91" alt="image" src="https://github.com/user-attachments/assets/6df4f66b-a048-405a-8c8a-92607630a9d9" />
<img width="598" height="32" alt="image" src="https://github.com/user-attachments/assets/9215614a-2762-4d32-a5e7-a68f30d4174d" />

Using the getfront() function will return the front element. 1 has been popped, so the next element, 2, is the new front.
<img width="692" height="52" alt="image" src="https://github.com/user-attachments/assets/88190b45-ae94-412d-b2c0-623fdb7f7fae" />
<img width="197" height="47" alt="image" src="https://github.com/user-attachments/assets/59545d3b-510c-489e-8920-50b8eceea6bd" />

After the popping of 1, the size has went down by one. The new size is shown below:
<img width="357" height="40" alt="image" src="https://github.com/user-attachments/assets/226db57b-4d51-4b2b-80d3-f34e2d9414f9" />

The move_to_rear function moves the front element to the end of the queue. The front is 2 and is moved to the end of the queue. The new front is the element after 2, which is 3.
<img width="842" height="127" alt="image" src="https://github.com/user-attachments/assets/cde3e8c2-d25f-476a-8538-94d2f2e2ff72" />

<img width="533" height="57" alt="image" src="https://github.com/user-attachments/assets/390f2a5f-7e4c-402a-b1e3-41d07754fd49" />

**Last Occurance Vector**

In the vector of strings named 'vec', 6 elements are loaded to it. Assign a target data to return the index of its last occurance. Below, the target is 'bus'.
The recursive function, last_occurance(), requires two parameters, the first being the name of the vector and the second is the target, or key, to look for.
It is assigned to an integer variable, result.
<img width="993" height="117" alt="image" src="https://github.com/user-attachments/assets/2662c1c0-7a4a-4f26-ac3f-c3aaf4912e99" />

The string "bus" occurs last at the second index, as shown below.
<img width="586" height="43" alt="image" src="https://github.com/user-attachments/assets/d5b50f01-86c8-4b86-909d-f3a9813c75b8" />

**Linked List Insertion Sort**

A linked list of integers named 'num' is made. The numbers 5, 3, 10, 1, and 7 are pushed on to it. Using the function insertion_sort will sort the integers in ascending order.

<img width="312" height="337" alt="image" src="https://github.com/user-attachments/assets/682e78ba-51af-47b6-89ab-816944c4a7be" />

 <img width="312" height="50" alt="image" src="https://github.com/user-attachments/assets/e293dff8-2ea2-4a4f-aa68-890de47d610f" />
