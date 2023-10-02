#include<iostream>
using namespace std;

void MonsterGen();

int main() {
	char input;
	while (1) {
		// Text based game goes here
		MonsterGen();
		cout << "press any key to continue" << endl;
		cin >> input;
	}

}

void MonsterGen() {
	int num = rand() % 100;
	if (num < 15){
		cout << "a slime spawned." << endl;
	}
	else if (num < 20) {
		cout << " A witch appeared!" << endl;
	}
	else if (num < 50){
		cout << "A skeleton appeared!" << endl;
	}
	else if (num < 75) {
		cout << "A Dragon Kin appeared!" << endl;
	}
	else if (num < 100){
		cout << "Phalaris, King of the dragons appears!" << endl;
	}

}
