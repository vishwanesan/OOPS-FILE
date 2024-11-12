#include<iostream>
using namespace std;

class Shape{
    public:
    virtual int perimeter()=0;
    void setWidth(int w){
        shape_width=w;
    }
    void setHeight(int h){
        shape_height=h;
    }
    friend void printShapeDetails(Shape &s); 
    protected:
        int shape_width;
        int shape_height;
};

class Rectangle:public Shape{
    public:
    int perimeter(){
        return(2*(shape_width+shape_height));
    }
};

class Square: public Shape{
    public:
    int perimeter(){
        return(4*shape_width); 
    }
};


void printShapeDetails(Shape &s) {
    cout << "Width: " << s.shape_width << endl;
    cout << "Height: " << s.shape_height << endl;
}

int main(){
    Rectangle R;
    Square s;
    R.setHeight(10);
    R.setWidth(20);
    s.setWidth(20); 
    cout<<"Perimeter of Rectangle: "<<R.perimeter()<<endl;
    cout<<"Perimeter of Square: "<<s.perimeter()<<endl;
    
   
    cout << "Rectangle Details:" << endl;
    printShapeDetails(R);
    cout << "Square Details:" << endl;
    printShapeDetails(s);
    
    return 0;
}
