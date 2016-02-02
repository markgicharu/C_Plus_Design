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
  if(mark >= 0 && score<= 40)
  {
    cout<<"F"<<endl;
  }
  else
  if(mark >= 41 && score<= 60)
  {
    cout<<"C"<<endl;
  }
  else
  if(mark >= 61 && score<= 80)
  {
    cout<<"B"<<endl;
  }
  else
  if(mark >= 81 && score<= 100)
  {
    cout<<"A"<<endl;
  }
  else
  {
  cout<<"Enter a grade between 0 and 100"<<end1;
  }
  return 0;
}
