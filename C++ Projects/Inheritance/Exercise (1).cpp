// Name:DAVID JAMES-NWOKOCHA
// Student Number:200518242
// Date:05-03-2025

// Filename: Exercise.cpp
// Purpose: Exercise for the CS115 inheritance lab

#include <iostream>
#include <math.h> // for sqrt()
using namespace std;

class TwoD
{
 private:
  double x, y; // x and y coordinates
 public:
  // inline implementation of constructors
  TwoD() { cout<<"TwoD default constructor"<<endl; x = y = 0.0; } // default constructor
  TwoD(double i, double j) : x(i), y(j) {cout<<"TwoD constructor with two arguments"<<endl;}


  // inline implementation of member functions
  void setX(double argumentX) { x = argumentX; }
  void setY(double argumentY) { y = argumentY; }
  double getX() const { return x; }
  double getY() const { return y; }
  // get the distance of 2D points
  double getDistance(const TwoD &pointTwo) const;
};

// calculate the distance of two 2D points
double TwoD::getDistance(const TwoD &pointTwo) const
{
  double point1[2];
  double point2[2];
  double dx, dy;
  double distance;

  point1[0] = x;
  point1[1] = y;

  point2[0] = pointTwo.getX();
  point2[1] = pointTwo.getY();

  dx = point2[0] - point1[0];
  dy = point2[1] - point1[1];

  distance = sqrt(dx * dx + dy * dy);
  return distance;
}

class ThreeD : public TwoD
{
 private:
  double z;

 public:
  // --->ADD CODE HERE<---:
  // Create a default inline constructor that reuses the constructor of
  // the TwoD class.
  ThreeD():TwoD(){z=0.0;}// YOUR CODE GOES HERE

  // --->ADD CODE HERE<---:
  // Create an inline constructor that initializes the 3D point
  // and reuses the TwoD class.
 ThreeD(double i, double j, double k):TwoD(i,j){z=k;} // YOUR CODE GOES HERE
 

  void setZ(double argumentZ) { z = argumentZ; }
  double getZ() const { return z; }

  // get the distance between two 3D points
  double getDistance(const ThreeD &pointTwo) const;
};

// --->ADD CODE HERE<---:
// Overload the definition of getDistance() of TwoD class so that it
// can calculate the distance between two 3D points
double ThreeD::getDistance(const ThreeD &pointTwo) const
{
  double point1[3];
  double point2[3];
  double dx, dy, dz;
  double distance;
  
  point1[0] = getX();
  point1[1] = getY();
  point1[2] = z;

  point2[0] = pointTwo.getX();
  point2[1] = pointTwo.getY();
  point2[2] = pointTwo.getZ();

  dx = point2[0] - point1[0];
  dy = point2[1] - point1[1];
  dz = point2[2] - point1[2];

  distance = sqrt(dx * dx + dy * dy + dz * dz);
  return distance;// YOUR CODE GOES HERE:
}

// --->ADD CODE HERE<---:
// Implement a main() function.
// You should ask the user for the xyz coordinates of two 3D points,
// and then calculate and print out the distance between these two points.
int main()
{
  ThreeD obj1;
  double x1,y1,z1,x2,y2,z2;
  cout<<"Please enter the xyz coordinates for the first point: "<<endl;
  cin>>x1>>y1>>z1;
  cout<<"Please enter the xyz coordinates for the second point: "<<endl;
  cin>>x2>>y2>>z2;
  obj1.setX(x1);
  obj1.setY(y1);
  obj1.setZ(z1);
  ThreeD obj2(x2,y2,z2);
  // YOUR CODE GOES HERE

  // you can store the final result in this variable
  double distance = obj1.getDistance(obj2);
  cout<<"Distance is: "<<distance<<endl;
  
}
