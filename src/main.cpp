#include <iostream>
#include <iomanip>
#include <cstdlib>

#include "../include/hello.hpp"
#include "../include/functions.hpp"
#include "../include/userdefinedtypes.hpp"
#include "../include/classes.hpp"


using namespace std; 

int main()
{
    bool run; 

    cout << "Would you like to run the basic tests? \n";
    char answer = 0; 
    cin >> answer;

    switch(answer){
        case 'y':
            run = true; 
            break; 
        case 'n':
            run = false; 
            break; 
        default: 
            run = false; 
    } 
    if (run){
        hello::say_hello(); 

        double to_square = 212.1; 
        auto squared = functions::square(to_square); 
    
        cout << " Square of " << to_square << " is " << squared << endl;

        auto vector = functions::initialize_vector(); 
        cout << "Vector is " << vector[0] << endl; 

        constexpr double nth_value = 100; 
        // constexpr double test = functions::constsquare(10.1);  //compiler error
        cout << "Constexpr double " << nth_value << endl; 

        functions::array_init(); 

        char test[9] = {'a','b','c','a','b','c','a','b','c'}; 
        auto counted_as = functions::count_x(test,'a'); 
        counted_as = functions::count_x("alexis Gonzalez arguello",'a'); 
        cout << "counted a's " <<  counted_as << endl; 
    }

    //auto e = userdefined::read_entry(); 

    classes::complex a(1,2); 
    classes::complex b(2,3); 
    a+=b; 
    cout << a.real() << endl; 

    userdefined::Structure s; 
    s.sz = 1;
    s.d = 1.1; 
    s.p = &s.d; 

    userdefined::Vector vector(3); 
    vector[0] = 1; 
    vector[1] = 2; 
    vector[2] = 3;
    cout << vector.size() << endl;  

    double sum_sqrt = userdefined::sqrt_sum(vector); 
    std::cout << "Sum sqrt: " << sum_sqrt <<endl; 

    //userdefined::Color x = userdefined::Color::red; 
    //userdefined::Color y{userdefined::Color::blue}; 
    //++x; 
    //bool comparison{y == x};
    //cout << comparison; 





}