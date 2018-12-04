#ifndef __MYSWAP_H__
#define __MYSWAP_H__

template<typename T>
void myswap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

#endif
