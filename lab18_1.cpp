#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){

	double left1   = R1.x;
    double right1  = R1.x + R1.w;
    double top1    = R1.y;
    double bottom1 = R1.y - R1.h;

    double left2   = R2.x;
    double right2  = R2.x + R2.w;
    double top2    = R2.y;
    double bottom2 = R2.y - R2.h;

    double left_overlap   = max(left1, left2);
    double right_overlap  = min(right1, right2);
    double top_overlap    = min(top1, top2);
    double bottom_overlap = max(bottom1, bottom2);

    if(right_overlap <= left_overlap || 
       top_overlap <= bottom_overlap)
        return 0;

    return (right_overlap - left_overlap) *
           (top_overlap - bottom_overlap);


}
