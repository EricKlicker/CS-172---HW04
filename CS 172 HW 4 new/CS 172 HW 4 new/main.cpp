//
//  main.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/20/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
#include "Rectangle2D.hpp"
#include "Course.hpp"
using namespace std;


//function for 11.3
int* doubleCapacity(const int* list, int size)
{
    
    // create a function to double size of array
    int* extrabig = new int[2*size];
    for (int i = 0; i < size; i++)
    {
        extrabig[i]=list[i];
    }
    for (int i = size; i < 2*size; i++) {
        extrabig[i]=0;
    }

    delete list;
    return extrabig;            //double the array size
    
}



// Function for 11.5

int SmallestElement (int* field, int number)        //create a function to find the smallest element in array
{
    int smallest;
    
     smallest = field[0];
    for (int j = 0; j< number; j++)
    {
        
        if (field[j] < smallest)
            smallest = field[j];
        
    }
    return smallest;
    
}

int main()
{
    //11.1
    
    
    int size = 0;                                           //initial value of size
    
    cout << "Please enter the size of the array: ";
    
    cin >> size;                                        //have user enter value of size
    
    int* array = new int[size];            //dynamically create the array based on the size the user entered.
    
    for (int i=0; i < size; i++)
        
    {
        cout << "Enter value: ";
        cin >> array[i];
                                                //read in that many 'ints' into the array
    }
    
    double total = 0;
    for (int k = 0; k < size; k++)
    {
        total += array[k];
        
    }
    double average = (total/size);                  //calculate average of that array and the inputs
    cout << "The average is: " << average << endl;
    
    int above = 0;                                  //determine if there are any arrays above the average
    for (int a = 0; a < size; a++)
    {
        if (array[a] > average)
            above += 1;
    }
    cout << "There are " << above << " integers above the average" << endl;
    
        cout << endl;
    
    delete[] array;                         //always delete array after finished

    
    //11.3
    
    int* list = new int[3]; // {1,2,3}
    for (int i=0;i<3;i++) {
        list[i]=i+1;
    }
    
    list = doubleCapacity(list, 3);     //call the funciton to double capacity of an array of 3
    
    for (int i=0; i<6;i++) {                // output the values in the array
        cout << list[i];
    }
    cout << endl;
    cout << endl;
    delete list;
    
    
    
    //11.5
    
    int number = 0;                                     //create an array
    int* field = new int[number];
    
    cout << "Please enter the size of the array: "; //let the user enter the size of the array
    
    cin >> number;
    for (int b=0; b < number; b++)
        
    {
        cout << "Enter value: ";                    // let the user enter the value of each part of the array
        cin >> array[b];
    }
    
    
    cout << "The smallest element in the array is: " << SmallestElement(field, number)<< endl;
    
    //call the function that determines the smallest element of the array
    
    
    //11.9 Rectangle2D class

    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);
    
    
    cout << "The area of Rectangle 1 is " << r1.getArea(5.5, 4.9) << endl;
    cout << "The perimeter of Rectangle 1 is " << r1.getPerimeter(5.5, 4.9) << endl;
    
    cout << "Does Rectangle 1 contain the point (3, 3)? " << endl; //Test if the bool resulted in true or false
    if(r1.contains(3, 3))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    cout << "Does Rectangle 1 contain Rectangle 2? " << endl;
    if(r1.contains(r2)) //Test if the bool resulted in true or false
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    
    cout << "Does Rectangle 1 overlap with Rectangle 3? " << endl; //Test if the bool resulted in true or false
    if(r1.overlaps(r3))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    
    
    //11.13
    
    Course s1("Math", 20); // use function and create course with 20 slots
    
    s1.addStudent("Eric");          //create several students in the course
    s1.addStudent("Steven");
    s1.addStudent("Micah");
    
    for (int i =0; i < s1. getNumberOfStudents(); i++) //output these students
        cout << *(s1.getStudents()+i) << endl;
    
    s1. dropStudent("Eric"); //implement the drop function
    
    
    for (int i =0; i < s1. getNumberOfStudents(); i++)
        cout << *(s1.getStudents()+i) << endl;          //output the students exlcuding those who have been dropped

    
    
    return 0;
}