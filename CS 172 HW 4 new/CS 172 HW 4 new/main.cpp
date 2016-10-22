//
//  main.cpp
//  CS 172 HW 4 new
//
//  Created by Eric Klicker on 10/20/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
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

int* SmallestElement (const int* field, int number)
{
    //check which element is smallest
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
    delete list;
    
    
    
    //11.5
    
    int number = 0;
    int* field = new int[number];
    
    cout << "Please enter the size of the array: ";
    
    cin >> number;
    for (int i=0; i < number; i++)
        
    {
        cout << "Enter value: ";
        cin >> array[i];
    }
    
    
    

    
    return 0;
}