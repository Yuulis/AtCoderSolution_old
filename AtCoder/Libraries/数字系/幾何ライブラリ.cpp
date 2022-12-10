#include <bits/stdc++.h>

using namespace std;
using lld = long double;

class Point {
private:

public:
    lld x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(lld _x, lld _y) {
        x = _x;
        y = _y;
    }
};

class Vec2 {
private:

public:
    lld x, y;

    Vec2() {
        x = 0,
            y = 0;
    }

    Vec2(const Point& p1, const Point& p2) {
        x = p2.x - p1.x;
        y = p2.y - p1.y;
    }

    lld length() {
        return sqrt(x * x + y * y);
    }

    lld dot(Vec2& v) {
        return x * v.x + y * v.y;
    }

    lld cross(Vec2& v) {
        return x * v.y - y * v.x;
    }
};

class Circle
{
public:
    Point p;
    lld r;

    Circle() = default;

    Circle(Point _p, lld _r) {
        p = _p;
        r = _r;
    }

    int isIntersect(const Circle& c1) {
        Vec2 v = Vec2(p, c1.p);
        lld d = v.length();

        if (d < abs(r - c1.r)) return 1;  // 内包
        else if (d == abs(r - c1.r)) return 2;  // 内接
        else if (abs(r - c1.r) < d && d < r + c1.r) return 3;  // 交差
        else if (d == r + c1.r) return 4;  // 外接
        else return 5;  // 接しない
    }

private:

};