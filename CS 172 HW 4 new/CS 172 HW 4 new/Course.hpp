//
//  Course.hpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/24/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
using namespace std;


//create class for course with pulice and private
//most of these created via example in book
class Course
{
public:
    Course(const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent (const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    void clear();
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
    
    
};



#endif /* Course_hpp */
