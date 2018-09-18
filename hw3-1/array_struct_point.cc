#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

void scale2x(Point*);

int main()
{
	Point points[3];

	for (int i = 0; i < 3; i++) scanf("%d %d", &points[i].xpos, &points[i].ypos);
	for (int i = 0; i < 3; i++) {
		scale2x(points + i);
		printf("[%d] %d %d\n", i, (points + i) -> xpos, (points + i) -> ypos);
	}
	
	return 0;
}

void scale2x(Point* pp)
{
	pp -> xpos *= 2;
	pp -> ypos *= 2;
}
