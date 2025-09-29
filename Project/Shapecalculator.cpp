// AIM -> to make a console based c++ program which compares areas of two given shapes and returns which shape has larger area among the two shape.
#include<bits/stdc++.h>
using namespace std;
class shape {
public: // virtual function for area, perimeter and display of shapes
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void display() const = 0;
    virtual ~shape() {} // destructor
    bool operator>(const shape& other) const { // overload operator to compare areas
        return this->area() > other.area();
    }
    bool operator<(const shape& other) const {
        return this->area() < other.area();
    }
};

// creating the derived class from above class

class circle : public shape { 
    double radius;
public:
    circle(double r) : radius(r) {}
    double area() const override {
        return M_PI*radius*radius;
    }
    double perimeter() const override {
        return 2*M_PI*radius;
    }
    void display() const override {
        cout<<"Circle Radius : "<<radius<<endl;
        cout<<"Area : "<<area()<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
    }
};

class rectangle : public shape {
    double width,height;
public:
    rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width*height;
    }
    double perimeter() const override {
        return 2*(height+width);
    }
    void display() const override {
        cout<<"Rectangle: width = "<<width<<", height = "<<height<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};

class square : public shape {
    double side;
public:
    square(double s) : side(s) {}
    double area() const override {
        return side*side;
    }
    double perimeter() const override {
        return 4*(side);
    }
    void display() const override {
        cout<<"Square side : "<<side<<endl;
        cout<<"Area: "<<area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
};

class triangle : public shape {
    double a, b, c;
public: 
    triangle(double side1,double side2,double side3) : a(side1), b(side2), c(side3) {}
    double area() const override {
        double s = perimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } 
    double perimeter() const override {
        return (a + b + c);
    }
    void display() const override {
        cout<<"Triangle : Side 1 = "<<a<<", Side 2 = "<<b<<", Side 3 = "<<c<<endl;
        cout<<"Area : "<<area()<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
    }
};

class ellipse : public shape {
    double a, b;
public:
    ellipse(double x, double y) : a(x), b(y) {}
    double area() const override {
        return M_PI*a*b;
    }
    double perimeter() const override {
        return M_PI * (3*(a + b) - sqrt((3*a + b)*(a + 3*b)));
    }
    void display() const override {
        cout<<"Ellipse : axes = "<<a<<", "<<b<<endl;
        cout<<"Area : "<<area()<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
    }
};

// More Shapes can be added later on as per need

vector<shape*> shapes;
void createCircle() {
    double r;
    cout<<"Enter Radius : ";
    cin>>r;
    shapes.push_back(new circle(r));
}
void createRectangle() {
    double a,b;
    cout<<"Enter width : ";
    cin>>a;
    cout<<"Enter height : ";
    cin>>b;
    shapes.push_back(new rectangle(a, b));
}
void createTriangle() {
    double a,b,c;
    cout<<"Enter the sides : \n";
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    cout<<"c : ";
    cin>>c;
    shapes.push_back(new triangle(a, b, c));
}
void createSquare() {
    double a;
    cout<<"Enter the side : ";
    cin>>a;
    shapes.push_back(new square(a));
}
void createEllipse() {
    double x,y;
    cout<<"Enter the axes : \n";
    cout<<"Axis x : ";
    cin>>x;
    cout<<"Axis y : ";
    cin>>y;
    shapes.push_back(new ellipse(x, y));
}

void displayallshapes() {
    if(shapes.empty()) {
        cout<<"No shape created\n";
        return;
    }
    for(size_t i = 0; i<shapes.size(); i++) {
        cout<<"Shape #"<<i+1<<" :\n";
        shapes[i]->display();
        cout<<endl;
    }
}

void compareshapes() {
    if(shapes.size()<2) {
        cout<<"Need at least 2 shapes to compare\n";
        return;
    }
    int i , j;
    cout<<"Enter the indices of shapes (1-based) : \n";
    cout<<"Index of shape 1 : ";
    cin>>i;
    cout<<"Index of shape 2 : ";
    cin>>j;
    if(i<1 || j<1 || i>shapes.size() || j>shapes.size()) {
        cout<<"Invalid Indices.\n";
        return;
    }
    if(*shapes[i-1] > *shapes[j-1]) {
        cout<<"Shape #"<<i<<" has larger area.\n";
    } else if(*shapes[i-1] < *shapes[j-1]) {
        cout<<"Shape #"<<j<<" has larger area.\n";
    } else {
        cout<<"Both shapes have equal area.\n";
    }
}

void shapeDashboard() {
    int choice;
    while (true) {
        cout << "\n--- Shape Calculator Menu ---\n";
        cout << "1. Create Circle\n";
        cout << "2. Create Rectangle\n";
        cout << "3. Create Square\n";
        cout << "4. Create Triangle\n";
        cout << "5. Create Ellipse\n";
        cout << "6. Display All Shapes\n";
        cout << "7. Compare Two Shapes\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;
        switch (choice) {
            case 1: createCircle(); break;
            case 2: createRectangle(); break;
            case 3: createSquare(); break;
            case 4: createTriangle(); break;
            case 5: createEllipse(); break;
            case 6: displayallshapes(); break;
            case 7: compareshapes(); break;
            case 8:
                cout << "Exiting Shape Calculator.\n";
                return;
            default:
                cout << "Invalid choice.\n";
        }
    }
}

int main () {
    shapeDashboard();
    for(shape* s : shapes) {
        delete s;
    }
    return 0;
}