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
    {
        if(numberOfStudents != capacity)
            students[numberOfStudents] = name;
        numberOfStudents++;
        
        if(numberOfStudents == capacity)
        {
            capacity *= 2;
            string *newList = new string[2*capacity];
            for(int i=0; i < capacity; i++)
                newList[i] = students[i];
            
            for(int i = 0; i < 2*capacity; i++)
                newList[i] = "";
        }
    }
}
//create a function in which we can drop a student
void Course::dropStudent(const string& name)
{
    for(int i=0; i < capacity; i++)
        if(*(getStudents()+i) == name) {
            *(students+i) = "";
            for(int j=0; j < numberOfStudents+1; j++)
                *(students+i) = *(students+i+1);
            numberOfStudents--;
        }
}
//return students
string* Course::getStudents() const
{
    return students;
    
}
void Course::clear()
{
    for(int i=0; i < capacity; i++)
        *(students+i)="";
    numberOfStudents = 0;
}
int Course:: getNumberOfStudents() const
{
    return numberOfStudents;
}





