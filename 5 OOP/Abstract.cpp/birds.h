#include<iostream> 
using namespace std; 
class bird{
public: 
    virtual void fly() = 0; 
    virtual void eat() = 0; 
} ;

class sparrow:public bird
{
public:
    void fly(){
        std::cout<<"sparrow is flying "<<endl; 
    }    
    void eat(){
        std::cout<<"sparrow is eatting " <<endl; 
    }
};

class eagle:public bird
{
public:
    void fly(){
        std::cout<<"eagle is flying fater " <<endl; 
    }    
    void eat(){
        std::cout<<"eagle is eatting harder" <<endl; 
    }
};