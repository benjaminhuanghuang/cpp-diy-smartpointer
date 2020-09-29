#include <iostream>
#include "smart.h"


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

  Ptr<Resource> pr(new Resource());

  pr->do_something();

  return 0;
}