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
  if(mark >= 50)
  {
    cout<<"Passed"<<endl;
  }
  else
  {
    cout<<"Failed"<<endl;
  }
  return 0;
}

