#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void OfferedCourse::SetInstructorName(string name) {
   instructorName = name;
}

void OfferedCourse::SetLocation(string location) {
   cLocation = location;
}

void OfferedCourse::SetClassTime(string time) {
   cTime = time;
}

string OfferedCourse::GetInstructorName() {
   return instructorName;
}

string OfferedCourse::GetLocation() {
   return cLocation;
}

string OfferedCourse::GetClassTime() {
   return cTime;
}

void OfferedCourse::PrintInfo() {
   Course::PrintInfo();

}




// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()