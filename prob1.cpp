#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);

// Implement printString here
void printString(string t)
{
  for (int i = 0; i < t.size(); i++)
  {
    std::cout << t[i] << " \n";
  }
}
// Implement testString here
int testString(string z)
{
  for (int j = 0; j < z.size(); j++)
  {
    if (z[j] != 'G' && z[j] != 'A' && z[j] != 'T' && z[j] != 'C')
    {
      return false;
    }
  }
  return true;
}
// EDIT CODE BELOW *ONLY* FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
  cout << "Test if the string is a DNA sequence" << endl;
  {
    string s = "AATCCGC";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = "hheelllloo";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "gattc";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "T";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), true);
  }
  {
    string s = "AATCCGCd";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "dAATCCGC";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }
  {
    string s = "d";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, testString(s), false);
  }

  return 0;
}

bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}
