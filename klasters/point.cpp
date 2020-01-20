#include "point.h"

point::point()
{
	v_arr.resize(0);
}

point::point(uint16_t n)
{
	v_arr.resize(n, 0);
}

point::point(const std::valarray<float>& income)
{
	v_arr = income;
}

bool point::operator==(const point& right) const
{
	auto r = this->v_arr == right.v_arr;
	for (auto& bull : r) {
		if (bull == 0) return false;
	}
	return true;
}

bool point::operator!=(const point& right) const
{
	auto r = this->v_arr == right.v_arr;
	bool tmp = true;
	for (auto& bull : r) {
		if (bull == 0) return true;
	}
	return false;
}

std::istream& operator>>(std::istream& is, point& p)
{
	for (size_t i = 0; i < p.v_arr.size(); ++i) {
		is >> p.v_arr[i];
	}
	return is;
}

std::ostream& operator<<(std::ostream& is, const point& p)
{
	for (size_t i = 0; i < p.v_arr.size(); ++i) {
		is << p.v_arr[i];
	}
	return is;
}
