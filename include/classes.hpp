#ifndef CLASSES_HPP
#define CLASSES_HPP
#include "../include/userdefinedtypes.hpp"

namespace classes{

class complex{
    double re, im; 
    public: 
        complex(double r,double i): re{r},im{i}{}
        complex(double r): re{r},im{0}{}
        complex(): re{0},im{0}{}

        double real() const{return re;}
        void real(double d){re =d;}
        double image(){return im;}
        void imag(double d){im=d;}

        complex& operator+=(complex z)
        {
            re+= z.re; 
            im+=z.im; 
            return *this;  
        }


};

class Container{
    public:
        virtual double& operator[](int) = 0; 
        virtual int size() const = 0; 
        virtual ~Container(){}; 
};

class Vector_container : public Container{
    public: 
        Vector_container(int s): v(s) {}
        ~Vector_container() {}
        double& operator[](int i)override{return v[i];}
        int size() const override {return 1;}
    private:
        userdefined::Vector v; 
}; 



}

#endif