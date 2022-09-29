#include "..\include\userdefinedtypes.hpp"
#include <cmath>
#include <stdexcept>
#include <string>
#include <iostream>


namespace userdefined{


Vector::Vector(int s):elem{new double[s]},sz{s}{}
double& Vector::operator[](int i){
    if (i<0 || size() <= i)
        throw std::out_of_range{"Vector:::operator[]"}; 
    return elem[i];
    }


Vector::Vector(const Vector& a):  elem{new double[a.sz]},sz{a.sz}{
    for (int i = 0; i!=sz; i++)
        elem[i] = a.elem[i]; 
} 

Vector& Vector::operator=(const Vector& a){
    double* p = new double[a.sz]; 
    for (int i = 0; i!=sz; i++)
        p[i] = a.elem[i]; 
    delete[] elem; 
    elem  = p; 
    sz = a.sz;
    return *this;  
}


Vector::Vector(Vector&& a): elem{a.elem},sz{a.sz}{
    a.elem = nullptr; 
    a.sz = 0; 
}
int Vector::size(){return sz;}

double sqrt_sum(Vector& v){
    double sum = 0;
    for(int i = 0; i!= v.size(); ++i)
        sum+=std::sqrt(v[i]);
    return sum;
}

Color& operator++(Color& c){
    switch(c){
        case Color::red: return c=Color::blue; 
        case Color::blue: return c=Color::green; 
        case Color::green: return c=Color::red; 
        default: return c=Color::red; 
    }
}

Entry read_entry()
{
    char s; 
    int i; 
    std::cin >> s >>i; 
    return {s,i}; 
}


}