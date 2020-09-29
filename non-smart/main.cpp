#include <iostream>

using namespace std;

class Resource {
public :
  Resource() {
    cout << "Creating Resource" << endl;
  }

  ~Resource() {
    cout << "Destorying Resource" << endl;
  }
    void do_something() {
    cout << "Doing something" << endl;
  }
};


int main(){

  Resource *pr = new Resource();

  pr->do_something();

  delete pr;

  return 0;
}