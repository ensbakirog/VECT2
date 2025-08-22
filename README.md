# vect2

A simple 2D vector class in C++.

## What it does

Creates a 2D vector with x and y coordinates that you can do math with.

## Files

- `vect2.hpp` - Header file
- `vect2.cpp` - Implementation
- `main.cpp` - Test program

## How to use

```cpp
#include "vect2.hpp"

// Create vectors
vect2 v1;        // {0, 0}
vect2 v2(3, 4);  // {3, 4}

// Access components
v1[0] = 5;  // x = 5
v1[1] = 6;  // y = 6

// Do math
vect2 sum = v1 + v2;    // {8, 10}
vect2 diff = v1 - v2;   // {2, 2}
vect2 scaled = v1 * 2;  // {10, 12}

// Print
std::cout << v1 << std::endl;  // {5, 6}
```

## Compile

```bash
c++ -o test main.cpp vect2.cpp
./test
```

## What works

- Add/subtract vectors: `v1 + v2`, `v1 - v2`
- Multiply by number: `v * 2`, `3 * v`
- Access components: `v[0]`, `v[1]`
- Compare: `v1 == v2`, `v1 != v2`
- Print: `std::cout << v`