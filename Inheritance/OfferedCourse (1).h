#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
  private:
     string instructorName;
     string cLocation;
     string cTime;

   public:


  // TODO: Declare mutator functions -
  //      SetInstructorName(), SetLocation(), SetClassTime()
 void SetInstructorName(string name);

 void SetLocation(string location);

 void SetClassTime(string time);

 string GetInstructorName();

 string GetLocation();

 string GetClassTime();

 void PrintInfo();


  // TODO: Declare accessor functions -
  //      GetInstructorName(), GetLocation(), GetClassTime()


};

#endif