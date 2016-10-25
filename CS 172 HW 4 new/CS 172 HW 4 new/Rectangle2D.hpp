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

                            //create a class for a 2D rectangle
class Rectangle2D
{
private:                    //private variables
    double x;
    double y;
    double width;
    double height;
    
public:                                                     //public functions
    Rectangle2D();
  Rectangle2D( double X, double Y , double w, double h); // some void, some return values
    void setX(int newx);
    double getX();
    
    void setY(int newy);
    double getY();
    
    
    void SetWidth(int newwidth);
    double GetWidth();
    
    void SetHeight(int newheight);
     double GetHeight();
    
    double getArea(double newwidth, double newheight);
    double getPerimeter(double newwidth, double newheight);
    bool contains(double x, double y);
    bool contains(const Rectangle2D &r);  //use a rectangle in the parameter
    bool overlaps(const Rectangle2D &r);
    
    
};





#endif /* Rectangle2D_hpp */
