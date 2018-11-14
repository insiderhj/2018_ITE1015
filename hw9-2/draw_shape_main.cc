#include <iostream>
#include <vector>
#include <string>
#include "draw_shape.h"

using namespace std;

int main() {
	vector<Shape*> shapes;

	int cheight, cwidth;
	cin >> cheight >> cwidth;

	Canvas canvas(cheight, cwidth);
	canvas.Print();

	string cmd;
	while (true) {
		cin >> cmd;

		if (cmd == "quit") break;
		else if (cmd == "draw") {
			canvas.Print();
		} else if (cmd == "dump") {
			int idx = 0;
			for (auto shape : shapes) {
				cout << idx << " ";
				shape->printInfo();
				idx++;
			}
		} else if (cmd == "delete") {
			int idx;
			cin >> idx;
			if (shapes.size() > idx) shapes.erase(shapes.begin() + idx);
			canvas.Resize(cheight, cwidth);
			for (auto shape : shapes) shape->Draw(&canvas);
		} else if (cmd == "resize") {
			cin >> cheight >> cwidth;
			canvas.Resize(cheight, cwidth);
			for (auto shape : shapes) shape->Draw(&canvas);
		} else if (cmd == "add") {
			string type;
			int x, y;
			char brush;
			cin >> type >> x >> y;

			if (type == "rect") {
				int height, width;
				cin >> height >> width >> brush;
				auto rect = new Rectangle(x, y, height, width, brush);
				shapes.push_back(rect);
				rect->Draw(&canvas);
			} else if (type == "tri_up") {
				int height;
				cin >> height >> brush;
				auto tri = new UpTriangle(x, y, height, brush);
				shapes.push_back(tri);
				tri->Draw(&canvas);
			} else if (type == "tri_down") {
				int height;
				cin >> height >> brush;
				auto tri = new DownTriangle(x, y, height, brush);
				shapes.push_back(tri);
				tri->Draw(&canvas);
			} else if (type == "diamond") {
				int distance;
				cin >> distance >> brush;
				auto dia = new Diamond(x, y, distance, brush);
				shapes.push_back(dia);
				dia->Draw(&canvas);
			}
		}
	}

	return 0;
}
