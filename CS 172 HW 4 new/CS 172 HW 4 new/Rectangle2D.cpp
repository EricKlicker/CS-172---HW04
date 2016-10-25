//
//  Rectangle2D.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/24/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <stdio.h>
#include "Rectangle2D.hpp"
using namespace std;


Rectangle2D::Rectangle2D()
{
    //default values
    x = 0;
    y = 0;
    width = 1;
    height = 1;
  
    
}

Rectangle2D::Rectangle2D (double X, double Y, double w, double h)
{
    x = X;
    y = Y;
    width = w;
    height = h;
    
}

double Rectangle2D::getX()
{
    
    return x;
    
}

double Rectangle2D::getY()
{
    
    return y;
}

void Rectangle2D:: setX(int newx)
{
    
    x = newx;
    
    
}
void Rectangle2D:: setY(int newy)
{
    
    y = newy;
}


void Rectangle2D:: SetWidth(int newwidth)
{
    width = newwidth;
}


double Rectangle2D:: GetWidth()
{
    return width;
}


void Rectangle2D:: SetHeight(int newheight)
{
    height = newheight;
    
}

double Rectangle2D:: GetHeight()
{
    return height;
}


double Rectangle2D:: getArea()
{
    int area;
    area = x * y;
    
    return area;
}

double Rectangle2D:: getPerimeter()
{
    int perimeter;
    perimeter = (2 * x)+ (2 * y);
    return perimeter;
}

double Rectangle2D:: contains(double x, double y)
{
    
}

double Rectangle2D:: contains(const Rectangle2D &r)
{
    
}

double Rectangle2D:: overlaps(const Rectangle2D &r)
{
    
}
