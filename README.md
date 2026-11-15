# Hash Table Implementation Using Mid-Square Method and Separate Chaining

## Project Overview

This project implements a **Hash Table in C++** using a personalized dataset generated from the student's PRN. It demonstrates the Mid-Square Hashing Method for calculating hash indices and Separate Chaining for handling collisions.

The dataset represents different varieties of mangoes, with each variety assigned a unique numerical key.

## Student Details

| Field | Details |
|---|---|
| Name | Kashish Bagde |
| PRN | 202501100033 |
| Roll Number | 24 |
| Programming Language | C++ |

## Personalization Details

The implementation follows the assignment's PRN-based personalization rules.

| Parameter | Selected Value |
|---|---|
| PRN | 202501100033 |
| Last Four Digits (Seed S) | 0033 |
| Seed Value (S) | 33 |
| PRN mod 3 | 2 |
| Selected Scenario | Mango Varieties |
| PRN Parity | Odd |
| Hashing Method | Mid-Square Method |
| PRN mod 2 | 1 |
| Collision Handling | Separate Chaining |
| Hash Table Size (M) | 10 (chosen implementation value) |

## Dataset Generation

The dataset contains 20 values generated using the following formula:

```text
v[i] = (S + 13 * i) % 100
```

Where:
- `S = 33` is the seed value derived from the PRN.
- `i` ranges from 0 to 19.
- Each generated value acts as a unique key in the hash table.

### Generated Dataset

| Index | Key | Mango Variety |
|---:|---:|---|
| 0 | 33 | Alphonso |
| 1 | 46 | Kesar |
| 2 | 59 | Dasheri |
| 3 | 72 | Langra |
| 4 | 85 | Totapuri |
| 5 | 98 | Chausa |
| 6 | 11 | Banganapalli |
| 7 | 24 | Neelam |
| 8 | 37 | Himsagar |
| 9 | 50 | Mallika |
| 10 | 63 | Amrapali |
| 11 | 76 | Raspuri |
| 12 | 89 | Badami |
| 13 | 2 | Fazli |
| 14 | 15 | Safeda |
| 15 | 28 | Malgova |
| 16 | 41 | Ratna |
| 17 | 54 | Pairi |
| 18 | 67 | Rajapuri |
| 19 | 80 | Sindhura |

## Hashing Technique – Mid-Square Method

The Mid-Square Method is used to calculate the hash index.

**Steps:**
1. Square the given key.
2. Extract the middle two digits of the squared value.
3. Apply modulo with the hash table size to obtain the final index.

**Formula:**

```text
Square = Key * Key
Middle = (Square / 10) % 100
Hash Index = Middle % M
```

**Example:**

For key `33`:

```text
Square = 33 * 33 = 1089
Middle = 08
Hash Index = 08 % 10 = 8
```

Therefore, key `33` is inserted at index `8`.

## Collision Handling – Separate Chaining

Separate Chaining is used to handle collisions when multiple keys generate the same hash index.

- Each hash table index contains a linked list.
- If multiple keys map to the same index, they are stored in that index's linked list.
- A new node is added to the existing chain.
- Duplicate keys are rejected to prevent repeated insertion.

## Features Implemented

- PRN-based dataset generation.
- Mid-Square Hashing Method.
- Hash table implementation using arrays.
- Collision handling using Separate Chaining.
- Linked-list-based storage at each hash index.
- Duplicate key detection.
- Display of the complete hash table.
- Display of generated dataset and hash indices.

## Technologies Used

- **Programming Language:** C++
- **Concepts:** Hashing, Arrays, Structures, Pointers, Linked Lists
- **IDE:** Visual Studio Code
- **Compiler:** G++ (MinGW)

## How to Compile and Run

### 1. Clone the Repository

```bash
git clone https://github.com/kashishbagde14/Hashtable_prn33.git
```

### 2. Navigate to the Project Directory

```bash
cd Hashtable_prn33
```

### 3. Compile the Program

```bash
g++ main.cpp -o main
```

### 4. Run the Program

On Windows:

```bash
.\main.exe
```

## Expected Output

The program displays:

- Project and personalization details.
- The generated dataset of 20 keys.
- Hash indices calculated using the Mid-Square Method.
- The final hash table with mango varieties stored in linked-list chains.
- Duplicate insertion testing.

## Learning Outcomes

Through this implementation, the project demonstrates:

- Understanding of hash functions and hash table operations.
- Application of the Mid-Square Hashing Method.
- Understanding and implementation of collision resolution.
- Practical use of linked lists and pointers in C++.
- Importance of duplicate detection in data structures.

---

**Academic Project – Data Structures Internal Activity 3**