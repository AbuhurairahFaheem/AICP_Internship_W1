#include<iostream>
#include<string>
using namespace std;
const int capacity = 10;
void t1(string name[], int Student_Weight[], int size) {
	int max = 100; int min = 20;
	for (int i = 0; i < size; i++) {
		cout << "Enter name of Pupil#" << i + 1 << ": ";
		cin >> ws;
		getline(cin, name[i]);
		cout << "Enter weight of Pupil#" << i + 1 << ": ";
		cin >> Student_Weight[i];
		while (true) {
			if (Student_Weight[i]<min || Student_Weight[i] >max) {
				cout << "Please enter valid weight b/w " << min << " and " << max << ": ";
				cin >> Student_Weight[i];
			}
			else break;

		}
		cout << endl;
	}
}
void t2(string name[], int Student_Weight[], int Student_Weight_final[],int Student_Weight_difference[], int size) {
	int max = 100; int min = 20; int temp = 0;
	for (int i = 0; i < size; i++) {
		
		cout << "Enter final weight of Pupil (" << name[i] << "): ";
		cin >> Student_Weight_final[i];
		Student_Weight_difference[i] = Student_Weight_final[i] - Student_Weight[i];
		cout << endl;
	}
}
void t3(string name[], int Student_Weight[], int Student_Weight_final[], int Student_Weight_difference[], int size) {
	int max = 100; int min = 20; int temp = 0; char up=1;
	for (int i = 0; i < size; i++) {
		if (Student_Weight_difference[i] > 2.5) {
			cout << name[i] << "'s weight difference is " << Student_Weight_difference[i] << ", it's a rise! "<<up<<endl;
	    }
	}
}
int main() {
	string name[capacity] = { "" };
	int Student_Weight[capacity] = {};
	int Student_Weight_final[capacity] = {};
	int Student_Weight_difference[capacity] = {};
	int size = 3;
	//TASK 1
	cout << "Today is FIRST DAY of term!\n";
	t1(name, Student_Weight,size);
	//cout << "TASK 1 DONE!\n";
	//TASK 2
	cout << "Today is LAST DAY of term!\n";
	t2(name, Student_Weight, Student_Weight_final, Student_Weight_difference, size);
	//cout << "TASK 2 DONE!\n";
	//TASK 3
	t3(name, Student_Weight, Student_Weight_final, Student_Weight_difference, size);
	//cout << "TASK 3 DONE!\n";
 return 0;
}