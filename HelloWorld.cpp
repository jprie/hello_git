#include <iostream>
#include "Animal.h"

using namespace std;

	int main(int argc, char *args[]) {
		
		cout << "Hello Animal World" << endl;
		string name = "AnimalName";
		Animal animal(name);
		cout << "Animal: " << animal.printName() << endl; 

		return 0;
	}
