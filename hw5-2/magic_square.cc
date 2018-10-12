#include "magic_square.h"
#include <iostream>

using namespace std;

void fill_in(int** arr, int size)
{
	int x = size / 2, y = 0;
	for (int i = 1; i <= size * size; i++) {
		arr[y][x] = i;
		if (i % size == 0) {
			++y %= size;
		} else {
			++x %= size;
			--y;
			if (y == -1) y += size;
		}
	}
}
