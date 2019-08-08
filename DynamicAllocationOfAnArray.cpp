/***************************************************************
* Pointers Section 12 challenge
* Write a C++ function named apply_all that expect two arrays of
* integers and their sizes and dynamically allocates a new array
* of integers whose size is the product of the 2 array sizes.
* 
* The function should loop through the second array and multiply
* each element across each element of array 1 and store the 
* product in the newly allocated array.
* 
* You can also write a print function that expects a pointer to
* an array of integers and its size and display the elements of
* the array.
***************************************************************/
#include <iostream>
using namespace std;

void print(const int *const, size_t);

 
int *apply_all(int *, int, int *, int);


int main()
{
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
    int *results{nullptr};
    
    cout << "Array1: "<<endl;
    print(array1, array1_size);
    
    cout << "Array2: "<<endl;
    print(array2, array2_size);

   
    // Function to dynamically allocate an array that is 15 (5 * 3) big 
    results = apply_all(array1, array1_size, array2, array2_size); 
    print(results,(array1_size*array2_size));

    delete[] results;
    cout<<endl;
    
    return 0;
}

void print(const int *const array, size_t size)
{
    cout << "[ ";
    for(int i=0;i<size;i++)
        cout<< array[i]<<" ";
    cout<<"]"<<endl;
}

int *apply_all(int *array1, int size1, int *array2, int size2)
{
    int *a{};
    int n{0};
    int position{0};
    
    n = size1*size2;
    a = new int[n];
    for (int i=0; i<size1;i++)
    {
        for(int j=0; j<size2;j++)
            {
                a[position]=array1[i] * array2[j];
                position++;
            }
    }
    return a;
}

