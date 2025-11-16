#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

#include <string>


typedef struct rectangle_struct{
private:
    double width;
    double height;
public:
    double getArea() const {
        return width * height;
    }

    double getCircum() const {
        return 2 * (width + height);
    }

    void setWidth(double value){
        width=value;
    }

    void setHeight(double value){
        height=value;
    }

}
rectangle;






#endif // RECTANGLE_H
