#include <bits/stdc++.h>
using namespace std;
struct Point{
  double x;
  double y;
  Point(double x, double y):x(x),y(y){}
};
Point centerOfMass(vector<Point> pol){
  int n = pol.size();
  double Area = 1;
  double cx = 0, cy = 0;
  for(int i = 0; i < n ; i ++){
   int j = (i+1)%n;
   double value = (pol[i].x * pol[j].y - pol[j].x * pol[i].y);
   cx += (pol[i].x + pol[j].x) * value;
   cy += (pol[i].y + pol[j].y) * value;
  }
  cx /= (Area*6);
  cy /= (Area*6); 
  return Point(cx,cy);
}
int main(){
  vector<Point> puntos;
  puntos.push_back(Point(0,0));
  puntos.push_back(Point(0,1));
  puntos.push_back(Point(1,1));
  puntos.push_back(Point(1,0));
  Point p = centerOfMass(puntos);
  cout<<p.x<<" "<<p.y<<endl;
  for(int i = 0 ; i < puntos.size(); i++){
    cout<<puntos[i].x<<endl;
  }

}
