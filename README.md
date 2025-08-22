# VECT2

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
#include <iostream>

int main()
{
	vect2 v1;			// 0,0
	vect2 v2(1,2);		// 1,2
	const vect2 v3(v2);	// 1,2
	vect2 v4 = v2;		// 1,2

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl; // should be the same as above

	std::cout << "v2: " << v2 << std::endl;
	std::cout << "v3: " << v3 << std::endl;
	std::cout << "v4: " << v4 << std::endl;

	std::cout << v4++ << std::endl;	// 2,3
	std::cout << ++v4 << std::endl;	// 3,4
	std::cout << v4-- << std::endl;	// 2,3
	std::cout << --v4 << std::endl;	// 1,2

	v2+=v3;				// 2,4
	v1-=v2;				// -2,-4
	v2 = v3 + v3 * 2;	// 3,6
	v2 = 3 * v2;		// 9,18
	v2 += v2 += v3;		// 20,40
	v1 *= 42;			// -84,-168
	v1 = v1-v1+v1;

	std::cout << "v1: " << v1 << std::endl;
	std::cout << "-v2: " << -v2 << std::endl;
	std::cout << "v1[1]: " << v1[1] << std::endl;

	v1[1] = 12;
	std::cout << "v1[1]: " << v1[1] << std::endl;
	std::cout << "v3[1]: " << v3[1] << std::endl;

	std::cout << "v1 == v3: " << (v1 == v3) << std::endl;
	std::cout << "v1 == v1: " << (v1 == v1) << std::endl;
	std::cout << "v1 != v3: " << (v1 != v3) << std::endl;
	std::cout << "v1 != v1: " << (v1 != v1) << std::endl;
}
```

## Compile

```bash
c++ -Wall -Wextra -Werror main.cpp vect2.cpp -o program
./program
```

## What works

- Add/subtract vectors: `v1 + v2`, `v1 - v2`
- Multiply by number: `v * 2`, `3 * v`
- Access components: `v[0]`, `v[1]`
- Compare: `v1 == v2`, `v1 != v2`
- Print: `std::cout << v`
