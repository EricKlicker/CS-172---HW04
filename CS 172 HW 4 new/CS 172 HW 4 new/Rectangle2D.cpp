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


double Rectangle2D:: getArea(double newwidth, double newheight)
{
    int area;
    area = x * y;
    
    return area;
}

double Rectangle2D:: getPerimeter(double newwidth, double newheight)
{
    int perimeter;
    perimeter = (2 * x)+ (2 * y);
    return perimeter;
}

bool Rectangle2D:: contains(double x, double y)
{
    int xmax;
    int xmin;
    int ymax;
    int ymin;
    
    xmax = x + (width / 2);
    xmin = x - (width / 2);
    ymax = y + (height / 2);
    ymin = y - (height /2);
    
    if ( x < xmax && x > xmin && y < ymax && y > ymin)

       return true;
    else
        return false;
}

bool Rectangle2D:: contains(const Rectangle2D &r)
{
    int xmax;
    int xmin;
    int ymax;
    int ymin;
    
    xmax = x + (width / 2);
    xmin = x - (width / 2);
    ymax = y + (height / 2);
    ymin = y - (height / 2);
    
    if (r.x < xmax && r.x > xmin && r.y < ymax && r.y > ymin)
    
    return true;
    else
        return false;
}

bool Rectangle2D:: overlaps(const Rectangle2D &r)
{
    int xmax;
    int xmin;
    int ymax;
    int ymin;
    
    xmax = x + (width / 2);
    xmin = x - (width / 2);
    ymax = y + (height / 2);
    ymin = y - (height /2);
    
    
if ( xmax <= r.x && xmin >= r.x && ymax <= r.y && ymin >= r.y)
    return false;

    if ((xmax < r.x ||xmin > r.x) && (ymax < r.y || ymin > r.y))
        return true;
    else
        return false;
}
 
