//
//  main.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/20/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size)
{
    int* extrabig = new int[2*size];
    for (int i = 0; i < size; i++)
    {
        extrabig[i]=list[i];
    }

    delete list;
    return extrabig;
    
}


int main()
{
    
    int* list = new int[3]; // {1,2,3}
    
    list = doubleCapacity(list, 3);
    
    
    cout << list;
    cout << doubleCapacity(list,3);
    delete list;
    
    
    
    
    
    
    
    int size = 0;                       //initial value of size
    
    cout << "Please enter the size of the array: ";
    
    cin >> size;                        //have user enter value of size
    
    int* array = new int[size];         //dynamically create the array based on the size the user entered.
    
    for (int i=0; i < size; i++)
        
    {
        cout << "Enter value: ";
        cin >> array[i];                                        //read in that many 'ints' into the array
    }
    
    
    
    delete[] array;
    
    return 0;
}