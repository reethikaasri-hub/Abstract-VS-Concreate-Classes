#include <iostream>
 #include <string>
 using namespace std;
class Shape {
 public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
 };
 class Circle : public Shape {
 private:
    double radius;
 public:
    Circle(double r) : radius(r) {}
    void draw() const override {
        cout << "Drawing a Circle with radius: " << radius << endl;
    }
 };
 class Rectangle : public Shape {
 private:
    double length, width;
 public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void draw() const override {
        
cout << "Drawing a Rectangle with length: " << length << " and width: " << width << endl;
    }
 };
int main() {
     Shape s; 
    Circle c(5.5);
    Rectangle r(4.0, 6.0);
    c.draw();
    r.draw();
     Shape* shape1 = new Circle(3.2);
    Shape* shape2 = new Rectangle(2.5, 7.8);
    shape1->draw();
    shape2->draw();
    delete shape1;
    delete shape2;
    return 0;
 }

