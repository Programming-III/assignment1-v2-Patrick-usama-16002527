#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

    void person :: display(){
        cout<<"the name is "<<name<<"the id is "<<id<<endl;
    }
    
person(string name , int id ){
this ->name =name ;
    this ->id = id ;  
}//constructor 

person(){
delete();
}//destructor

getperson(){
  return person ;  
}
void person::setperson(string name , int id){

    this -> name =name ;
    this ->id = id ;
    
}







// ==================== Student Class Implementation ====================


void student::display(){
    cout<<"the levelyear is "<<yearLevel<<"major is "<<major<<endl;
}

void student ::person(string yearlevel,string major){
    this ->yearlevel=yearlevel;
    this ->major =major ;
    
}//constructor 
person(){
delete();
}//destructor
getstudent(){
return student
}

setstudent(string name , int id){
    this ->name=name;
    this->id=id ;
    
}




// ==================== Instructor Class Implementation ====================

void instructor::display(){
    cout<<"the department is "<<department<<" experienceyears is "<<experienceyears<<endl;
}


instructor(){
    delete()
}
void instructor::instructor(string department , int experienceyears){
    this ->department =department ;
    this ->experienceyears=experienceyears;
    
    
}

getinstructor (){
    return instructor;
}
setinstructor(int yearLevel , string major ){
this ->yearLevel=yearLevel;
 this ->major=major;
    
}



// ==================== Course Class Implementation ====================

addStudent (const Student& s );

void Course::displaycourseinfo(){
   coursecode::displayInfo();
       coursename::displayInfo();
    maxstudents::displayInfo();
    students::displayInfo();
    currentstudents::displayInfo()
    

        cout << "Level: " << level << endl;
    }

}

course(){
    delete();
}

void Course::course(string coursecode ,string coursename, int maxstudents ,Student* students ,int currentstudents ){
this-> coursecode=coursecode;
this->coursename=coursename; 
this->maxstudents=maxstudents;
this->students=students;
this->currentstudents=currentstudents;    
}

setcourse();

getcourse();







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
