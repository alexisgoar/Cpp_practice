#include "..\include\functions.hpp"
#include <iostream>

double functions::square(double input){
    return input*input;
}

std::vector<double> functions::initialize_vector(){
    std::vector<double>out{1.1,2.3,132.21,21.3};
    return out; 
}

constexpr double functions::constsquare(double x){
    return x*x; 
} 

void functions::array_init(){
    char v[6] = {'a','b','c','d','e','f'}; 
    char* p = &v[3]; 
    char x = *p; 
    std::cout << v << std::endl; 
    std::cout << p << std::endl; 
    std::cout << x << std::endl; 

    int a[] = {0,1,2,3,4,5,6,7}; 

    for (auto el : a)
        std::cout << el << '\n'; 

    for (auto el : {312,123,12,14,12})
        std::cout << el << '\n'; 

    int x2[] = {1,2,3,4,5};
    for (auto& el : x2){
        ++el; 
        std::cout << el << '\n';
    }
}



int functions::count_x(const char* p, char x){
    if (p==nullptr)
        return 0; 
    int count = 0; 
    while(*p){
        if(*p==x)
            ++count;
        ++p; 
    }
    return count; 
}
