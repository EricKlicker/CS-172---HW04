//
//  main.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/20/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
#include "Rectangle2D.hpp"
using namespace std;


//function for 11.3
int* doubleCapacity(const int* list, int size)
{
    int* extrabig = new int[2*size];
    for (int i = 0; i < size; i++)
    {
        extrabig[i]=list[i];
    }
    for (int i = size; i < 2*size; i++) {
        extrabig[i]=0;
    }

    delete list;
    return extrabig;
    
}



// Function for 11.5

int SmallestElement (int* field, int number)
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
    double average = (total/size);
    cout << "The average is: " << average << endl;
    
    int above = 0;
    for (int a = 0; a < size; a++)
    {
        if (array[a] > average)
            above += 1;
    }
    cout << "There are " << above << " integers above the average" << endl;
    
        cout << endl;
    
    delete[] array;

    
    //11.3
    
    int* list = new int[3]; // {1,2,3}
    for (int i=0;i<3;i++) {
        list[i]=i+1;
    }
    
    list = doubleCapacity(list, 3);
    
    for (int i=0; i<6;i++) {
        cout << list[i];
    }
    cout << endl;
    cout << endl;
    delete list;
    
    
    
    //11.5
    
    int number = 0;
    int* field = new int[number];
    
    cout << "Please enter the size of the array: ";
    
    cin >> number;
    for (int b=0; b < number; b++)
        
    {
        cout << "Enter value: ";
        cin >> array[b];
    }
    
    
    cout << "The smallest element in the array is: " << SmallestElement(field, number)<< endl;
    
    
    
    //11.9 Rectangle2D class

    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);
    r1.setX(40);
    r1.getX();
    
    
    
    return 0;
}