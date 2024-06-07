/* Declan Ferguson
 * 5 May 2024
 * CS211
0
* Program creates a stack. It has member functions pop(), top(), and isEmpty(). pop removes the item on the top of the
 * stack and returns said item. top simply returns the first item without removing it. isEmpty returns true if the stack
 * is empty.
 *
 * Test Data:
 * After creating my first function, I made another function that prints out the whole stack. I intitalize an object of type
 * Stack. I have myself input numbers to be push onto the stack. Then I print to make sure the function works as intended. Each function
 * I made I then tested them all with integer type Stacks. Finally I tested with integers Floats and strings.
 **/
#include <iostream>

#include <string>
#include <vector>



template<typename T>
class Stack {
private:
 std::vector<T> elements;

public:
 /* Push() checks to see if elements is empty. If it is not empty it uses insert function to insert element at the first
  index. If it is empty it uses push_back();*/
 void Push(const T& item)
 {
  if (!elements.empty())
  {
   elements.insert(elements.begin(), item);
  }
  else
  {
   elements.push_back(item);
  }
 }
 /* Pop() returns the first element and erases it taking out an element from the stack. It does this by assigning the first index to a temporary variable. Using the erase
  * function. Then finally, it returns the temp variable. */
 T pop() 
 {
  if (elements.empty())
  {
   std::cout << " Stack is empty";
  }
  T temp = elements.front();
  elements.erase(elements.begin());
  return temp;
 }
 /* top() simply returns the first element of the stack*/
 T top() const
 {
  T temp = elements.front();
  return temp;
 }
  
 
/* isEmpty() checks if the list elements is empty. if it is empty it returns true. Else it returns false. */
 bool isEmpty() const
 {
  if (elements.empty())
  {
   return true;
  }
  else
  {
   return false;
  }
 }
 // Pretty simple print function I used for debugging.
 void PrintStack()
 {
  for (size_t i = 0; i < elements.size(); i++)
  {
   std::cout << elements.at(i) << " ";
  }
 }   
};
int main()
{
 Stack<int> dishes;
 int temp;
 if (dishes.isEmpty())
 {
 std::cout << "isEmpty works" << std::endl;
 }
 else
 {
  std::cout << "Error with isEmpty";
 }
 
 for (int i = 0; i < 9; i++)
 {
  
  dishes.Push(i);
 }
 temp = dishes.pop();
 std::cout << temp << ": should be 8" << std::endl;
 temp = dishes.top();
 std::cout << temp << ": should be 7" << std::endl;

 Stack<float> floatStack;

 if (floatStack.isEmpty())
 {
  std::cout << "IsEmpty works with floats;" << std::endl;
  
 }
 else
 {
  std::cout << "isEmpty does not work with floats" << std::endl;
  
 }
 floatStack.Push(1.5f);
 floatStack.Push(18.002f);
 floatStack.Push(9.74f);

 float floatTemp = floatStack.pop();

 std::cout << floatTemp << ": should be 9.74" << std::endl;

 floatTemp = floatStack.top();

 std::cout << floatTemp << ": should be 18.002" << std::endl;

 Stack<std::string> stringStack;

 if(stringStack.isEmpty())
 {
  std::cout << "IsEmpty works with strings" << std::endl;
  
 } 

 else {
   std::cout << "isEmpty does not work with floats" << std::endl;
 
}

 stringStack.Push("dog");
 stringStack.Push("cat");
 stringStack.Push("cow");

 std::string stringTemp = stringStack.pop();

 std::cout << stringTemp << ": should be cow" << std::endl;
 stringTemp = stringStack.top();
 std::cout <<  stringTemp << ": should be cat" << std::endl;

}
/* The hardest part for me was remembering all the vector functions and how they worked. I know I could have used the Stack library, but I
 * was unsure if that was ok. I also had a few problems with iterators. I'm not sure exactly what they are, but I will learn more about them.
 * I think how the .begin() .end() functions work i found the most interesting. I read up a little more about iterators but dont entirely understand.
 * I at least know enough to use them properly.*/