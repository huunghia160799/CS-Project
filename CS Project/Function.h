#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <cstring>
#include "windows.h"
#include <sstream>

using namespace std;


struct student {
	int id;
	string full_name;
	string class_name;
	string password;
	string email;
	string phone;
	student *next = NULL;
	void changePassword();
	void generatePassword();
	void printInfo();
	void operator=(student source) {
		id = source.id;
		full_name = source.full_name;
		password = source.password;
		class_name = source.class_name;
		email = source.email;
		phone = source.phone;
	}
};

struct user {
	string username;
	string full_name;
	string email;
	string phone;
	string password;
	user* next = NULL;
	void changePassword();
	void generateUsernameAndPassword();
	void printInfo();
};

struct userList {
	user* head;
};

struct date {
	int day, month, year;
};

struct Time
{
	int hour, minute;
	void operator=(Time& a) {
		this->hour = a.hour;
		this->minute = a.minute;
	}
	void displayTime();
};

enum dateofweek {
	sunday = 1,
	monday = 2,
	tuesday = 3,
	wednesday = 4,
	thursday = 5,
	friday = 6,
	saturday = 7,
};

struct session
{
	dateofweek session_day;
	Time start, end;
	void operator=(session &a) {
		this->start = a.start;
		this->end = a.end;
		this->session_day = a.session_day;
	}
	void displaySession() {
		switch (session_day) {
		case 1:
			cout << "Date of week: Sunday\n";

			break;
		case 2:
			cout << "Date of week: Monday\n";

			break;
		case 3:
			cout << "Date of week: Tuesday\n";

			break;
		case 4:
			cout << "Date of week: Wednesday\n";

			break;
		case 5:
			cout << "Date of week: Thursday\n";

			break;
		case 6:
			cout << "Date of week: Friday\n";

			break;
		case 7:
			cout << "Date of week: Saturday\n";

			break;
		}
		cout << "Start time: ";
		start.displayTime();
		cout << "End time: ";
		end.displayTime();
	}
};

//	stands for a student in a course
struct presence {
	string course_code, year;
	int semester, id, week;
	float midterm, lab, final, total, bonus;	//Thay bao cho them cot total
	string attendance;
	presence* next = NULL;
};

struct schedule {
	string room, year, class_name;
	int semester;
	date start_date, end_date;
	session course_session;
	schedule* next = NULL;
};

struct course {
	string course_code, course_name, lecturer_username, room, year;
	int semester;
	date start_date, end_date;
	session course_session;
	presence* head_presence = NULL;
	course* next = NULL;
	schedule* head_schedule = NULL;
};

struct courseList
{
	course* head = NULL;
	void addNewCourse();
};

struct courseCode {
	string course_code;
	courseCode* next = NULL;
};

struct classYear {
	string class_name;
	student *head = NULL;
	classYear* next = NULL;
	courseCode* head_course_code = NULL;
};

struct classList
{
	classYear *head = NULL;
	void addEmptyClass();
};

struct studentList_t {
	student* head;
};

//	template to create a new node for a linked list given the head node
template<typename T>
T* createNewNode(T* &head) {
	if (!head) {
		head = new T;
		return head;
	}
	T* cur = head;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new T;
	return cur->next;
}
void input(char path[], classYear &a, studentList_t &student_list);
void input(classList &class_list, studentList_t &student_list);
void output(char path[], classYear &a);
void viewListOfStudentsInAClass(const classList &a);
void viewListOfClass(classList L);
void importCourses(string path, courseList& a, studentList_t &student_list);
void importCourses(courseList& a, studentList_t &student_list);
void AddNewStudentToClass(classList L);
void EditStudent(classList L);
void removeAcourse(courseList b);
void editExistingCourse(courseList &a);
void gotoxy(int x, int y);
void showMenu(classList &class_list, courseList &course_list, userList &staff, userList &lecturer, studentList_t &student_list);
void importCoursesSchedulesOfAClass(courseList &course_list, classList &class_list, string path, string class_name);
void importCoursesSchedulesOfAClass(courseList &course_list, classList &class_list);
void addACourseSchedule(courseList &course_list, classList &class_list);
void moveStudentsFromClassAToB(classList a);
bool exit();
void exportPresence(string path, course a);
course* searchCourse(string a, course *b);
void viewScore(course* a);
void viewCourseList(courseList a);
void viewAttendance(courseList course_list);
void importUsers(userList &staff, string path);
void inputPassword(string &password);
void findCourseFromCode(courseList &course_list, string &course_code, course*  &result);
void findClassFromCode(classList &class_list, string &class_name, classYear*  &result);
void viewListOfSchedules(courseList &course_list, classList &class_list);
void recursionEditGrade(int n, presence *&edit);
void editGrade(courseList &a);
void IntToXX(int n);
void editCourseSchedule(courseList L);
void removeCourseSchedule(courseList L);
void displayList(courseList L);
void exportScoreboardToCsv(courseList* course_list);
void exportScoreboardToCsv(course* cur_course);
int weeksBetweenTwoDates(const date &dt1, const date& dt2);
int weeksFromStartDate(const date &dt1);
void checkIn(student* you, courseList &course_list);
void viewCheckInResult(student* you, courseList &course_list);
int countLeapYears(date d);
void viewMyScore(courseList course_list);

#endif