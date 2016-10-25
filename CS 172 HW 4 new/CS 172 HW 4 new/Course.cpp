//
//  Course.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/24/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.re
//

#include "Course.hpp"
#include <iostream>
using namespace std;

Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
    
}

Course::~Course()
{
    delete [] students;
}



string Course:: getCourseName() const
{
    return courseName;
}

void Course::addStudent(const string& name)
{
    students[numberOfStudents] = name;
    numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
    
    
}

string* Course::getStudents() const
{
    return students;
    
}

int Course:: getNumberOfStudents() const
{
    return numberOfStudents;
}





