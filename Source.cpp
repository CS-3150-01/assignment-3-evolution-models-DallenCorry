#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

//Make this abstract later
class WorldObject {
protected:
	int x;
	int y;
public:
	int getX() { return x; }
	int getY() { return y; }
};

class Food:public WorldObject {
public:
	string type;
	double foodLevel;
	void decay() {

	}
};
//eventually change this to abstract as well
class Creature:public WorldObject
{
private:
	int age;
	double hungerLevel;
public:
	string name;

	Creature() {
		age = 0;
		hungerLevel = 100;
		name = "";
	}
	Creature(string str, int a, double hl) {
		name = str;
		age = a;
		hungerLevel = hl;
	}
	void die() {
		cout << "I have perished" << endl;
	}
	void reproduce() {}
	void move(int x, int y) {}
	void eat(Food f);

	//Destructor
	~Creature() {
		cout << "Goodbye" << endl;
	}

};

class Prey: public Creature {
public:
	bool fightOrFlight;
	bool omnivore;
	Prey() {}
	Prey(bool fof, bool om) {}
	bool attack() {}
	void flee() {}
};

class Predator:public Creature {
public:
	bool omnivore;
	bool attack() {}
};





//void Creature :: die() {
//
//}
//void Creature::eat(Food f) {
//
//}

int main() {
	Creature* ct = new Creature();
	ct->die();
	cout << "Hello World" << endl;
	return 0;
}
