#include "draw_shape.h"

using namespace std;

Canvas::Canvas(const size_t row, const size_t col) {
	_row = row, _col = col;
	canvas = new char*[_row];
	for (int i = 0; i < _row; ++i) canvas[i] = new char[_col];

	for (int i = 0; i < _row; ++i) {
		for (int j = 0; j < _col; ++j) {
			canvas[i][j] = '.';
		}
	}
}

Canvas::~Canvas() {
	for (int i = 0; i < _row; ++i) delete[] canvas[i];
	delete[] canvas;
}	

void Canvas::Resize(const size_t row, const size_t col) {
	for (int i = 0; i < _row; ++i) delete[] canvas[i];
	delete[] canvas;

	_row = row, _col = col;
	
	canvas = new char*[_row];
	for (int i = 0; i < _row; ++i) canvas[i] = new char[_col];

	for (int i = 0; i < _row; ++i) {
		for (int j = 0; j < _col; ++j) {
			canvas[i][j] = '.';
		}
	}
}

bool Canvas::DrawPixel(const int x, const int y, const char brush) {
	if (x >= _col || y >= _row || x < 0 || y < 0) return false;
	canvas[y][x] = brush;
	return true;
}

void Canvas::Print() const {
	cout << " ";
	for (int i = 0; i < _col; ++i) cout << i % 10;
	cout << endl;
	for (int i = 0; i < _row; ++i) {
		cout << i % 10;
		for (int j = 0; j < _col; ++j) cout << canvas[i][j];
		cout << endl;
	}
}

void Canvas::Clear() {
	for (int i = 0, j = 0; i < _row; ++j, i += j == _col, j %= _col) canvas[i][j];
}

void Rectangle::Draw(Canvas* canvas) const {
	for (int i = y; i < y + height; ++i) {
		for (int j = x; j < x + width; ++j) {
			canvas->DrawPixel(j, i, brush);
		}
	}
}

void UpTriangle::Draw(Canvas* canvas) const {
	for (int i = y, tmp = 0; i < y + height; ++i, ++tmp) {
		for (int j = x - tmp; j <= x + tmp; ++j) {
			canvas->DrawPixel(j, i, brush);
		}	
	}
}

void DownTriangle::Draw(Canvas* canvas) const {
	for (int i = y, tmp = 0; i > y - height; --i, ++tmp) {
		for (int j = x - tmp; j <= x + tmp; ++j) {
			canvas->DrawPixel(j, i, brush);
		}	
	}
}

void Diamond::Draw(Canvas* canvas) const {
	int tmp = 0;
	for (int i = y; i < y + height; ++i) {
		for (int j = x - tmp; j <= x + tmp; ++j) {
			canvas->DrawPixel(j, i, brush);
		}	
		++tmp;
	}
	for (int i = y + tmp; tmp >= 0; ++i, --tmp) {
		for (int j = x - tmp; j <= x + tmp; ++j) {
			canvas->DrawPixel(j, i, brush);
		}
	}
}
