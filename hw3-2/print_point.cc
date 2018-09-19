#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

Point getScale2xPoint(const Point*);
void swapPoint(Point& p1, Point& p2);

int main()
{
	Point wonbon;
	scanf("%d %d", &wonbon.xpos, &wonbon.ypos);
	printf("Calling getScale2xPoint()\n");
	Point sabon = getScale2xPoint(&wonbon);
	printf("p1 : %d %d\np2 : %d %d\n", wonbon.xpos, wonbon.ypos, sabon.xpos, sabon.ypos);
	printf("Calling swapPoint()\n");
	swapPoint(wonbon, sabon);
	printf("p1 : %d %d\np2 : %d %d\n", wonbon.xpos, wonbon.ypos, sabon.xpos, sabon.ypos);
	return 0;
}

Point getScale2xPoint(const Point* p)
{
	Point result;
	result.xpos = (p -> xpos) * 2;
	result.ypos = (p -> ypos) * 2;
	return result;
}

void swapPoint(Point& p1, Point& p2)
{
	int tmpx = p1.xpos;
	int tmpy = p1.ypos;
	p1.xpos = p2.xpos;
	p1.ypos = p2.ypos;
	p2.xpos = tmpx;
	p2.ypos = tmpy;
}
