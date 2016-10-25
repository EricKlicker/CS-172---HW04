//
//  Rectangle2D.hpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/24/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>

class Rectangle2D
{
private:
    double x;
    double y;
    double width;
    double height;
    
public:
    Rectangle2D();
    void getX();
    void getY();
    void setX();
    void setY();
    void getArea();
    void getPerimeter();
    void contains(double x, double y);
    void contains(const Rectangle2D &r);
    void overlaps(const Rectangle2D &r);
    
    
};





#endif /* Rectangle2D_hpp */
