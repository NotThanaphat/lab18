#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double w_overlap = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x, r2.x);
    double h_overlap = min(r1.y, r2.y) - max(r1.y - r1.h, r2.y - r2.h);
    if(w_overlap <= 0 || h_overlap <= 0) return 0;
    return w_overlap * h_overlap;
}