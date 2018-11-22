#ifndef POINT_H
#define POINT_H

#include <iostream>

template <typename T>
class Point {
	T x, y;
public:
	Point();
	Point(T, T);
	Point(Point &o);
	void offset(T, T);
	void set_x(T);
	void set_y(T);
	void print();
	T get_x();
	T get_y();
};


template<typename T>
Point<T>::Point() :x(0), y(0) {}
template<typename T>
Point<T>::Point(T x1, T y1) : x(x1), y(y1) {}
template<typename T>
Point<T>::Point(Point &o) : x(o.x), y(o.y) {}
template<typename T>
void Point<T>::offset(T offset_x, T offset_y) {
	this->x = offset_x;
	this->y = offset_y;
}
template<typename T>
void Point<T>::set_x(T x) {
	this->x = x;
}
template<typename T>
void Point<T>::set_y(T y) {
	this->y = y;
}
template<typename T>
void Point<T>::print() {
	std::cout << "(" << x << "," << y << ")" << std::endl;
}
template<typename T>
T Point<T>::get_x() {
	return x;
}
template<typename T>
T Point<T>::get_y() {
	return y;
}


#endif // POINT_H
