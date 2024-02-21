#include <iostream>
#include <vector>
// Test for iso std c++ 20
int main()
{

    std::vector<int> myV;
    myV.push_back(10);
    myV.push_back(20);
    
    // Modern for loop
    for(const int& i : myV) 
    {
        std::cout << "i = " << i << std::endl;
    }

   return 0;
}