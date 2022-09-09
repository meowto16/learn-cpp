#include <string>

using namespace std;

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  string showSequence();
  
};

string SequenceSum::showSequence(){
  if (count < 0) {
    return to_string(count) + "<0";
  }
  
  if (count == 0) {
    return "0=0";
  }
  
  int sum = 0;
  string expression = "";
  
  for (int i = 0; i <= count; i++) {
    if (i != 0) {
      expression += "+";
    }

    expression += to_string(i);
    sum += i;
  }
  
  return expression + " = " + to_string(sum);
}

SequenceSum::SequenceSum (int c) {
  count = c;
}