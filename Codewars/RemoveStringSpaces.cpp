/* Simple, remove the spaces from the string, then return the resultant string.*/

using namespace std;

string no_space(string x)
{ 
  string str;
  for (int i = 0; i < x.length(); i++) {
    if (x[i] != ' ') {
      str.push_back(x[i]);
    }
  }
  return str;
}