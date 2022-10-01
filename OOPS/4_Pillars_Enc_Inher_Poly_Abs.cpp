#include<iostream>
using namespace std;

//Encapsulation is a process of wrapping data M and functions together as a single unit
//Encapsulation is also known as data hiding
//pura Health ka class encapsulation pe hai private ke sath
class Health{
    
    private:
    int health=100;
    string name;

};

//Inheritance is a process of inheriting the properties of one class to another class (Health->Male)
class Male: public Health{
    public:
    string color;

    public:
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};

//Inheritance types: 
//Single level (Animal->Dog)
class Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Dog: public Animal{
    
};

//Multi level (Animal->Dog->Pug)
class Pug: public Dog{
    
};

//Multiple (Parent A + Parent B = Child)
class A{
    public:
    void funcA(){
        cout<<"Function A"<<endl;
    }
};

class B{
    public:
    void funcB(){
        cout<<"Function B"<<endl;
    }
};

class C: public A, public B{
    
};

//Herarchical (Parent->Child A, Child B)
class Parent{
    public:
    void funcP(){
        cout<<"Function P"<<endl;
    }
};

class ChildA: public Parent{
    public:
    void funcCA(){
        cout<<"Function AP"<<endl;
    }
};

class ChildB: public Parent{
    public:
    void funcCB(){
        cout<<"Function BP"<<endl;
    }
};

//Hybrid Combination of Inheritance types // (Herarchical + Multiple = Hybrid)
class Parent1{
    public:
    void funcP1(){
        cout<<"Function P1"<<endl;
    }
};

class Child1A: public Parent1{
    public:
    void funcC1A(){
        cout<<"Function C1A"<<endl;
    }
};

class Parent2{
    public:
    void funcP2(){
        cout<<"Function P2"<<endl;
    }
};

class Child1B: public Parent1, public Parent2{
    public:
    void funcC1B(){
        cout<<"Function C1B"<<endl;
    }
};

//Inheritance Ambiguity (when two classes have same function name = Ambiguity)
class A1{
    public:
    void funA1(){
        cout<<"Function A1"<<endl;
    }
};

class B1{
    public:
    void funA1(){
        cout<<"Function A1"<<endl;
    }
};

class C1: public A1, public B1{
        
};

//Polymorphism (Poly = Many, Morphism = Forms) Eg: -Dad-
/* Types: 1. Compile time Polymorphism (Function Overloading) + (Operator Overloading)
          2. Run time Polymorphism (Function Overriding)
*/

//Compile time Polymorphism (Function Overloading)
class Overloading{
    public:
    void func(int a){
        cout<<"Function 1"<<endl;
    }
    // void func(int a){ //Error: Duplicate function
    // therefore we use different parameters to avoid Overloading error
    void func(int a, int b){
        cout<<"Function 2"<<endl;
    }
};

//Run Time - Overriding
class Overriding{
    public:
    //this will execute only when Overriding2 func is not present
    void func(){
        cout<<"Function 1"<<endl;
    }
};

class Overriding2: public Overriding{
    public:
    //this executes when we call the function of Overriding2
    void func(){
        cout<<"Function 2"<<endl;
    }
};

//Abstraction (Implementation Hiding and showing only functionality to the user)
class Abstraction{
    private:
    int a=10;
    public:
    void func(){
        cout<<"Function 1"<<endl;
    }
};

int main(){
    //Single
    Animal a;
    a.bark();
    cout<<endl;

    //Multi level
    Pug p;
    p.bark();
    cout<<endl;

    //Multiple
    C c;
    c.funcA();
    cout<<endl;

    //Heirarchical
    Parent obj;
    obj.funcP();

    ChildA obj1;
    obj1.funcCA();

    ChildB obj2;
    obj2.funcCB();
    cout<<endl;

    //Hybrid
    Child1A C1A;
    C1A.funcC1A();

    Child1B C1B;
    C1B.funcC1B();
    cout<<endl;

    //Ambiguity
    C1 objj;
    //objj.funA1() //Error: Ambiguity;
    objj.A1::funA1();
    cout<<endl;

    //Overloading
    Overloading o;
    o.func(1);
    o.func(1,2);
    cout<<endl;

    //Overriding
    Overriding2 o2;
    o2.func();
    cout<<endl;

    //Abstraction
    Abstraction a1;
    a1.func();
    //a1.a //Error: a is hidden
    cout<<endl;
}