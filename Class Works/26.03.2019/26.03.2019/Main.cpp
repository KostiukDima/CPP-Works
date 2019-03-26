#include<iostream>
#include<string>

using namespace std;

struct Animals
{
private:
	string animal;
	string clas;
	string name;

public:
	void ShowInfo()
	{

		cout << "Animal = " << animal << "\nClass = " << clas << "\nName = " << name << endl;
	}

	void SetAnimal(string newAnimal) {
		animal = newAnimal;
	}
	void SetClas(string newClas) {
		clas = newClas;
	}
	void SetName(string newName) {
		name = newName;
	}
	
};


int main()
{
	
	Animals Cat;
	Cat.SetAnimal("Cat");
	Cat.SetClas("Mammalia");
	Cat.SetName("Garfild");
	Cat.ShowInfo();
	
	

	
	

	system("pause");
	return 0;
}