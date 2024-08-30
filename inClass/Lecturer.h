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
        Lecturer(string name, string office ,int class1 ,int class2 ,int class3 ,int class4){
            this->name = name;
            this->office = office;
            this->class1 = class1;
            this->class2 = class2;
            this->class3 = class3;
            this->class4 = class4;
            
        }
        string getName() const{
            return name;
        }

        void setName(){
            this-> name = name;
        }
};

#endif