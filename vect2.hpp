#ifndef VECT2_HPP
#define VECT2_HPP

	#include <ostream>

	class vect2
	{
		private:
			long long _x;
			long long _y;
		public:
			vect2();
			vect2(long long x, long long y);
			vect2(const vect2& other);
			vect2& operator=(const vect2& other);
			~vect2();

			friend std::ostream& operator<<(std::ostream& os, const vect2& rhs);

			long long int& operator[](size_t index);
			long long int operator[](size_t index) const;
			vect2 operator++(int);
			vect2& operator++();
			vect2 operator--(int);
			vect2& operator--();
			vect2 operator+(const vect2& other) const;
			vect2& operator+=(const vect2& other);
			vect2 operator-(const vect2& other) const;
			vect2& operator-=(const vect2& other);
			vect2 operator*(long long number) const;
			friend vect2 operator*(long long number, const vect2& rhs);
			vect2& operator*=(long long number);
			vect2 operator-() const;
			bool operator==(const vect2& other) const;
			bool operator!=(const vect2& other) const;
	};

#endif