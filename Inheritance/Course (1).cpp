#include "Course.h"

// TODO: Define mutator functions - 
//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string num) {
   courseNum = num;
}

string Course::GetCourseNumber() {
   return courseNum;

}

void Course::SetCourseTitle(string tit) {
   courseTit = tit;
}

string Course::GetCourseTitle() {
   return courseTit;
}

 void Course::PrintInfo() {
    cout << "Course Information:" << endl;
   cout << "   Course Number: " << courseNum << endl;
   cout << "   Course Title: " << courseTit << endl;
}




// TODO: Define accessor functions - 
//       GetCourseNumber(), GetCourseTitle()


// TODO: Define PrintInfo()
