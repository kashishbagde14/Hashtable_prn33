### Commit 1: Initial Project Setup

The initial step was to create the C++ project and configure the local Git repository. I created the `main.cpp` file and added the basic header files and project information, including my PRN. I also connected the local repository to GitHub. No major coding errors were encountered at this stage. The purpose of this commit was to establish the basic project structure before implementing the hash table.

### Commit 2: Implement Personalized Dataset Generation

I implemented the personalized dataset using the formula v[i] = (SEED + 13 * i) % 100, where my seed is 33 and the dataset contains 20 values. I also associated each generated value with a mango variety name. I checked the generated values against the formula to ensure that all 20 entries were correct. The dataset generation worked as expected, so no major debugging was required.


### Commit 3: Implement Mid-Square Hash Function

I implemented the Mid-Square hashing method to calculate the index for each key. The key is squared, and the middle two digits of the square are extracted. The resulting value is reduced modulo the table size to obtain a valid index. I tested the function with key 33, whose square is 1089, giving middle digits 08 and hash index 8. The test produced the expected result.

### Commit 4: Implement Basic Hash Table Insertion

I implemented the basic insertion operation to store keys in the hash table using their calculated hash indices. Initially, the insertion logic handled only empty buckets. During testing, I realized that when two keys generated the same index, the existing insertion logic could not store both keys. This limitation showed that collision handling was necessary, so I planned to implement Separate Chaining in the next development stage.

### Commit 5: Implement Separate Chaining

To handle collisions, I implemented Separate Chaining using a singly linked list. Each bucket of the hash table stores a pointer to the first node, and colliding keys are connected using the `next` pointer. Initially, I considered storing only one key per bucket, but this approach failed when multiple keys generated the same hash index. I replaced it with linked-list insertion, allowing multiple keys to be stored in the same bucket without overwriting existing entries. 

### Commit 6: Add Duplicate Detection and Table Display

I added duplicate key detection to prevent the same key from being inserted more than once into the hash table. Before inserting a new node, the program traverses the linked list at the calculated bucket and checks whether the key already exists. I also implemented a display function to show all buckets and their linked-list contents. During testing, I verified that inserting key 33 again displayed a duplicate rejection message and did not modify the hash table. The final output correctly displayed all 20 inserted values.