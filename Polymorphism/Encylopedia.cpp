#include "Encyclopedia.h"
#include <iostream>

 void Encyclopedia::SetEdition(string Edition){
    edition = Edition;
 }
   void Encyclopedia::SetNumPages(int Pages){
      numPages = Pages;
   }



   // TODO: Declare accessor functions -
   //       GetEdition(), GetNumPages()
   string Encyclopedia::GetEdition(){
      return edition;
   }
   int Encyclopedia::GetNumPages() {
      return numPages;
   }



   // TODO: Declare a PrintInfo() function that overrides
   //       the PrintInfo() in Book class
   void Encyclopedia::PrintInfo(){
      Book::PrintInfo();
      cout << "   Edition: " << edition << endl;
      cout << "   Number of Pages: " << numPages << endl;
   }

