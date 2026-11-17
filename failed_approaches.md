# Failed Approaches and Debugging Notes

This document records the unsuccessful approaches encountered during the development of the PRN-based Hash Table implementation and explains how they were resolved.

## 1. Insertion Without Collision Handling

**Approach Tried:**

Initially, I implemented hash table insertion by directly placing a key at its calculated hash index.

**What Went Wrong:**

When multiple keys generated the same hash index, the existing value could not be stored alongside the new value. This resulted in collisions that were not handled correctly.

**Why It Was Abandoned:**

The approach was insufficient because the assignment required collision resolution using Separate Chaining.

**Solution:**

I implemented Separate Chaining using linked lists. Each hash table index can now store multiple nodes, allowing colliding keys to be inserted into the same bucket.

## 2. Duplicate Variable Declaration

**Approach Tried:**

While implementing linked-list insertion, I accidentally declared the pointer variable `Node* temp` twice within the same scope.

**What Went Wrong:**

The compiler generated a redeclaration error because the same variable name was declared more than once in the same scope.

**Why It Was Abandoned:**

The duplicate declaration was unnecessary and prevented the program from compiling.

**Solution:**

I removed the second declaration and reused the existing pointer variable. After correcting the code, the program compiled successfully.

## 3. Insertion Without Duplicate Checking

**Approach Tried:**

The initial insertion logic allowed a key to be inserted into the linked list without checking whether that key already existed in the bucket.

**What Went Wrong:**

Inserting an already existing key could create duplicate entries in the hash table.

**Why It Was Abandoned:**

Duplicate entries were unnecessary and made the hash table's data less reliable.

**Solution:**

I added a duplicate-checking condition that traverses the linked list before insertion. If the key already exists, the program rejects the insertion and displays a duplicate-key message.

## Conclusion

These unsuccessful approaches helped identify problems in collision handling, variable declaration, and duplicate detection. Each issue was corrected by improving the implementation, resulting in a working hash table using the Mid-Square Method and Separate Chaining.