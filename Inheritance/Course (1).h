#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
  private: 
     string courseNum;
     string courseTit;



  // TODO: Declare mutator functions 
  //       SetCourseNumber(), SetCourseTitle()

  public:

      void SetCourseNumber(string num);

      string GetCourseNumber();

      void SetCourseTitle(string tit);

      string GetCourseTitle();

      void PrintInfo();





  // TODO: Declare accessor functions - 
  //       GetCourseNumber(), GetCourseTitle()


  // TODO: Declare PrintInfo()

};

#endif
