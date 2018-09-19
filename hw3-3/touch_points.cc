#include <stdio.h>
#include <math.h>

typedef struct {
	double x;
	double y;
} Point;

typedef struct {
	char name[7];
	Point points[3];
} Person;

int main()
{
	Person saramdul[3];
	for (int i = 0; i < 3; i++) {
		scanf("%s", saramdul[i].name);
		for (int j = 0; j < 3; j++) {
			scanf("%lf %lf", &saramdul[i].points[j].x, &saramdul[i].points[j].y);
		}
	}

	for (int i = 0; i < 3; i++) {
		printf("%s ", saramdul[i].name);
		double chaedae = 0, cdx, cdy;
		double tmp = 0;
		for (int j = 0; j < 3; j++) {
			tmp = pow(saramdul[i].points[j].x, 2) + pow(saramdul[i].points[j].y, 2);
			if (tmp > chaedae) {
				chaedae = tmp;
				cdx = saramdul[i].points[j].x;
				cdy = saramdul[i].points[j].y;
			}
		}
		printf("(%g, %g)\n", cdx, cdy);
	}
	return 0;
}
