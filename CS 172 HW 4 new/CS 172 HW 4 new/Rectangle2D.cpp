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

//create functions that we can later call in main

Rectangle2D::Rectangle2D (double X, double Y, double w, double h)
{
    x = X;
    y = Y;
    width = w;
    height = h;
    
}
//get value of x
double Rectangle2D::getX()
{
    
    return x;
    
}
//get value of y
double Rectangle2D::getY()
{
    
    return y;
}
//set a new value of x
void Rectangle2D:: setX(int newx)
{
    
    x = newx;
    
    
}
//set a new value of y
void Rectangle2D:: setY(int newy)
{
    
    y = newy;
}

//set new width
void Rectangle2D:: SetWidth(int newwidth)
{
    width = newwidth;
}

//get a value for width
double Rectangle2D:: GetWidth()
{
    return width;
}

//set a new value for height
void Rectangle2D:: SetHeight(int newheight)
{
    height = newheight;
    
}
//return new value of height
double Rectangle2D:: GetHeight()
{
    return height;
}

//get area for rectangle based on new width and new height as parameters
double Rectangle2D:: getArea(double newwidth, double newheight)
{
    int area;
    area = x * y;
    
    return area;
}
//get perimeter based on new width and new height as parameters
double Rectangle2D:: getPerimeter(double newwidth, double newheight)
{
    int perimeter;
    perimeter = (2 * x)+ (2 * y);
    return perimeter;
}
//use bool operator to check if point x, y is within the rectangle
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
//use bool operator to check and see if a new rectangle is withing the old rectangle
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
//use bool operator to see if the new rectangle is overlapping with the old rectangle
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
 
