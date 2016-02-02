//preprocessor directive
# include <iostream>
using namespace std;

//mainfunction

int main()
{
  //declare variables here
  int mark;
  
  //prompt the user to enter the grades
  cout<< "======Please enter your grades below====="<<endl;
  cin>> mark;
  //conditional statement
  if(mark >= 0 && mark<= 40)
  {
    cout<<"F"<<endl;
  }
  else
  if(mark >= 41 && mark<= 60)
  {
    cout<<"C"<<endl;
  }
  else
  if(mark >= 61 && mark<= 80)
  {
    cout<<"B"<<endl;
  }
  else
  if(mark >= 81 && mark<= 100)
  {
    cout<<"A"<<endl;
  }
  else
  {
  cout<<"Enter a grade between 0 and 100"<<endl;
  }
  return 0;
}
