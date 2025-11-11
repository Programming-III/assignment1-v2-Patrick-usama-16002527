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
setperson(string name , int id){

    this -> name =name ;
    this ->id = id ;
    
}







// ==================== Student Class Implementation ====================


void student::display(){
    cout<<"the levelyear is "<<yearLevel<<"major is "<<major<<endl;
}




// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
