#ifndef USERDEFINEDTYPES_HPP
#define USERDEFINEDTYPES_HPP

namespace userdefined{
struct Structure{
    int sz; 
    double d; 
    double* p; 
};

struct Entry{
    char name; 
    int value; 
};

class Vector{
    public:
        Vector(int s);
        Vector(const Vector& a); 
        Vector& operator=(const Vector&);
        Vector(Vector&& a); 
        Vector& operator=(const Vector&& a);  
        double& operator[](int i); 
        int size();
    private: 
        double* elem; 
        int sz; 
};

double sqrt_sum(Vector& v); 

enum class Color{red,blue,green};
Color& operator++(Color& c); 
Entry read_entry();

}



#endif