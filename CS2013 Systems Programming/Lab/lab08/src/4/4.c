#include <stdio.h>

// Define structures Rectangle and Point
struct point {
	float x;
	float y;
};
struct rect {
	float height;
	float width;
	struct point corner;
};

typedef struct point Point;
typedef struct rect Rectangle;

//TODO: Complete the code

Point FindCenter(const Rectangle r){
	//TODO: Complete the code
	Point center;
	center.x = r.corner.x+(r.width/2);
	center.y = r.corner.y+(r.height/2);

	return center;
}


int main()
{
	Point corner_bl, center;
	float height, width;

	scanf("%f %f", &corner_bl.x, &corner_bl.y);
	scanf("%f %f", &height, &width);
	
	//TODO: Complete the code
	Rectangle r;
	r.height = height;
	r.width = width;
	r.corner = corner_bl;

	center = FindCenter(r);
	printf("%.4f %.4f", center.x, center.y);
	//Do not add/modify anything below this line
	return 0;
}

