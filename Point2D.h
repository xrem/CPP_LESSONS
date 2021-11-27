#pragma once
template <typename T>
class Point2D
{
public:
	T x;
	T y;
	Point2D(T x, T y) {
		this->x = x;
		this->y = y;
	}
};

