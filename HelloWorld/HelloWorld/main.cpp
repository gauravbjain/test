//
//  main.cpp
//  HelloWorld
//
//  Created by Gaurav Jain on 15/12/21.
//

#include <iostream>
#include <vector>

template<typename T>
void PrintVector(std::vector<T> const & InVec){
    for (auto itr: InVec)
        std::cout<< std::endl<< itr << " ";
    std::cout << std::endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int> numbers = {10,192,19,12};
    PrintVector(numbers);
    std::vector<int> testNumb(5,0);
    PrintVector(testNumb);
    
    return 0;
}
