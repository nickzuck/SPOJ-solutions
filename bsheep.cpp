//Andrew's monotone chain convex hull algorithm 

#include<bits/stdc++.h>

using namespace std ;

class Point{
  public:
	int x, y , pos ;
	Point(){}
	Point(int a, int b , int c){
		x = a ;
		y = b ;
		pos = c ;
	}

	bool operator != (Point &a){
		if(a.x != x || a.y != y){
			return true;
		}
		else{
			return false;
		}
	}

};

bool compare(const Point &a, const Point &b){
	return a.y == b.y ? (a.x == b.x ? a.pos < b.pos : a.x < b.x ): a.y < b.y;
}

double cross(const Point &O, const Point &A, const Point &B){
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

void print(vector<Point> v){
	cout << "Printing vector \n";
	cout << "x\t" << "y\t" << "pos\n" ;
	for(int i = 0 ; i<v.size() ;i++){
		cout << v[i].x << "\t" << v[i].y << "\t" << v[i].pos <<endl;
	}
}

vector<Point> convex_hull(vector<Point> p, int n){

	sort(p.begin(), p.end(), compare);
	// cout << "After sorting\n";
	// print(p);

	int k = 1;
    for(int i = 1 ; i < p.size() ; i++)
        if(p[i-1] != p[i])
            p[k++] = p[i];
 	p.resize(k);
 	n = k ;
 	// print(p);
 	vector<Point> H(2*n);
	k = 0;

	
	for (int i = 0; i < n; ++i) {
		while (k >= 2 && cross(H[k-2], H[k-1], p[i]) <= 0)
			k--;
		H[k++] = p[i];
	}


	// Build upper hull
	for (int i = n-2, t = k+1; i >= 0; i--) {
		while (k >= t && cross(H[k-2], H[k-1], p[i]) <= 0)
			k--;
		H[k++] = p[i];
	}

	// cout << "upper hull completed\n" << endl ;
	H.resize(k-1);
	// cout << "Print final answer\n";
	// print(H);
	// cout << "Returning\n" ;
	return H;
}

long long distanceSquare(Point p1 , Point p2){
	long long dx = (p2.x - p1.x);
	long long dy = (p2.y - p1.y);
	// cout << dx << " "  << dy << endl ;
	return (dx*dx + dy*dy);
}

double hull_perimeter(vector<Point> v, int n){
	double ans = 0;
	for(int i = 0 ; i < n-1; i++){
		ans += sqrt(distanceSquare(v[i], v[i+1]));
		// cout << "Distance till now = " << ans << endl;
	}
	ans += sqrt(distanceSquare(v[n-1], v[0]));
	// cout << "distanceSquare = "<< ans << endl;
	return ans;
}

int main()
{
	int x , y ; 
	
	int t, n ;
	cin >> t ;
	while(t--){
		vector<Point> points;
		cin>> n ;
		// cout << "n = " << n << endl;
		for(int i = 0 ;i <n ;i++){
			cin >> x >> y ;
			points.push_back(Point(x, y, i));
		}

		vector<Point> hullVector;
		std::vector<int> ansIndexes;

		hullVector = convex_hull(points, n);

		// cout << "convex_hull returned\n" ;
		int hullVectorSize = hullVector.size();

		if(hullVectorSize == 0){
			printf("%.2lf\n1\n\n", 0.00);

		}
		else{
			double distance = hull_perimeter(hullVector, hullVectorSize);
			// cout << "distnace calculated\n"  ;
			printf("%.2lf\n", distance);
			for(int i = 0 ; i < hullVectorSize ; i++){
				cout << hullVector[i].pos+1 << " " ;
			}
			cout << "\n\n";
		}
	}

	return 0 ;
}