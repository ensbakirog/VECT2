#include "vect2.hpp"

vect2::vect2() : _x(0), _y(0) {}

vect2::vect2(long long x, long long y) : _x(x), _y(y) {}

vect2::vect2(const vect2& other) : _x(other._x), _y(other._y) {}

vect2& vect2::operator=(const vect2& other)
{
	if (this != &other)
	{
		_x = other._x;
		_y = other._y;
	}

	return *this;
}

vect2::~vect2() {}

std::ostream& operator<<(std::ostream& os, const vect2& rhs)
{
	os << "{" << rhs[0] << ", " << rhs[1] << "}";

	return os;
}

long long int& vect2::operator[](size_t index)
{
	return index == 0 ? _x : _y;
}

long long int vect2::operator[](size_t index) const
{
	return index == 0 ? _x : _y;
}

vect2 vect2::operator++(int)
{
	vect2 tmp = *this;

	++this->_x;
	++this->_y;

	return tmp;
}

vect2& vect2::operator++()
{
	++this->_x;
	++this->_y;

	return *this;
}

vect2 vect2::operator--(int)
{
	vect2 tmp = *this;

	--this->_x;
	--this->_y;

	return tmp;
}

vect2& vect2::operator--()
{
	--this->_x;
	--this->_y;

	return *this;
}

vect2 vect2::operator+(const vect2& other) const
{
	return vect2(this->_x + other._x, this->_y + other._y);
}

vect2& vect2::operator+=(const vect2& other)
{
	_x += other._x;
	_y += other._y;

	return *this;
}

vect2 vect2::operator-(const vect2& other) const
{
	return vect2(this->_x - other._x, this->_y - other._y);
}

vect2& vect2::operator-=(const vect2& other)
{
	_x -= other._x;
	_y -= other._y;

	return *this;
}

vect2 vect2::operator*(long long number) const
{
	return vect2(this->_x * number, this->_y * number);
}

vect2& vect2::operator*=(long long number)
{
	_x *= number;
	_y *= number;

	return *this;
}

vect2 operator*(long long number, const vect2& rhs)
{
	return vect2(number * rhs._x, number * rhs._y);
}

vect2 vect2::operator-() const
{
	return vect2(-_x, -_y);
}

bool vect2::operator==(const vect2& other) const
{
	return _x == other._x && _y == other._y;
}

bool vect2::operator!=(const vect2& other) const
{
	return !(_x == other._x && _y == other._y);
}