#include <iostream>

using namespace std;
class StudentScoreSystem {
private:
	int studentID;
	string studentName;
	double math;
	double english;
	double IT;
public:
	double total;
	string grade;
	StudentScoreSystem() {
		studentID = 00000000;
		studentName = "Student";
		math = 0;
		english = 0;
		IT = 0;
	}
	void getID(int ID) {
		this->studentID = ID;
	}
	int setID(int ID) {

		this->studentID = ID;
		return studentID;
	}
	string getName() {

		return studentName;
	}
	void setName(string name) {
		this->studentName = name;
	}
	double getEnglish() {

		return english;
	}
	void setEnglish(double english) {
		this->english = english;
	}
	double getMath() {

		return math;
	}
	void setMath(double math) {
		this->math = math;
	}
	double getIT() {

		return IT;
	}
	void setIT(double IT) {
		this->IT = IT;
	}
	double getTotal() {
		total = IT + math + english;
		return total;
	}
	string getGrade() {
		if (total < 100 && total > 90) {
			grade = "A+";
		}
		else if (total < 90 && total > 80) {
			grade = "A";
		}
		else if (total < 80 && total > 70) {
			grade = "B+";
		}
		else if (total < 70 && total > 60) {
			grade = "B";
		}
		else if (total < 60 && total > 50) {
			grade = "C+";
		}
		else if (total < 50 && total > 40) {
			grade = "C";
		}
		else if (total < 40 && total > 30) {
			grade = "D+";
		}
		else if (total < 30 && total > 20) {
			grade = "D";
		}
		else if (total < 20) {
			grade = "F";
		}

		return grade;
	}
};

int main()
{
	system("color 1B");
	int ID;
	string name;
	double math;
	double english;
	double IT;
	StudentScoreSystem study;
	cout << endl << " Enter your ID." << endl << "\t";
	cin >> ID;
	study.setID(ID);
	cout << " Enter your name." << endl << "\t";
	cin >> name;
	study.setName(name);
	cout << " Enter your english exam score." << endl << "\t";
	cin >> english;
	study.setEnglish(english);
	if (english < 0 || english > 30) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Enter your math exam score." << endl << "\t";
	cin >> math;
	study.setMath(math);
	if (math < 0 || math > 40) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Enter your IT exam score." << endl << "\t";
	cin >> IT;
	study.setIT(IT);
	if (IT < 0 || IT > 30) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Total score is: " << study.getTotal() << endl;
	cout << " Your grade: " << study.getGrade() << endl;
}