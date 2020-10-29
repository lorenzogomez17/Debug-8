#include <iostream>
#include <vector>
using namespace std;
class Mammals {
  private:
    string name;
    string location;
    // Set function
    string getName(){
      return this->name;
    }
  public:
    // Constructor
    Mammals (string x, string y){
      this->name = x;
      this->location = y;
    }
    // Get function
    string getLoc(){
      return this->location;
    }
};
int main() {
  // Make mammal objects
  Mammals concord("Concord","Sky");
  Mammals penguin("Penguin","Tundra");
  Mammals lion("Lion","Prairie");
  Mammals monkey("Monkey","Forest");
  // Make vector to store objects in
  vector<Mammals> Zoo;
  // Push objects into vector
  Zoo.push_back(concord);
  Zoo.push_back(penguin);
  Zoo.push_back(lion);
  Zoo.push_back(monkey);
  // Make iterator to traverse the vector
  vector<Mammals>::iterator itr;
  // Traverse the vector's contents and print them
  for (auto itr:Zoo){
    cout << "The " << itr.getName() << " lives in the " << itr.getLoc() << "." << endl;
  }
}