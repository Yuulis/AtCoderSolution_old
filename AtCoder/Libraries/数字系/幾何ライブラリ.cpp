#include <bits/stdc++.h>
#include <cassert>

// 浮動小数点誤差
const double EPS = 1e-10;

// aの正負判定(EPS考慮)
int sgn(const double a) {
	return (a < -EPS ? -1 : (a > EPS ? +1 : 0));
}


// ２次元ベクトル
struct Point {
	long double x, y;
	Point() {
		x = 0, y = 0;
	}
	Point(double _x, double _y) {
		x = _x, y = _y;
	}

	// 演算
	Point operator+() const {
		return *this;
	}
	Point operator-() const {
		return{ -x, -y };
	}
	Point operator+ (const Point& b) const {
		return{ x + b.x, y + b.y };
	}
	Point operator- (const Point& b) const {
		return{ x - b.x, y - b.y };
	}
	Point operator* (const double b) const {
		return{ x * b, y * b };
	}
	Point operator/ (const double b) const {
		return{ x / b, y / b };
	}
	Point operator+= (const Point& b) {
		x += b.x, y += b.y;
		return *this;
	}
	Point operator-= (const Point& b) {
		x -= b.x, y -= b.y;
		return *this;
	}
	Point operator*= (const double b) {
		x *= b, y *= b;
		return *this;
	}
	Point operator/= (const double b) {
		x /= b, y /= b;
		return *this;
	}
	bool operator== (const Point& b) {
		return b.x == x && b.y == y;
	}

	// ベクトルの長さ
	double length() const {
		return std::sqrt(x * x + y * y);
	}

	// 内積
	double dot(const Point& b) const {
		return x * b.x + y * b.y;
	}

	// 外積
	double cross(const Point& b) const {
		return x * b.y - y * b.x;
	}

	// 2ベクトルの距離
	double distanceFrom(const Point& b) const {
		return std::sqrt((x - b.x) * (x - b.x) + (y - b.y) * (y - b.y));
	}

	// 単位ベクトル化
	Point normalized() const {
		return{ x / length(), y / length() };
	}

	// ゼロベクトル判定
	bool isZero() const {
		return sgn(x) == 0 && sgn(y) == 0;
	}

	// 単位法線ベクトル
	Point normalUnitVector() const {
		return{ -normalized().y, normalized().x };
	}
	// 原点中心にarg(弧度法)回転した座標
	Point rotate(double arg) const {
		double cs = cos(arg), sn = sin(arg);
		return Point(x * cs - y * sn, x * sn + y * cs);
	}
	// 原点中心の円上にあるとしたときの偏角
	double angle() const {
		return atan2(y, x);
	}
};

// 2項演算
inline Point operator*(double a, const Point& b) {
	return{ b.x * a, b.y * a };
}

// 入出力
template <class Char>
inline std::basic_ostream<Char>& operator <<(std::basic_ostream<Char>& os, const Point& v)
{
	return os << Char('(') << v.x << Char(',') << v.y << Char(')');
}
template <class Char>
inline std::basic_istream<Char>& operator >> (std::basic_istream<Char>& is, Point& v)
{
	return is >> v.x >> v.y;
}

// 解なし時の点の座標
const Point error_val = { 114514.0, -191981.0 };

// 比較演算
inline bool operator==(const Point& a, const Point& b) {
	return (sgn(a.x - b.x) == 0 && sgn(a.y - b.y) == 0);
}
inline bool operator!=(const Point& a, const Point& b) {
	return !(a == b);
}

// `x,yの順に昇順ソートする
inline bool operator<(const Point& a, const Point& b) {
	if (sgn(a.x - b.x) != 0)return sgn(a.x - b.x) < 0;
	else return sgn(a.y - b.y) < 0;
}

/*3点の位置関係
* ABから見てBCは左に曲がるのなら +1
* ABから見てBCは右に曲がるのなら -1
* ABC(CBA)の順番で一直線上に並ぶなら +2
* ACB(BCA)の順番で一直線上に並ぶなら 0
* BAC(CAB)の順番で一直線上に並ぶなら -2
*/
int iSP(const Point& a, const Point& b, const Point& c) {
	int flg = sgn((b - a).cross(c - a));
	if (flg == 1) return 1;
	else if (flg == -1) return -1;
	else {
		if (sgn((b - a).dot(c - b)) > 0) return +2;
		else if (sgn((a - b).dot(c - a)) > 0) return -2;
		// ACB(BCA)　CがA or Bと一致しても、ここに含まれる。
		else return 0;
	}
}

/*角の形状
* 角ABCが鋭角なら0、直角なら1、鈍角なら2
*/
int angletype(const Point& a, const Point& b, const Point& c) {
	auto v = (a - b).dot(c - b);
	if (sgn(v) > 0)return 0;
	else if (sgn(v) == 0)return 1;
	else return 2;
}


// 直線
struct Line {

	Point begin, end;

	// デフォルトコンストラクタ
	Line() {
		begin = Point(), end = Point();
	}

	// 2点指定
	Line(const Point& b, const Point& e) {
		begin = b, end = e;
	}

	// ax+by+c=0 指定
	Line(const double a, const double b, const double c) {
		if (sgn(a) == 0 && sgn(b) == 0) {
			assert(-1);
		}

		if (sgn(b) == 0) {
			// ax+c=0
			begin = Point(-c / a, 0.0);
			end = Point(-c / a, 1.0);
		}
		else {
			// y=-(ax+c)/b　傾きは-a/bで、y切片が-c/b
			begin = Point(0, -c / b);
			end = Point(1.0, -(a + c) / b);
		}
	}

