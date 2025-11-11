#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here

 class course {

private :
string coursecode ;
string coursename ;
int maxstudents ;
Student* students ;
int currentstudents ;

public :

addStudent (const Student& s );
displaycourseinfo();
course();
course();
setcourse();
getcourse();

  

}

#endif
