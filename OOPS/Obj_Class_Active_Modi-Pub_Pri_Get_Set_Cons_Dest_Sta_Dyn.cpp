#include<iostream>
using namespace std;

//class is a user defined data type
//class name is Health
//the size of every (int) object of class Health is 4 bytes and empty class is 1 bytes
//the size of every (char) object of class Health is 1 bytes and 1 bytes for empty class
class Health
{
    private:
    int health=100;

    public:
    string name;

    //getter function
    int getHealth()
    {
        return health;
    }

    //setter function
    void setHealth(int h)
    {
        health=h;
    }

    //constructor is a special function which is called automatically when an object is created
    Health(string n)
    {
        name=n;
    }

    //destructor is a special function which is called automatically when an object is destroyed
    // memory dealocate
    ~Health()
    {
        cout<<"Destructor called for "<<name<<endl;
    }

    //static allocation <- destructor is called automatically

    //dynamic allocation <- destructor is required to free up the memory
    
};

int main(){


    Health h1("Harry");
    cout<<h1.name<<endl;
    cout<<h1.getHealth()<<endl;

    h1.setHealth(200);
    cout<<h1.getHealth()<<endl;

    //object is a entity which has state/properties and behaviour
    //Health h;

    //. is used to access the members of the class

    //h.health = 100; //error as health is private

    h1.name = "Robot"; //ok as name is public

    cout<<h1.name<<endl;

    cout<<h1.getHealth()<<endl;

    h1.setHealth(200); //ok as setHealth is public

    cout<<h1.getHealth()<<endl;
}