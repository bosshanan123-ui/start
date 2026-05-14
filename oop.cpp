#include <iostream>
#include<string >
using namespace std;
class department {
private :
	int dep_id;
	string dep_name;
	int no_of_teachers;
	string courses;
public :
	department() {
		dep_id = 1;
		dep_name = "abc";
		no_of_teachers = 100;
		courses = 5;
	}
    void setdep_id(int id) {
        dep_id = id;
    }
    void setdep_name(string name) {
        dep_name = name;
    }
    void setno_of_teachers(int teachers) {
        no_of_teachers = teachers;
    }
    void setcourses(string c) {
        courses = c;
    }
    int getdep_id() {
        return dep_id;
    }
    string getsetdep_name() {
        return dep_name;
    }
    int getsetno_of_teachers() {
        return no_of_teachers;
    }
    string getcourses() {
        return courses;

};
    int main() {
        department m;
        cout << m.getcourses();
    
    }
