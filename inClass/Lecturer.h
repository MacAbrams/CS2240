//
// macs include
//

#ifndef LECTURER_H
#define LECTURER_H
#include <string>
using std::string;

class Lecturer{
    private:
        string name, office;
        int class1, class2, class3, class4;
    public:
        //constructor
        Lecturer(){
            name = "John Doe";
            office = "Innovation E220";
            class1 = class2 = class3 = class4 = 1000;
        }  
        Lecturer(string name, string office){
            this->name = name;
            this->office = office;
            this->name = name;
            this->name = name;
            this->name = name;
            this->name = name;
            
        }

};

#endif