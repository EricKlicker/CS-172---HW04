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

//create funciton to be able to create a course
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


//get a course name
string Course:: getCourseName() const
{
    return courseName;
}
//create a function to be able to add a student
void Course::addStudent(const string& name)
{
    students[numberOfStudents] = name;
    numberOfStudents++;
}

//create a function in which we can drop a student
void Course::dropStudent(const string& name)
{
    for(int i =0; i < capacity; i++)            //make a for loop that deletes a student, then decrements the slots where the students used to be
        if(*(getStudents()+i)==name)
        {
           *(students+i) = "";
    for (int k =0; k < numberOfStudents; k ++)
        *(students + i) = *(students + i + 1);
    numberOfStudents--;
        }
}

string* Course::getStudents() const
{
    return students;
    
}

int Course:: getNumberOfStudents() const
{
    return numberOfStudents;
}





