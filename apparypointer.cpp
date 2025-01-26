
#include <iostream>
using namespace std;
void test(int* arr1 = new int < 3)
{
    1,2,3
}
int main()
{
    int arr[3] = { 1,2,3 };
    int* ptr = arr;
    //cout << &arr << "\n";
   // cout << &arr[0] << endl;
   // cout << &arr[1] << endl;
    //cout << *ptr << "\n"; //Dereferncing you get the value stored in
                            //the adress of variable pointed at 
    //cout << *(ptr + 1) << "\n";//pointer arithmetic. this is taking the memory of 
    //cout << *(ptr + 2) << "\n";
    for (auto& iterator : arr) // auto  checks the array elemnets datatypes int i=---
    {
        cout << iterator << endl;
    }
    //or---------------------------------------------------------------------------
    int* q = arr;
    for (int* p = arr; p!= q + 3;p++)
    {
        cout << *p << endl;
    }
    //memory of comp is split into two, the steak and heap. variables of a function  are stored in steak
    //unless certain types of variables are 
    return 0;
}

