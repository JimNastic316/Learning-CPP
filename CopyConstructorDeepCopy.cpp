// Section 13
// Copy Constructor - Deep Copy 

#include <iostream>
using namespace std;

class Deep{
private:
    int *data;
public:
    void setDataValue(int d){*data = d;}
    int getDataValue(){return *data;}
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    //Destructor
    ~Deep();
};

Deep::Deep(int d){
    data = new int;
    *data = d;
}
/*******************************************THIS IS THE DIFFERENCE ****/
Deep::Deep(const Deep &source)                              
    :Deep(*source.data){    //<------------right here                        
        cout<<"Copy constructor - Deep copy"<<endl;
    }
/**********************************************************************/
Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void displayDeep(Deep s){
    cout<<s.getDataValue()<<endl;
}

int main(){
    
    Deep obj1{100};
    displayDeep(obj1);
    
    Deep obj2{obj1};
    obj2.setDataValue(1000);
    displayDeep(obj2);
    
    return 0;
}
/* Shallow copy, but this causes a crash, which is why need a deep copy

Copy Constructor - Shallow Copy - this causes a crash

#include <iostream>
using namespace std;

class Shallow{
private:
    int *data;
public:
    void setDataValue(int d){*data = d;}
    int getDataValue(){return *data;}
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout<<"Copy constructor - shallow copy"<<endl;
    }

Shallow::~Shallow(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

void displayShallow(Shallow s){
    cout<<s.getDataValue()<<endl;
}

int main(){
    
    Shallow obj1{100};
    displayShallow(obj1);
    
    Shallow obj2{obj1};
    obj2.setDataValue(1000);
    
    return 0;
}
*/