	// 直線のベクトル化
	Point vec() const {
		return end - begin;
	}

	Point countervec() const {
		return begin - end;
	}

};

//半直線
typedef Line Ray;

//線分
typedef Line Segment;


// 直線の交点を返す。交わっていなければ、error_valを返す。
Point lineIntersection(const Line& l1, const Line& l2) {
	if (sgn(l1.vec().cross(l2.vec())) == 0) return error_val;

	Point ret;
	ret = l1.begin + l1.vec() * abs((l2.end - l1.begin).cross(l2.vec()) / l1.vec().cross(l2.vec()));
	return ret;
}

/*線分が共通部分を持つかの判定と線分の交点
* 共通部分がない、もしくは交点が一意ではないなら、error_valを返す。
* trueなら共通部分を持つ。falseなら共通部分を持たない。
*/
std::pair<bool, Point> segmentIntersection(const Segment& s1, const Segment& s2) {

	if (iSP(s1.begin, s1.end, s2.begin) * iSP(s1.begin, s1.end, s2.end) <= 0 &&
		iSP(s2.begin, s2.end, s1.begin) * iSP(s2.begin, s2.end, s1.end) <= 0) {

		// 平行のとき
		if (s1.vec().cross(s2.vec()) == 0) return std::make_pair(true, error_val);

		// Otherwise
		else return std::make_pair(true, lineIntersection(s1, s2));
	}
	return std::make_pair(false, error_val);
}


// 点と直線の距離
double distanceBetweenPointAndLine(const Point& p, const Line& l) {
	return abs(l.vec().cross(p - l.begin) / l.vec().length());
}

// 点と半直線の距離
double distanceBetweenPointAndRay(const Point& p, const Ray& r) {
	//始点との距離のパターン
	if (sgn((p - r.begin).dot(r.vec())) < 0)
		return r.begin.distanceFrom(p);
	return abs(r.vec().cross(p - r.begin) / r.vec().length());
}

// 点と線分の距離
double distanceBetweenPointAndSegment(const Point& p, const Segment& s) {
	if (sgn(s.vec().dot(p - s.begin)) < 0 || sgn(s.countervec().dot(p - s.end)) < 0) {
		//下した垂線は線分の上にはない
		return std::min(p.distanceFrom(s.begin), p.distanceFrom(s.end));
	}
	return distanceBetweenPointAndLine(p, s);
}

// 二線分間の距離
double distanceBetweenSegmentAndSegment(const Segment& s1, const Segment& s2) {
	if (segmentIntersection(s1, s2).first)return 0;

	double ans = distanceBetweenPointAndSegment(s1.begin, s2);
	ans = std::min(ans, distanceBetweenPointAndSegment(s1.end, s2));
	ans = std::min(ans, distanceBetweenPointAndSegment(s2.begin, s1));
	ans = std::min(ans, distanceBetweenPointAndSegment(s2.end, s1));
	return ans;
}

//正射影ベクトル
Point projection(const Point& a, const Line& l) {
	Point ret;
	ret = l.begin +
		l.vec().normalized() * (a - l.begin).dot(l.vec()) / l.vec().length();
	return ret;
}

// 直線BCにおいて、Aと線対称な点
Point reflection(const Point& a, const Line& l) {
	Point res;
	res = a + 2 * (projection(a, l) - a);
	return res;
}


// 円
struct Circle
{
	Point center;
	double radius;
	Circle() {
		center = Point();
		radius = 0;
	}
	Circle(const Point& c, const double& r) {
		center = c;
		radius = r;
	}

	// 直線と円の交点や交わり方の判定
	void intersectionCircleAndLine() const {

	}

	//　線分と円の交点や交わり方の判定
	void intersectionCircleAndSegment() const {

	}

	// 定点を通る円の接線の円との接点
	void tangentToCircle() const {

	}

	// 2円の接線
	void tangentBetweenCircleAndCircle() const {

	}
};

/*円と円の交点と交わり方の判定
	* c1がc2を内包されているなら1を返す。
	* c1がc2に内接しているなら2を返し、交点を1つ出力する。
	* c1とc2が交差しているなら3を返し、交点を2つ出力する。
	* c1がc2に外接しているなら4を返し、交点を1つ出力する。
	* c1とc2が接していないなら5を返す。
	*/
std::pair<int, std::vector<Point>> intersectionCircleAndCircle(const Circle& c1, const Circle& c2) {
	std::vector<Point> res = {};
	double distance = (c2.center - c1.center).length();
	double dVec = (c2.center - c1.center).normalized().length();

	// 内包
	if (distance < abs(c1.radius - c2.radius)) {
		return std::make_pair(1, res);
	}

	// 非接触
	if (distance > c1.radius + c2.radius) {
		return std::make_pair(5, res);
	}

	double rc = (c1.radius * c1.radius + dVec * dVec - c2.radius * c2.radius) / (2 * dVec);
	double rs = sqrt(c1.radius * c1.radius - rc * rc);

	Point e1 = (c2.center - c1.center) / dVec;
	Point e2 = e1.rotate(90);
	Point e3 = e1.rotate(-90);
	Point A = c1.center + e1 * rc + e2 * rs;
	Point B = c1.center + e1 * rc + e3 * rs;

	res.push_back(A);
	res.push_back(B);

	// 内接
	if (distance == abs(c1.radius - c2.radius)) {
		return std::make_pair(2, res);
	}

	// 外接
	if (distance == c1.radius + c2.radius) {
		return std::make_pair(4, res);
	}

	// 交差
	return std::make_pair(3, res);
}