#include <iostream>
#include<string >
using namespace std;
class teacher {
private:
    int  t_id;
    string teacher_name;
public :
    Teacher() {
        t_id = 0;
        teacher_name = "";
    }
    Teacher(int id, string name) {
        t_id = id;
        teacher_name = name;
    }

    int getTeacherId() 
    { return teacher_id; }
    string getTeacher_name()
    { return teacher_name; }
    void set_id(int m) {
        t_id = m;
    }
    void settteacher_name(string n) {
        teacher_name = n;
    }


};
class department {
private :
	int dep_id;
	string dep_name;
	int no_of_teachers;
	int  courses;
public :
	department() {
		dep_id = 1;
		dep_name = "Computer Science ";
		no_of_teachers = 100;
		courses = 5;
        Teacher teachersList[50];
        int teacherCount;
	}
    Department(int id, string name, int teachers, int c) {
        dep_id = id;
        dep_name = name;
        no_of_teachers = teachers;
        courses = c;
        teacherCount = 0;
    }
    void addTeacher(Teacher t) {
        if (teacherCount < 50) {
            teachersList[teacherCount] = t; 
            teacherCount++; 
        }
        else {
            cout << "Error: Department faculty list is full!" << endl;
        }
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
