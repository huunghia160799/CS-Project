#include "Function.h"

// 1+2+5
void showMenu(classList &class_list, courseList &course_list, userList &staff, userList &lecturer) {

	//	Show the menu for all user
	//	By Nguyen Ho Huu Nghia

	bool check = true;
	while (check) {

		check = true;

		system("cls");
		cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
			<< "\t\t*********************************************************\n\n\n"
			<< "Enter the number corresponding to your role or enter \"4\" to exit:\n"
			<< "[1] Student\n"
			<< "[2] Academic Staff\n"
			<< "[3] Lecturer\n"
			<< "[4] Exit the program\n"
			<< "Your answer: ";

		int answer;
		cin >> answer;

		bool check_1 = true, check_2 = true, first_log_in = true;

		//	if the user is a student
		if (answer == 1) {

			while (check_1) {
				int temp;

				student* cur_student = class_list.head->head;


				system("cls");
				cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
					<< "\t\t*********************************************************\n\n\n"
					<< "LOG IN\n"
					<< "Username: ";
				string password;
				int username;
				cin >> username;
				cout << "Password: ";
				inputPassword(password);


				//	Check if there is any student matching the log in info
				while (true) {
					while (cur_student && (username != cur_student->id || password != cur_student->password))
						cur_student = cur_student->next;

					//	if there is a user
					if (!cur_student) {
						system("cls");
						cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
							<< "\t\t*********************************************************\n\n"
							<< "The username and password match no student\n"
							<< "LOG IN\n"
							<< "Username: ";
						cin >> username;
						cout << "Password: ";
						inputPassword(password);
					}
					else
						break;
				}

				//	first menu
				system("cls");
				cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
					<< "\t\t*********************************************************\n\n";

				cout << "Enter the number corresponding to the action you want to take: \n"
					<< "[1] Show main menu\n"
					<< "[2] Show my information\n"
					<< "[3] Change password\n"
					<< "[4] Log out\n"
					<< "Your answer: ";

				cin >> temp;

				if (temp == 1) {

					int temp_1;

					while (check_2) {

						//	main menu
						system("cls");
						cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
							<< "\t\t*********************************************************\n\n";

						cout << "Enter the number corresponding to the action you want to take: \n"
							<< "[1] Check-in\n"
							<< "[2] View check-in result\n"
							<< "[3] View my scores\n"
							<< "[4] View schedules\n"
							<< "[5] Back to the previous menu\n"
							<< "Your answer: ";

						cin >> temp_1;
						cout << "---------------------------------------------------------\n\n";

						if (temp_1 == 1) {

						}
						else if (temp_1 == 2) {

						}
						else if (temp_1 == 3) {

						}
						else if (temp_1 == 4) {

						}
						else if (temp_1 == 5) {
							check_2 = false;
						}
						system("pause");
					}
				}
				else if (temp == 2) {
					cout << "---------------------------------------------------------\n\n";
					cur_student->printInfo();
					system("pause");
				}
				else if (temp == 3) {
					cout << "---------------------------------------------------------\n\n";
					cur_student->changePassword();
					system("pause");
				}
				else if (temp == 4) {
					check_1 = false;;
				}
			}
			continue;
		}

		//	if the user is an academic staff
		else if (answer == 2) {

			while (check_1) {
				int temp;
				user* cur_user = staff.head;


				system("cls");
				cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
					<< "\t\t*********************************************************\n\n\n"
					<< "LOG IN\n"
					<< "Username: ";
				string username, password;
				cin >> username;
				cout << "Password: ";
				inputPassword(password);


				//	Check if there is any staff matching the log in info
				while (true) {
					while (cur_user && (username != cur_user->username || password != cur_user->password))
						cur_user = cur_user->next;

					//	if there is no staff that matches the log in info
					if (!cur_user) {

						system("cls");
						cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
							<< "\t\t*********************************************************\n\n"
							<< "The username and password match no academic staff\n"
							<< "LOG IN\n"
							<< "Username: ";

						cin >> username;
						cout << "Password: ";
						inputPassword(password);
					}
					else
						break;
				}


				while (true) {
					system("cls");
					cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
						<< "\t\t*********************************************************\n\n";

					cout << "Enter the number corresponding to the action you want to take: \n"
						<< "[1] Show main menu\n"
						<< "[2] Show my information\n"
						<< "[3] Change password\n"
						<< "[4] Log out\n"
						<< "Your answer: ";

					cin >> temp;

					if (temp == 1) {
						int temp_1;

						while (check_2) {

							system("cls");
							cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
								<< "\t\t*********************************************************\n\n";

							cout << "Enter the number corresponding to the group of actions you want to take: \n"
								<< "[1] Classes and students\n"
								<< "[2] Courses\n"
								<< "[3] Schedules\n"
								<< "[4] Attendance\n"
								<< "[5] Scoreboard\n"
								<< "[6] Back to the previous menu\n"
								<< "Your answer: ";

							cin >> temp_1;

							if (temp_1 == 1) {
								while (true) {

									system("cls");
									cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
										<< "\t\t*********************************************************\n\n";

									cout << "Enter the number corresponding to the group of actions you want to take: \n"
										<< "[1] Import students of a class from a csv file\n"
										<< "[2] Add a new student to a class\n"
										<< "[3] Edit an existing student\n"
										<< "[4] Remove a student\n"
										<< "[5] Change students from class A to class B\n"
										<< "[6] Add a new empty class\n"
										<< "[7] View list of classes\n"
										<< "[8] View list of students in a class\n"
										<< "[9] Back to the previous menu\n"
										<< "Your answer: ";

									char temp_2;
									cin >> temp_2;
									cout << "---------------------------------------------------------\n\n";
									if (temp_2 == '1') {
										char path[1000];
										cout << "Enter the path of file: ";
										cin.ignore();
										cin.getline(path, 1000);
										classYear *cur_class = createNewNode(class_list.head);
										input(path, *cur_class);
									}
									else if (temp_2 == '2') {
										//AddNewStudentToClass
									}
									else if (temp_2 == '3') {
										//EditStudent
									}
									else if (temp_2 == '4') {
										//Remove a course schedule
									}
									else if (temp_2 == '5') {
										moveStudentsFromClassAToB(class_list);
									}
									else if (temp_2 == '6') {
										class_list.addEmptyClass();
									}
									else if (temp_2 == '7') {
										viewListOfClass(class_list);
									}
									else if (temp_2 == '8') {
										viewListOfStudentsInAClass(class_list);
									}
									else
										break;

									system("pause");
								}
							}
							else if (temp_1 == 2) {
								while (true) {

									system("cls");
									cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
										<< "\t\t*********************************************************\n\n";

									cout << "Enter the number corresponding to the group of actions you want to take: \n"
										<< "[1] Import courses from a csv file\n"
										<< "[2] Add a new course\n"
										<< "[3] Edit an existing course\n"
										<< "[4] Remove a course\n"
										<< "[5] View list of courses\n"
										<< "[6] Back to the previous menu\n"
										<< "Your answer: ";

									char temp_2;
									cin >> temp_2;
									cout << "---------------------------------------------------------\n\n";
									if (temp_2 == '1') {
										importCourses(course_list);
									}
									else if (temp_2 == '2') {
										course_list.addNewCourse();
									}
									else if (temp_2 == '3') {
										editExistingCourse(course_list);
									}
									else if (temp_2 == '4') {
										removeAcourse(course_list);
									}
									else if (temp_2 == '5') {
										viewCourseList(course_list);
									}
									else
										break;
									system("pause");
								}
							}
							else if (temp_1 == 3) {
								while (true) {

									system("cls");
									cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
										<< "\t\t*********************************************************\n\n";

									cout << "Enter the number corresponding to the group of actions you want to take: \n"
										<< "[1] Import courses schedules from a .csv file\n"
										<< "[2] Add a course\'s schedule\n"
										<< "[3] Edit a course\'s schedule\n"
										<< "[4] Remove a course\'s schedule\n"
										<< "[5] View list of schedules\n"
										<< "[6] Back to the previous menu\n"
										<< "Your answer: ";

									char temp_2;
									cin >> temp_2;
									cout << "---------------------------------------------------------\n\n";
									if (temp_2 == '1') {
										importCoursesSchedulesOfAClass(course_list, class_list);
									}
									else if (temp_2 == '2') {
										addACourseSchedule(course_list, class_list);
									}
									else if (temp_2 == '3') {
										//Edit a course's schedule
										editCourseSchedule(course_list);
									}
									else if (temp_2 == '4') {
										//Remove a course's schedule
									}
									else if (temp_2 == '5') {
										viewListOfSchedules(course_list, class_list);
									}
									else
										break;
									system("pause");
								}
							}
							else if (temp_1 == 4) {
								while (true) {

									system("cls");
									cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
										<< "\t\t*********************************************************\n\n";

									cout << "Enter the number corresponding to the group of actions you want to take: \n"
										<< "[1] Search and view attendance list of a course\n"
										<< "[2] Export attendance list to a csv file\n"
										<< "[3] Back to the previous menu\n"
										<< "Your answer: ";

									char temp_2;
									cin >> temp_2;
									cout << "---------------------------------------------------------\n\n";
									if (temp_2 == '1') {
										//viewAttendance ;
									}
									else if (temp_2 == '2') {
										//exportPresence;
									}
									else
										break;
									system("pause");
								}
							}
							else if (temp_1 == 5) {
								while (true) {

									system("cls");
									cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
										<< "\t\t*********************************************************\n\n";

									cout << "Enter the number corresponding to the group of actions you want to take: \n"
										<< "[1] Import scoreboard of a course (midterm, final, lab, bonus)\n"
										<< "[2] Edit grade of a student\n"
										<< "[3] View a scoreboard\n"
										<< "Your answer: ";

									char temp_2;
									cin >> temp_2;
									cout << "---------------------------------------------------------\n\n";
									if (temp_2 == '1') {

									}
									else if (temp_2 == '2') {

									}
									else if ((temp_2) == '3') {

									}
									else
										break;
									system("pause");
								}
							}
							else if (temp_1 == 6) {
								check_2 = false;
							}
						}
					}
					else if (temp == 2) {
						cout << "---------------------------------------------------------\n\n";
						cur_user->printInfo();
						system("pause");
					}
					else if (temp == 3) {
						cout << "---------------------------------------------------------\n\n";
						cur_user->changePassword();
						system("pause");
					}
					else if (temp == 4) {
						check_1 = false;
						break;
					}
				}
			}
		}


		//	if the user is a lecturer
		else if (answer == 3) {

			while (check_1) {
				int temp;
				user* cur_user = lecturer.head;


				system("cls");
				cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
					<< "\t\t*********************************************************\n\n\n"
					<< "LOG IN\n"
					<< "Username: ";
				string username, password;
				cin >> username;
				cout << "Password: ";
				inputPassword(password);


				//	Check if there is any lecturer matching the log in info
				while (true) {
					while (cur_user && (username.compare(cur_user->username) || password.compare(cur_user->password)))
						cur_user = cur_user->next;

					//	if there is no lecturer matching the log in info
					if (!cur_user) {

						system("cls");
						cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
							<< "\t\t*********************************************************\n\n"
							<< "The username and password match no academic staff\n"
							<< "LOG IN\n"
							<< "Username: ";

						cin >> username;
						cout << "Password: ";
						inputPassword(password);
					}
					//	if there is one
					else
						break;
				}


				while (true) {
					system("cls");
					cout << "\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
						<< "\t\t*********************************************************\n\n";

					cout << "Enter the number corresponding to the action you want to take: \n"
						<< "[1] Show main menu\n"
						<< "[2] Show my information\n"
						<< "[3] Change password\n"
						<< "[4] Log out\n"
						<< "Your answer: ";

					cin >> temp;

					if (temp == 1) {
						int temp_1;

						while (check_2) {

							system("cls");
							cout << "\t\t\t\t\tSTUDENT MANAGEMENT PROGRAM\n"
								<< "\t\t*********************************************************\n\n";

							cout << "Enter the number corresponding to the action you want to take: \n"
								<< "[1] Import scoreboard of a course(midterm, final, lab, bonus)\n"
								<< "[2] Edit grade of a student\n"
								<< "[3] View a scoreboard\n"
								<< "[4] Back to the previous menu\n"
								<< "Your answer: ";

							cin >> temp_1;
							cout << "---------------------------------------------------------\n\n";

							if (temp_1 == 1) {

							}
							else if (temp_1 == 2) {

							}
							else if (temp_1 == 3) {

							}
							else if (temp_1 == 4) {
								break;
							}
							system("pause");
						}
					}
					else if (temp == 2) {
						cout << "---------------------------------------------------------\n\n";
						cur_user->printInfo();
						system("pause");
					}
					else if (temp == 3) {
						cout << "---------------------------------------------------------\n\n";
						cur_user->changePassword();
						system("pause");
					}
					else if (temp == 4) {
						check_1 = false;
						break;
					}
				}
			}
		}
		else if (answer>3)
			check = false;
	}
}

void importUsers(userList &staff, string path) {
	//import staffs list from a csv file
	//By Nguyen Ho Huu Nghia

	ifstream fin(path);
	fin.ignore(1000, '\n');
	staff.head = new user;
	user* cur_user = staff.head;
	string buffer;
	getline(fin, buffer, ',');
	if (buffer.empty()) {
		getline(fin, staff.head->full_name, ',');
		getline(fin, staff.head->email, ',');
		getline(fin, staff.head->phone, ',');
		staff.head->generateUsernameAndPassword();
		while (fin.good()) {
			cur_user->next = new user;
			cur_user = cur_user->next;
			fin.ignore(10, ',');
			getline(fin, cur_user->full_name);
			getline(fin, cur_user->email, ',');
			getline(fin, cur_user->phone, ',');
			cur_user->generateUsernameAndPassword();
		}
	}
	else {
		staff.head->username = buffer;
		getline(fin, staff.head->full_name, ',');
		getline(fin, staff.head->email, ',');
		getline(fin, staff.head->phone, ',');
		getline(fin, staff.head->password, ',');
		while (fin.good()) {
			cur_user->next = new user;
			cur_user = cur_user->next;
			fin.ignore(10, ',');
			getline(fin, cur_user->username);
			getline(fin, cur_user->full_name);
			getline(fin, cur_user->email, ',');
			getline(fin, cur_user->phone, ',');
			getline(fin, cur_user->password, ',');
		}
	}
	fin.close();
}
//	3
void user::printInfo() {
	cout << "Username: " << username << endl
		<< "Full name: " << full_name << endl
		<< "Email: " << email << endl
		<< "Phone: " << phone << endl
		<< "Password: " << password << endl;
}

//	3
void student::printInfo() {
	cout << "Student ID: " << id << endl
		<< "Class : " << class_name << endl
		<< "Full name: " << full_name << endl
		<< "Email: " << email << endl
		<< "Phone: " << phone << endl
		<< "Password: " << password << endl;
}

//	4
void student::changePassword()
{
	//Nguyen Vo Duc Loc

	string pass, newPass;

	cout << "pls enter your previous password: ";
	getline(cin, pass);

	if (pass != password)
	{
		cout << "wrong password";
		system("pause");
		return;
	}

	cout << "pls enter your new password: ";
	getline(cin, pass);
	cout << "pls enter again your new password: ";
	getline(cin, newPass);

	if (newPass == pass)
	{
		password = newPass;
		cout << "your password is changed successfully";
	}
	else
		cout << "unsucessfully";

	system("pause");
}

//	4
void user::changePassword()
{
	//Nguyen Vo Duc Loc

	string pass, newPass;

	cout << "pls enter your previous password: ";
	getline(cin, pass);

	if (pass != password)
	{
		cout << "wrong password";
		system("pause");
		return;
	}

	cout << "pls enter your new password: ";
	getline(cin, pass);
	cout << "pls enter again your new password: ";
	cin >> newPass;

	if (newPass == pass)
	{
		password = newPass;
		cout << "your password is changed successfully";
	}
	else
		cout << "unsucessfully";

	system("pause");
}

//	6
void input(char path[], classYear &a)
{
	//	load an entire new class from a .csv file;
	//	Nguyen Ho Huu Nghia

	ifstream fin(path);
	if (fin.good()) {
		//	ignore Class,
		fin.ignore(1000, ',');
		//	get Class Year
		char class_year[16];
		fin.getline(class_year, 16, ',');
		a.class_name = (string)class_year;
		//	ignore line 2
		fin.ignore(1000, '\n');
		fin.ignore(1000, '\n');

		student* cur;

		//	start reading students' info
		char temp_number[13], temp_username[8];
		int username;
		char full_name[101];
		while (fin.good()) {

			//	get ordinal number
			fin.getline(temp_number, 13, ',');

			//	get username(student_id)
			fin.getline(temp_username, 8, ',');
			username = atoi(temp_username);

			//	get fullname
			fin.getline(full_name, 101, '\n');

			if (a.head == NULL) {
				a.head = new student;
				a.head->id = username;
				a.head->full_name = (string)full_name;
				a.head->class_name = (string)class_year;
				a.head->next = NULL;
				a.head->generatePassword();
				cur = a.head;
			}
			else {
				cur->next = new student;
				cur = cur->next;
				cur->id = username;
				cur->full_name = (string)full_name;
				cur->class_name = (string)class_year;
				cur->generatePassword();
				cur->next = NULL;
			}
		}
	}
	fin.close();
}

void output(char path[], classYear &a)
{
	ofstream fout;
	fout.open(path);

	student *cur = a.head;

	if (fout.good()) {
		fout << "Class," << a.class_name << "," << endl;
		fout << "No,Student ID,Student name" << endl;
		int count = 1;
		while (cur != NULL) {
			fout << count++ << ",";
			fout << cur->id << ",";
			fout << cur->full_name;
			fout << endl;
			cur = cur->next;
		}
	}

	fout.close();
}

//	7
void AddNewStudentToClass(classList L, classYear &a)
{
	// Vy Vy
	// Finished

	string classname;
	cout << "Which class you want to add new student? ";
	cin >> classname;

	classYear *cur = L.head;
	while (cur && cur->class_name.compare(classname)) {
		// if == return false 
		cur = cur->next;
	}
	if (!cur) {		//cur==NULL
		cout << "No class found.\n";
		return;
	}
	else if (!cur->class_name.compare(classname)) {	//return false
		student *add = a.head;
		cout << "Enter new student's ID: ";
		int newid;
		cin >> newid;
		//char full_name[101];
		if (newid < add->id) {
			student *tmp = new student;
			tmp->id = newid;
			tmp->class_name = classname;
			cout << "New student's name: ";
			cin.ignore(100, '\n');
			getline(cin, tmp->full_name);
			cout << "Phone number: ";
			getline(cin, tmp->phone);
			cout << "Email: ";
			getline(cin, tmp->email);
			tmp->next = add;
			a.head = tmp;
		}
		else {
			while (add->next && add->next->id < newid) {
				add = add->next;
			}
			if (!add->next) {
				add->next = new student;
				add->id = newid;
				add->class_name = classname;
				cout << "New student's name: ";
				cin.ignore(100, '\n');
				getline(cin, add->full_name);
				cout << "Phone number: ";
				getline(cin, add->phone);
				cout << "Email: ";
				getline(cin, add->email);
				add->next = NULL;
			}
			else {
				student *tmp = new student;
				tmp->id = newid;
				tmp->class_name = classname;
				cout << "New student's name: ";
				cin.ignore(100, '\n');
				getline(cin, tmp->full_name);
				cout << "Phone number: ";
				getline(cin, tmp->phone);
				cout << "Email: ";
				getline(cin, tmp->email);
				tmp->next = add->next;
				add->next = tmp;
			}
		}
	}
}

//	8
void EditStudent(classList L, classYear a)
{
	// Vy Vy
	// Finished

	string classname;
	cout << "Which class you want to edit an existing student? ";
	cin >> classname;

	classYear *cur = L.head;
	while (cur && cur->class_name.compare(classname)) {
		// if == return false 
		cur = cur->next;
	}
	if (!cur) {		//cur==NULL
		cout << "Sorry. No class found.\n";
		return;
	}
	else if (!cur->class_name.compare(classname)) {	//return false
		student *edit = a.head;
		cout << "Enter student ID: ";
		int newid;
		cin >> newid;
		while (edit && newid != edit->id) {
			edit = edit->next;
		}
		if (!edit) {
			cout << "Sorry. No student found.\n";
			return;
		}
		else {
			cout << "What info do you want to edit?\n";
			cout << "1. Phone number\n";
			cout << "2. Email\n";
			cout << "Please enter the appropriate number: ";
			int n;
			cin >> n;

			switch (n) {
			case 1: {
				cout << "Please enter new phone number: ";
				cin >> edit->phone;
				break;
			}
			default: {
				cout << "Please enter new email: ";
				cin >> edit->email;
			}
			}
		}
	}
}

//	10
void moveStudentsFromClassAToB(classList a) {

	//	By NT Tung

	bool t;
	if (t) return;
	string name;
	classYear *cur = a.head, *ca, *cb;
	bool input = false;
	do {
		cout << "Enter a class to transfer from :";
		cin >> name;
		cout << endl;
		while (cur->class_name != name && cur != NULL) {
			cur = cur->next;
		}
		if (cur != NULL) {
			ca = cur;
			input = true;
		}
	} while (!input);
	if (t) return;
	cur = a.head;
	input = false;
	do {
		cout << "Enter a class to transfer to :";
		cin >> name;
		cout << endl;
		while (cur->class_name != name && cur != NULL) {
			cur = cur->next;
		}
		if (cur != NULL) {
			cb = cur;
			if (cb != ca)
				input = true;
		}
	} while (!input);
	if (t) return;
	student *p = ca->head, *ini = ca->head;
	bool discont = false;
	bool trans;
	while (!discont&&p->next != NULL) {
		cout << "Transfer this student out ? not 0 =YES, 0=NO :";
		cout << p->next->id;
		cout << endl;
		cout << p->next->full_name;
		cout << endl;
		cout << p->next->class_name;
		cout << endl;
		cout << p->next->password;
		cout << endl;
		cout << p->next->email;
		cout << endl;
		cout << p->next->phone;
		cout << endl;
		cin >> trans;
		cout << endl;
		if (trans) {
			student *tmp = p->next;
			p->next = p->next->next;
			tmp->next = cb->head;
			cb->head = tmp;
		}
		else p = p->next;
		cout << "Discontinue or not ? not 0 = YES, 0 = NO :";
		cin >> discont;
		if (discont) break;
	}
	cout << "Transfer this student out ? not 0 =YES, 0=NO :";
	cout << ini->id;
	cout << endl;
	cout << ini->full_name;
	cout << endl;
	cout << ini->class_name;
	cout << endl;
	cout << ini->password;
	cout << endl;
	cout << ini->email;
	cout << endl;
	cout << ini->phone;
	cout << endl;
	cin >> trans;
	cout << endl;
	if (trans) {
		ca->head = ini->next;
		ini->next = cb->head;
		cb->head = ini;
	}
	return;
}

//	11
void classList::addEmptyClass()
{
	//insert a new empty class into classList
	//Nguyen Vo Duc Loc

	string name;
	cout << "pls enter the name for the class: ";
	getline(cin, name);

	if (head == NULL)
	{
		head = new classYear;
		head->class_name = name;
		head->next = NULL;
		head->head = NULL;
	}
	else
	{
		classYear *cur = head;

		while (cur->next != NULL)
			cur = cur->next;

		cur->next = new classYear;
		cur = cur->next;
		cur->class_name = name;
		cur->head = NULL;
	}
}

//	12
void viewListOfClass(const classList L)
{
	//Nguyen Vo Duc Loc

	classYear *cur = L.head;

	while (cur != NULL)
	{
		cout << cur->class_name << endl;
		cur = cur->next;
	}
}

//	13
void viewListOfStudentsInAClass(const classList &a) {
	//	let user view the details of all students in a class
	//	Nguyen Ho Huu Nghia


	cout << "Enter the name of the class you want to view: ";
	string class_name;
	cin >> class_name;
	classYear* cur_class;
	cur_class = a.head;
	while (cur_class && cur_class->class_name.compare(class_name))
		cur_class = cur_class->next;
	if (!cur_class) {
		cout << "Class not found!\n";
		return;
	}
	if (!cur_class->class_name.compare(class_name)) {
		cout << "Class " << class_name << endl << endl;
		int count = 0;
		cout << setw(10) << "Number" << setw(12) << "Student ID" << setw(30) << "Full name" << setw(30) << "Email" << setw(12) << "Phone" << endl;
		student *cur_student = cur_class->head;
		while (cur_student) {
			cout << setw(10) << count++ << setw(12) << cur_student->id << setw(30) << cur_student->full_name << setw(30) << cur_student->email << setw(12) << cur_student->phone << endl;
			cur_student = cur_student->next;
		}
	}
}

void user::generateUsernameAndPassword() {
	//	generete default username and password for academic staff or lecturer
	//	Nguyen Ho Huu Nghia

	//	find the position of the last name
	int last_space_position;
	for (last_space_position = full_name.length() - 1; last_space_position >= 0; --last_space_position)
		if (full_name[last_space_position] == ' ')
			break;

	//	generate username
	int i;
	string username;
	username += tolower(full_name[0]);

	for (i = 1; i < last_space_position; ++i)
		if (full_name[i] == ' ')
			username += tolower(full_name[i + 1]);

	for (i = last_space_position + 1; i < full_name.length(); ++i)
		username += tolower(full_name[i]);

	//	generate password
	string password = username;
	for (i = phone.size() - 4; i < phone.size(); ++i)
		password += phone[i];
	//	passing the default username and password
	this->username = username;
	this->password = password;
}

void student::generatePassword() {
	//	generate default password for student
	//	by Nghia

	//	find the position of the last name
	int last_space_position;
	for (last_space_position = full_name.length() - 1; last_space_position >= 0; --last_space_position)
		if (full_name[last_space_position] == ' ')
			break;

	//	generate username
	int i;
	string short_name;
	short_name += tolower(full_name[0]);

	for (i = 1; i < last_space_position; ++i)
		if (full_name[i] == ' ')
			short_name += tolower(full_name[i + 1]);

	for (i = last_space_position + 1; i < full_name.length(); ++i)
		short_name += tolower(full_name[i]);

	//	generate password
	string password = short_name;
	for (i = phone.size() - 4; i < phone.size(); ++i)
		password += phone[i];

	//	passing the defalut password to the student
	this->password = password;
}

//	14
void importCourses(string path, courseList& a) {
	//	import courses from a .csv file
	//	Nguyen Ho Huu Nghia

	ifstream fin(path);
	fin.ignore(10000, '\n');

	a.head = NULL;
	if (fin.good()) {

		course* cur;

		//	start reading students' info
		string buffer;

		while (fin.good()) {

			if (a.head == NULL) {
				a.head = new course;
				getline(fin, a.head->course_code, ',');
				getline(fin, a.head->course_name, ',');
				getline(fin, a.head->lecturer_username, ',');
				getline(fin, a.head->year, ',');
				getline(fin, buffer, ',');
				a.head->semester = stoi(buffer);

				getline(fin, buffer, '-');
				a.head->start_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				a.head->start_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				a.head->start_date.day = stoi(buffer);

				getline(fin, buffer, '-');
				a.head->end_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				a.head->end_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				a.head->end_date.year = stoi(buffer);
				getline(fin, a.head->room, '\n');
				a.head->next = NULL;
				cur = a.head;
			}

			else {
				cur->next = new course;
				cur = cur->next;
				getline(fin, cur->course_code, ',');
				getline(fin, cur->course_name, ',');
				getline(fin, cur->lecturer_username, ',');
				getline(fin, cur->year, ',');
				getline(fin, buffer, ',');
				cur->semester = stoi(buffer);

				getline(fin, buffer, '-');
				cur->start_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				cur->start_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				cur->start_date.day = stoi(buffer);

				getline(fin, buffer, '-');
				cur->end_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				cur->end_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				cur->end_date.year = stoi(buffer);

				getline(fin, cur->room, '\n');
				cur->next = NULL;
			}
		}
	}
	fin.close();
}

//	14
//	For the users
void importCourses(courseList& a) {
	//	import courses from a .csv file
	//	Nguyen Ho Huu Nghia

	cout << "Enter the path of the .csv file: ";
	string path;
	getline(cin, path, '\n');

	ifstream fin(path);
	fin.ignore(10000, '\n');

	a.head = NULL;
	if (fin.good()) {

		course* cur;

		//	start reading students' info
		string buffer;

		while (fin.good()) {

			if (a.head == NULL) {
				a.head = new course;
				getline(fin, a.head->course_code, ',');
				getline(fin, a.head->course_name, ',');
				getline(fin, a.head->lecturer_username, ',');
				getline(fin, a.head->year, ',');
				getline(fin, buffer, ',');
				a.head->semester = stoi(buffer);

				getline(fin, buffer, '-');
				a.head->start_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				a.head->start_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				a.head->start_date.day = stoi(buffer);

				getline(fin, buffer, '-');
				a.head->end_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				a.head->end_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				a.head->end_date.year = stoi(buffer);
				getline(fin, a.head->room, '\n');
				a.head->next = NULL;
				cur = a.head;
			}

			else {
				cur->next = new course;
				cur = cur->next;
				getline(fin, cur->course_code, ',');
				getline(fin, cur->course_name, ',');
				getline(fin, cur->lecturer_username, ',');
				getline(fin, cur->year, ',');
				getline(fin, buffer, ',');
				cur->semester = stoi(buffer);

				getline(fin, buffer, '-');
				cur->start_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				cur->start_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				cur->start_date.day = stoi(buffer);

				getline(fin, buffer, '-');
				cur->end_date.day = stoi(buffer);
				getline(fin, buffer, '-');
				cur->end_date.month = stoi(buffer);
				getline(fin, buffer, ',');
				cur->end_date.year = stoi(buffer);

				getline(fin, cur->room, '\n');
				cur->next = NULL;
			}
		}
	}
	fin.close();
}

//	15
void courseList::addNewCourse()
{
	//Nguyen Vo Duc Loc
	//add a new empty course to List

	string name, code;

	cin.get();
	cout << "pls enter your course name: ";
	getline(cin, name);

	cout << "pls enter your course code: ";
	cin >> code;

	course *cur = head;
	if (head == NULL)
	{
		head = new course;
		head->course_name = name;
		head->course_code = code;
		head->next = NULL;
		cout << "you add a new course successfully" << endl;
		return;
	}
	else
		while (cur->next != NULL)
			cur = cur->next;
	cur->next = new course;
	cur = cur->next;
	cur->next = NULL;
	cur->course_name = name;
	cur->course_code = code;
	cout << "you add a new course successfully" << endl;
}

//	16
void editExistingCourse(courseList &a) {
	//	edit the details about an existing course
	//	by Nguyen Ho Huu Nghia

	while (true) {
		int temp;
		cout << "Enter the code of the course you want to edit: ";
		string course_code;
		cin >> course_code;

		//	traverse the course list until the course is found or
		//	there is no course left
		course* cur = a.head;
		while (cur && course_code.compare(cur->course_code))
			cur = cur->next;

		//	if there is no course left
		if (!cur) {
			cout << "Course not found";
		}
		//	if the course is found
		else {
			while (true) {
				cout << "Enter the number of the action you want to take:\n"
					<< "1. Edit the course code\n"
					<< "2. Edit the course name\n"
					<< "3. Edit the lecturer username\n"
					<< "4. Edit the year the course takes place\n"
					<< "5. Edit the semester the course takes place\n";
				cin >> temp;
				switch (temp) {
				case 1:
					cout << "Enter the new course code: ";
					cin >> cur->course_code;
					break;
				case 2:
					cout << "Enter the new course name: ";
					cin.ignore();
					getline(cin, cur->course_name);
					break;
				case 3:
					cout << "Enter the new lecturer username: ";
					cin >> cur->lecturer_username;
					break;
				case 4:
					cout << "Enter the new year: ";
					cin >> cur->year;
					break;
				case 5:
					cout << "Enter the new semester: ";
					cin >> cur->semester;
					break;
				}
				system("cls");
				cout << "The new information has been added.\n"
					<< "Do you want to edit any other information about this course?\nEnter 0 for \"no\" and 1 for \"yes\"\n";
				if (temp == 0)
					break;
			}
		}
		cout << "Do you want to edit another course?\n"
			<< "Enter 1 if you do and 0 if you don't:\n";
		cin >> temp;
		if (temp == 0)
			break;
	}
}

//	17
void removeAcourse(courseList b)
{
	// Vy Vy
	// Finished but haven't checked

	course* cur = b.head;
	course* del;
	string code;
	cout << "Enter the course's code you want to remove: ";
	getline(cin, code, '\n');

	if (b.head || code == b.head->course_code) {		//1st course
		del = b.head;
		b.head = b.head->next;
		delete del;
		return;
	}

	while (cur->next || cur->next->course_code != code)
		cur = cur->next;

	if (cur->next) {
		del = cur->next;
		cur->next = del->next;
		delete del;
	}
	else if (!cur->next) {
		cout << "Sorry, the course you want to delete doesn't exist.\n";
	}
}

//	18
void viewCourseList(courseList a) {

	//	By NT Tung

	course* cur = a.head;
	cout << "List of courses" << endl;
	while (cur != NULL) {
		cout << "Course code : " << cur->course_code << endl << " Course name : " << cur->course_name << endl << endl;
		cur = cur->next;
	}
}

void gotoxy(int x, int y)
{
	//	Don't mind this function, it's for experimental purpose for later UI

	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//	19
//	This version is for importing courses' schedule without asking for the class and path
//	For the developers
void importCoursesSchedulesOfAClass(courseList &course_list, classList &class_list, string path, string class_name) {

	//	import all courses' schedules of a single class from a .csv file
	//	By Nguyen Ho Huu Nghia

	//	open the file
	ifstream fin;
	fin.open(path);

	//	check if file is succesfully opened
	if (!fin.is_open()) {
		cout << "File at the following address is not loaded: \n"
			<< path << endl;
		fin.close();
	}
	else {

		classYear *cur_class = class_list.head;

		if (class_name != class_list.head->class_name) {
			while (cur_class->next && cur_class->next->class_name != class_name)
				cur_class = cur_class->next;
			if (!cur_class->next) {
				cur_class->next = new classYear;
				cur_class = cur_class->next;
				cur_class->next = NULL;
				cur_class->class_name = class_name;
			}
			else
				cur_class = cur_class->next;
		}

		//	ignore the 1st line containing the name of columns
		fin.ignore(10000, '\n');


		cur_class->head_course_code = new courseCode;
		cur_class->head_course_code->next = NULL;
		char buffer[5];

		getline(fin, cur_class->head_course_code->course_code, ',');

		//	find the corresponding course in the course list
		course *cur_course = course_list.head, *pre_course = cur_course;
		while (cur_course->course_code != cur_class->head_course_code->course_code && cur_course != NULL) {
			pre_course = cur_course;
			cur_course = cur_course->next;
		}

		//	if the course doesn't exist, add a new one
		if (cur_course == NULL) {
			pre_course->next = new course;
			cur_course = pre_course->next;
		}

		getline(fin, cur_course->course_name, ',');
		getline(fin, cur_course->lecturer_username, ',');


		schedule* cur_schedule = createNewNode(cur_course->head_schedule);

		cur_schedule->class_name = cur_class->class_name;

		getline(fin, cur_schedule->year, ',');

		fin.getline(buffer, 2, ',');
		cur_schedule->semester = atoi(buffer);

		//	start date
		fin.getline(buffer, 3, '-');
		cur_schedule->start_date.day = atoi(buffer);
		fin.getline(buffer, 3, '-');
		cur_schedule->start_date.month = atoi(buffer);
		fin.getline(buffer, 5, ',');
		cur_schedule->start_date.year = atoi(buffer);

		//	end date
		fin.getline(buffer, 3, '-');
		cur_schedule->end_date.day = atoi(buffer);
		fin.getline(buffer, 3, '-');
		cur_schedule->end_date.month = atoi(buffer);
		fin.getline(buffer, 5, ',');
		cur_schedule->end_date.year = atoi(buffer);

		fin.getline(buffer, 2, ',');
		switch (atoi(buffer)) {
		case 1:
			cur_schedule->course_session.session_day = sunday;
			break;
		case 2:
			cur_schedule->course_session.session_day = monday;
			break;
		case 3:
			cur_schedule->course_session.session_day = tuesday;
			break;
		case 4:
			cur_schedule->course_session.session_day = wednesday;
			break;
		case 5:
			cur_schedule->course_session.session_day = thursday;
			break;
		case 6:
			cur_schedule->course_session.session_day = friday;
			break;
		case 7:
			cur_schedule->course_session.session_day = saturday;
			break;
		}
		//	Start time
		fin.getline(buffer, 3, ':');
		cur_schedule->course_session.start.hour = atoi(buffer);
		fin.getline(buffer, 3, ',');
		cur_schedule->course_session.start.minute = atoi(buffer);

		//	End time
		fin.getline(buffer, 3, ':');
		cur_schedule->course_session.end.hour = atoi(buffer);
		fin.getline(buffer, 3, ',');
		cur_schedule->course_session.end.minute = atoi(buffer);

		//	Get room
		getline(fin, cur_schedule->room, '\n');

		/*
		cur_class.head_course->course_code = course_code;
		cur_class.head_course->course_name = course_name;
		cur_class.head_course->lecturer_username = lecturer_username;
		cur_class.head_course->year = year;
		cur_class.head_course->semester = semester;
		cur_class.head_course->start_date = start_date;
		cur_class.head_course->end_date = end_date;
		cur_class.head_course->course_session = course_session;
		cur_class.head_course->room = room;
		*/

		courseCode* cur_course_code = cur_class->head_course_code;


		while (fin.good()) {

			//	create a new course code 
			cur_course_code->next = new courseCode;
			cur_course_code = cur_course_code->next;

			getline(fin, cur_course_code->course_code, ',');

			//	find the corresponding course in the course list
			course *cur_course = course_list.head, *pre_course = cur_course;
			while (cur_course->course_code != cur_course_code->course_code && cur_course != NULL) {
				pre_course = cur_course;
				cur_course = cur_course->next;
			}

			//	if the course doesn't exist, add a new one
			if (cur_course == NULL) {
				pre_course->next = new course;
				cur_course = pre_course->next;
			}

			getline(fin, cur_course->course_name, ',');
			getline(fin, cur_course->lecturer_username, ',');

			schedule* cur_schedule = createNewNode(cur_course->head_schedule);

			cur_schedule->class_name = cur_class->class_name;

			getline(fin, cur_schedule->year, ',');

			fin.getline(buffer, 2, ',');
			cur_schedule->semester = atoi(buffer);

			//	start date
			fin.getline(buffer, 3, '-');
			cur_schedule->start_date.day = atoi(buffer);
			fin.getline(buffer, 3, '-');
			cur_schedule->start_date.month = atoi(buffer);
			fin.getline(buffer, 5, ',');
			cur_schedule->start_date.year = atoi(buffer);

			//	end date
			fin.getline(buffer, 3, '-');
			cur_schedule->end_date.day = atoi(buffer);
			fin.getline(buffer, 3, '-');
			cur_schedule->end_date.month = atoi(buffer);
			fin.getline(buffer, 5, ',');
			cur_schedule->end_date.year = atoi(buffer);

			fin.getline(buffer, 2, ',');
			switch (atoi(buffer)) {
			case 1:
				cur_schedule->course_session.session_day = sunday;
				break;
			case 2:
				cur_schedule->course_session.session_day = monday;
				break;
			case 3:
				cur_schedule->course_session.session_day = tuesday;
				break;
			case 4:
				cur_schedule->course_session.session_day = wednesday;
				break;
			case 5:
				cur_schedule->course_session.session_day = thursday;
				break;
			case 6:
				cur_schedule->course_session.session_day = friday;
				break;
			case 7:
				cur_schedule->course_session.session_day = saturday;
				break;
			}
			//	Start time
			fin.getline(buffer, 3, ':');
			cur_schedule->course_session.start.hour = atoi(buffer);
			fin.getline(buffer, 3, ',');
			cur_schedule->course_session.start.minute = atoi(buffer);

			//	End time
			fin.getline(buffer, 3, ':');
			cur_schedule->course_session.end.hour = atoi(buffer);
			fin.getline(buffer, 3, ',');
			cur_schedule->course_session.end.minute = atoi(buffer);

			//	Get room
			getline(fin, cur_schedule->room, '\n');

		}
		fin.close();
	}

}

//	19
//	This version asks the user what is the class and the file path
//	For the users
void importCoursesSchedulesOfAClass(courseList &course_list, classList &class_list) {

	//	import all courses' schedules of a single class from a .csv file
	//	By Nguyen Ho Huu Nghia
	cout << "Enter the path of the file: ";
	string path;
	cin.ignore();
	getline(cin, path, '\n');

	//	open the file
	ifstream fin;
	fin.open(path);

	string class_name;
	cout << "Enter the name of the class: ";
	getline(cin, class_name, '\n');

	classYear *cur_class = class_list.head;

	if (class_name != class_list.head->class_name) {
		while (cur_class->next && cur_class->next->class_name != class_name)
			cur_class = cur_class->next;
		if (!cur_class->next) {
			cout << "Class not found.\n"
				<< "Do you want to add this class?\n"
				<< "[y]Yes\n"
				<< "[n]No\n";
			char check_add;
			cin >> check_add;
			if (check_add == 'n')
				return;
			else {
				cur_class->next = new classYear;
				cur_class = cur_class->next;
				cur_class->next = NULL;
				cur_class->class_name = class_name;
			}

			return;
		}
		else
			cur_class = cur_class->next;
	}

	//	check if file is succesfully opened
	if (!fin.is_open()) {
		cout << "File at the following address is not loaded: \n"
			<< path << endl;
		fin.close();
	}
	else {


		//	ignore the 1st line containing the name of columns
		fin.ignore(10000, '\n');


		cur_class->head_course_code = new courseCode;
		cur_class->head_course_code->next = NULL;
		char buffer[5];

		getline(fin, cur_class->head_course_code->course_code, ',');

		//	find the corresponding course in the course list
		course *cur_course = course_list.head, *pre_course = cur_course;
		while (cur_course->course_code != cur_class->head_course_code->course_code && cur_course != NULL) {
			pre_course = cur_course;
			cur_course = cur_course->next;
		}

		//	if the course doesn't exist, add a new one
		if (cur_course == NULL) {
			pre_course->next = new course;
			cur_course = pre_course->next;
		}

		getline(fin, cur_course->course_name, ',');
		getline(fin, cur_course->lecturer_username, ',');


		schedule* cur_schedule = createNewNode(cur_course->head_schedule);

		cur_schedule->class_name = cur_class->class_name;

		getline(fin, cur_schedule->year, ',');

		fin.getline(buffer, 2, ',');
		cur_schedule->semester = atoi(buffer);

		//	start date
		fin.getline(buffer, 3, '-');
		cur_schedule->start_date.day = atoi(buffer);
		fin.getline(buffer, 3, '-');
		cur_schedule->start_date.month = atoi(buffer);
		fin.getline(buffer, 5, ',');
		cur_schedule->start_date.year = atoi(buffer);

		//	end date
		fin.getline(buffer, 3, '-');
		cur_schedule->end_date.day = atoi(buffer);
		fin.getline(buffer, 3, '-');
		cur_schedule->end_date.month = atoi(buffer);
		fin.getline(buffer, 5, ',');
		cur_schedule->end_date.year = atoi(buffer);

		fin.getline(buffer, 2, ',');
		switch (atoi(buffer)) {
		case 1:
			cur_schedule->course_session.session_day = sunday;
			break;
		case 2:
			cur_schedule->course_session.session_day = monday;
			break;
		case 3:
			cur_schedule->course_session.session_day = tuesday;
			break;
		case 4:
			cur_schedule->course_session.session_day = wednesday;
			break;
		case 5:
			cur_schedule->course_session.session_day = thursday;
			break;
		case 6:
			cur_schedule->course_session.session_day = friday;
			break;
		case 7:
			cur_schedule->course_session.session_day = saturday;
			break;
		}
		//	Start time
		fin.getline(buffer, 3, ':');
		cur_schedule->course_session.start.hour = atoi(buffer);
		fin.getline(buffer, 3, ',');
		cur_schedule->course_session.start.minute = atoi(buffer);

		//	End time
		fin.getline(buffer, 3, ':');
		cur_schedule->course_session.end.hour = atoi(buffer);
		fin.getline(buffer, 3, ',');
		cur_schedule->course_session.end.minute = atoi(buffer);

		//	Get room
		getline(fin, cur_schedule->room, '\n');

		/*
		cur_class.head_course->course_code = course_code;
		cur_class.head_course->course_name = course_name;
		cur_class.head_course->lecturer_username = lecturer_username;
		cur_class.head_course->year = year;
		cur_class.head_course->semester = semester;
		cur_class.head_course->start_date = start_date;
		cur_class.head_course->end_date = end_date;
		cur_class.head_course->course_session = course_session;
		cur_class.head_course->room = room;
		*/

		courseCode* cur_course_code = cur_class->head_course_code;


		while (fin.good()) {

			//	create a new course code 
			cur_course_code->next = new courseCode;
			cur_course_code = cur_course_code->next;

			getline(fin, cur_course_code->course_code, ',');

			//	find the corresponding course in the course list
			course *cur_course = course_list.head, *pre_course = cur_course;
			while (cur_course->course_code != cur_course_code->course_code && cur_course != NULL) {
				pre_course = cur_course;
				cur_course = cur_course->next;
			}

			//	if the course doesn't exist, add a new one
			if (cur_course == NULL) {
				pre_course->next = new course;
				cur_course = pre_course->next;
			}

			getline(fin, cur_course->course_name, ',');
			getline(fin, cur_course->lecturer_username, ',');

			schedule* cur_schedule = createNewNode(cur_course->head_schedule);

			cur_schedule->class_name = cur_class->class_name;

			getline(fin, cur_schedule->year, ',');

			fin.getline(buffer, 2, ',');
			cur_schedule->semester = atoi(buffer);

			//	start date
			fin.getline(buffer, 3, '-');
			cur_schedule->start_date.day = atoi(buffer);
			fin.getline(buffer, 3, '-');
			cur_schedule->start_date.month = atoi(buffer);
			fin.getline(buffer, 5, ',');
			cur_schedule->start_date.year = atoi(buffer);

			//	end date
			fin.getline(buffer, 3, '-');
			cur_schedule->end_date.day = atoi(buffer);
			fin.getline(buffer, 3, '-');
			cur_schedule->end_date.month = atoi(buffer);
			fin.getline(buffer, 5, ',');
			cur_schedule->end_date.year = atoi(buffer);

			fin.getline(buffer, 2, ',');
			switch (atoi(buffer)) {
			case 1:
				cur_schedule->course_session.session_day = sunday;
				break;
			case 2:
				cur_schedule->course_session.session_day = monday;
				break;
			case 3:
				cur_schedule->course_session.session_day = tuesday;
				break;
			case 4:
				cur_schedule->course_session.session_day = wednesday;
				break;
			case 5:
				cur_schedule->course_session.session_day = thursday;
				break;
			case 6:
				cur_schedule->course_session.session_day = friday;
				break;
			case 7:
				cur_schedule->course_session.session_day = saturday;
				break;
			}
			//	Start time
			fin.getline(buffer, 3, ':');
			cur_schedule->course_session.start.hour = atoi(buffer);
			fin.getline(buffer, 3, ',');
			cur_schedule->course_session.start.minute = atoi(buffer);

			//	End time
			fin.getline(buffer, 3, ':');
			cur_schedule->course_session.end.hour = atoi(buffer);
			fin.getline(buffer, 3, ',');
			cur_schedule->course_session.end.minute = atoi(buffer);

			//	Get room
			getline(fin, cur_schedule->room, '\n');

		}
		fin.close();
	}

}

//	20
void addACourseSchedule(courseList &course_list, classList &class_list) {

	//	add a new course at the end of the course list and let the user type in its schedule
	//	by Nguyen Ho Huu Nghia

	string class_name;
	cout << "Enter the name of the class: ";
	cin >> class_name;

	//	find the class in the class list
	classYear* cur_class = class_list.head;
	if (class_list.head->class_name != class_name) {
		while (cur_class->next != NULL && cur_class->class_name != class_name)
			cur_class = cur_class->next;
		if (cur_class->next == NULL) {
			cout << "Class not found. Press Enter to continue\n";
			system("pause");
			return;
		}
		else {
			cur_class = cur_class->next;
		}
	}

	char buffer[100];
	courseCode* cur_course_code = createNewNode(cur_class->head_course_code);

	system("cls");
	cout << "Enter the course code: ";
	cin >> cur_course_code->course_code;

	course *cur_course = course_list.head;
	if (course_list.head == NULL) {
		cout << "Course does not exist. Do you want to add it?\n"
			<< "[Y]Yes\n[N]No\n"
			<< "Your answer: ";
		char a;
		cin >> a;
		if (a == 'N') {
			cout << "Press Enter to continue.\n";
			return;
		}
		else {
			cur_course = new course;
		}
	}
	else {
		while (cur_course->next && cur_course->next->course_code != cur_course_code->course_code)
			cur_course = cur_course->next;
		if (!cur_course->next) {
			cout << "Course does not exist. Do you want to add it?\n"
				<< "[Y]Yes\n[N]No\n"
				<< "Your answer: ";
			char a;
			cin >> a;
			if (a == 'N')
				return;
			else {
				cur_course->next = new course;
				cur_course = cur_course->next;
			}
		}
		else {
			cur_course = cur_course->next;
		}
	}

	schedule *cur_schedule = createNewNode(cur_course->head_schedule);

	cur_schedule->class_name = cur_class->class_name;

	/*
	system("cls");
	cout << "Enter the course name: ";
	cin.ignore();
	cin.getline(buffer, 100, '\n');
	cur_course->course_name = buffer;

	system("cls");
	cout << "Enter the course lecturer username: ";
	cin.getline(buffer, 100, '\n');
	cur_course->lecturer_username = buffer;
	*/


	system("cls");
	cout << "Enter the year in which the course take place: ";
	cin.ignore();
	getline(cin, cur_course->year, '\n');
	system("cls");
	cout << "Enter the semester in which the course take place: ";
	cin >> cur_course->semester;
	system("cls");

	cout << "Enter the start date in the format of dd-mm-yyyy: ";
	cin.ignore();
	cin.getline(buffer, 3, '-');
	cur_schedule->start_date.day = atoi(buffer);
	cin.getline(buffer, 3, '-');
	cur_schedule->start_date.month = atoi(buffer);
	cin.getline(buffer, 5, '\n');
	cur_schedule->start_date.year = atoi(buffer);

	system("cls");
	cout << "Enter the end date in the format of dd-mm-yyyy: ";
	cin.getline(buffer, 3, '-');
	cur_schedule->end_date.day = atoi(buffer);
	cin.getline(buffer, 3, '-');
	cur_schedule->end_date.month = atoi(buffer);
	cin.getline(buffer, 5, '\n');
	cur_schedule->end_date.year = atoi(buffer);

	system("cls");
	cout << "Enter the day of the week in which the session take place:\n"
		<< "[1] Sunday\n"
		<< "[2] Monday\n"
		<< "[3] Tuesday\n"
		<< "[4] Wednesday\n"
		<< "[5] Thursday\n"
		<< "[6] Friday\n"
		<< "[7] Saturday\n";
	int temp;
	cin >> temp;
	switch (temp) {
	case 1:
		cur_schedule->course_session.session_day = sunday;
		break;
	case 2:
		cur_schedule->course_session.session_day = monday;
		break;
	case 3:
		cur_schedule->course_session.session_day = tuesday;
		break;
	case 4:
		cur_schedule->course_session.session_day = wednesday;
		break;
	case 5:
		cur_schedule->course_session.session_day = thursday;
		break;
	case 6:
		cur_schedule->course_session.session_day = friday;
		break;
	case 7:
		cur_schedule->course_session.session_day = saturday;
		break;
	}

	system("cls");
	cout << "Enter the start time of the session in the format hh:mm : ";
	cin.get();
	cin.getline(buffer, 3, ':');
	cur_schedule->course_session.start.hour = atoi(buffer);
	cin.getline(buffer, 3, '\n');
	cur_schedule->course_session.start.minute = atoi(buffer);

	system("cls");
	cout << "Enter the end time of the session in the format hh:mm : ";
	cin.getline(buffer, 3, ':');
	cur_schedule->course_session.end.hour = atoi(buffer);
	cin.getline(buffer, 3, '\n');
	cur_schedule->course_session.end.minute = atoi(buffer);

	system("cls");
	cout << "Enter the name of the room in which the session takes place: ";
	cin >> cur_schedule->room;
}

bool exit() {
	bool t;
	cout << "Do you want to exit ? not 0 =YES, 0=NO : ";
	cin >> t;
	return t;
}





//==============================================================================================================


int posi(std::string str, char chr)
{
	//Nguyen Vo Duc Loc
	//fine a character in a substring

	for (int i = 0; i < str.length(); i++)
		if (chr == str[i])
			return i;
	return -1;
}

bool checkStringOfTimes(std::string times)
{
	//Nguyen Vo Duc Loc
	//check if the string is a form of times

	if (posi(times, ':') < 0)
		return false;

	for (int i = 0; i < times.length(); i++)
		if (times[i] != ':')
		{
			int u = int(times[i]);
			if (u < 48 || u>57)
				return false;
		}

	return true;
}

bool changeUnitTimes(string times, Time &T)
{
	//Nguyen Vo Duc Loc
	//change a strings of time into hour and minute 

	T.hour = 0;
	T.minute = 0;

	int tmp = posi(times, ':');

	if (checkStringOfTimes(times))
	{
		for (int i = 0; i < tmp; i++)
			T.hour = T.hour * 10 + int(times[i]) - 48;

		for (int i = tmp + 1; i < times.length(); i++)
			T.minute = T.minute * 10 + int(times[i]) - 48;
	}

	if (T.hour < 0 || T.hour>23 || T.minute > 59 || T.minute < 0)
	{
		T.hour = 0;
		T.minute = 0;
		return false;
	}
	return true;
}

bool isLeapYear(char year)
{
	//Nguyen Vo Duc Loc
	return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

bool checkDate(date D)
{
	//Nguyen Vo Duc Loc

	if (D.month < 1 || D.month>12 || D.day < 1)
		return false;

	if (D.month == 1 || D.month == 3 || D.month == 5 || D.month == 7 || D.month == 8 || D.month == 10 || D.month == 12)
	{
		if (D.day > 31)
			return false;
	}
	else
		if (D.month == 2)
		{
			if (isLeapYear(D.year))
			{
				if (D.day > 29)
					return false;
			}
			else
				if (D.day > 28)
					return false;
		}
		else
			if (D.day > 30)
				return false;
	return true;
}

bool changeUnitDate(string str, date &D)
{
	//Nguyen Vo Duc Loc

	int temp = 0;

	D.day = 0;
	D.month = 0;
	D.year = 0;

	for (int i = 0; i < str.length(); i++)
		if (str[i] != '-')
		{
			int u = int(str[i]) - 48;
			if (u<0 || u>9)
				return false;
		}
		else
			temp++;

	if (temp != 2)
		return false;

	int posi = 0, sum = 0;

	while (str[posi] != '-')
	{
		sum = sum * 10 + int(str[posi]) - 48;
		posi++;
	}
	D.day = sum;

	posi++;
	sum = 0;
	while (str[posi] != '-')
	{
		sum = sum * 10 + int(str[posi]) - 48;
		posi++;
	}
	D.month = sum;

	posi++;
	sum = 0;
	while (posi < str.length())
	{
		sum = sum * 10 + int(str[posi]) - 48;
		posi++;
	}
	D.year = sum;

	if (checkDate(D))
		return true;
	else
	{
		D.day = 0;
		D.month = 0;
		D.year = 0;
		return false;
	}
}

bool isBefore(date first, date second)
{
	//Nguyen Vo Duc Loc

	if (first.year < second.year)
		return true;

	if (first.year > second.year)
		return false;

	if (first.month < second.month)
		return true;

	if (first.month > second.month)
		return false;

	if (first.day < second.day)
		return true;

	if (first.day > second.day)
		return false;

	return true;
}

bool interrupted(Time start1, Time end1, Time start2, Time end2)
{
	//Nguyen Vo Duc Loc
	//check if 2 interval of time is interrupted

	int begin1 = start1.hour * 60 + start1.minute;
	int stop1 = end1.hour * 60 + end1.minute;

	int begin2 = start2.hour * 60 + start2.minute;
	int stop2 = end2.hour * 60 + end2.minute;

	if (begin1 > stop2 || stop1 < begin2)
		return false;

	return true;
}

bool isDuplicatedTimes(courseList L, string course_code, schedule *tempSchedule, dateofweek date, string room, Time start, Time end)
{

	//Nguyen Vo Duc Loc
	//check if time is duplicated with other schedule


	//------------------------check if there are no duplicated along the courseList
	course *cur = L.head;
	schedule *pre;

/*	std::cout << std::endl;
	std::cout << course_code << std::endl;
	std::cout << tempSchedule->class_name << std::endl;
	std::cout << tempSchedule->course_session.session_day << std::endl;
	std::cout << tempSchedule->course_session.start.hour << ":" << tempSchedule->course_session.start.minute << std::endl;
	std::cout << tempSchedule->course_session.end.hour << ":" << tempSchedule->course_session.end.minute << std::endl;
	std::cout << tempSchedule->room << std::endl;
	std::cout << std::endl;
*/
	while (cur != NULL)
	{
		pre = cur->head_schedule;
		while (pre != NULL)
		{
/*			std::cout << cur->course_code << std::endl;
			std::cout << pre->class_name << std::endl;
			std::cout << pre->course_session.session_day << std::endl;
			std::cout << pre->course_session.start.hour <<":"<<pre->course_session.start.minute<< std::endl;
			std::cout << pre->course_session.end.hour << ":" << pre->course_session.end.minute << std::endl;
			std::cout << pre->room << std::endl <<std::endl;
*/
			if (pre != tempSchedule)
			{
				if (pre->class_name == tempSchedule->class_name && pre->course_session.session_day==date)
				{
					if (interrupted(start, end, pre->course_session.start, pre->course_session.end))
						return true;
				}
				else
				if (pre->course_session.session_day == date && pre->room == room)
				{
					if (interrupted(start, end, pre->course_session.start, pre->course_session.end))
					{
/*						std::cout << start.hour << ":" << start.minute << " ";
						std::cout << end.hour << ":" << end.minute << std::endl;
						std::cout << pre->course_session.start.hour << ":" << pre->course_session.start.minute << " ";
						std::cout << pre->course_session.end.hour << ":" << pre->course_session.end.minute;
						std::cout << std::endl;
*/	
						return true;
					}
				}
			}
			pre = pre->next;
		}
		cur = cur->next;
	}

	//-----------------check if there are no interruption in a Course
	cur = L.head;
	while (cur != NULL)
	{
		if (cur->course_code == course_code)
			break;
		cur = cur->next;
	}

	if (cur != NULL)
	{
		pre = cur->head_schedule;
		while (pre != NULL)
		{
			if (pre!=tempSchedule)
				if (date==pre->course_session.session_day)
					if (interrupted(pre->course_session.start, pre->course_session.end, start, end))
					{
						return true;
					}
			pre = pre->next;
		}
	}

	return false;
}

//	21
void editCourseSchedule(courseList L)
{
	//Nguyen Vo Duc Loc
	//dep trai phong do


	string course_code, class_name;
	std::cout << "pls enter the course code: "; std::cin >> course_code;
	std::cout << "pls enter the class name: "; std::cin >> class_name;

	course *cur_course = L.head;
	schedule *cur_schedule = NULL;

	//-------------------------check if course_code and class_name existed--

	while (cur_course != NULL)
	{
		if (cur_course->course_code == course_code)
			break;
		cur_course = cur_course->next;
	}

	if (cur_course != NULL)
	{
		cur_schedule = cur_course->head_schedule;
		while (cur_schedule != NULL)
		{
			if (cur_schedule->class_name == class_name)
				break;
			cur_schedule = cur_schedule->next;
		}
	}
	//--------------------------------------------
	if (cur_course != NULL && cur_schedule != NULL)		//if they existed
	{
		dateofweek date;
		int tempDate;

		std::cout << "pls enter the index of date (sunday..saturday = 1..7): ";
		std::cin >> tempDate;
		switch (tempDate)
		{
		case 1:date = sunday;
			break;
		case 2:date = monday;
			break;
		case 3:date = tuesday;
			break;
		case 4:date = wednesday;
			break;
		case 5:date = thursday;
			break;
		case 6:date = saturday;
			break;
		case 7:date = sunday;
			break;
		}

		std::cin.ignore(10, '\n');
		std::string room;
		std::cout << "pls enter the room you want to book: ";
		std::getline(cin, room);

		std::string begin;
		std::cout << "pls enter the time you want to start your lesson (hour:minute): ";
		std::cin >> begin;

		std::string finish;
		std::cout << "pls enter the time you want to finish your lesson (hour:minute): ";
		std::cin >> finish;

		Time start, end;

		if (tempDate>0 && tempDate<8 && changeUnitTimes(begin, start) && changeUnitTimes(finish, end))
		{
			if (!isDuplicatedTimes(L, course_code, cur_schedule, date, room, start, end))
			{
				cur_schedule->room = room;
				cur_schedule->course_session.session_day = date;
				cur_schedule->course_session.start = start;
				cur_schedule->course_session.end = end;
				std::cout << "changed successfully" << std::endl;
			}
			else
				std::cout << " UNSUCESSFULLY ! Your schedule is duplicated" << std::endl;
		}
		else
			std::cout << "syntax Error" << std::endl;
	}
	else
	{
		if (cur_course == NULL)
			std::cout << "course code wrong" << std::endl;
		if (cur_schedule == NULL)
			std::cout << "class name wrong" << std::endl;
		std::cout << "wrong information" << std::endl;	//if they didn't exist
	}

	char tmp;

	std::cout << "pls enter 1 if you want to edit the schedule again: ";
	std::cin >> tmp;

	if (tmp == '1')
		editCourseSchedule(L);
}



//==============================================================================================================







//	23
void viewListOfSchedules(courseList &course_list, classList &class_list) {
	//	View list of schedules of a class
	//	By Nghia

	string class_name;
	cout << "Enter the name of the class: ";
	cin.ignore();
	getline(cin, class_name, '\n');

	//	find the class from the list
	classYear* cur_class;
	findClassFromCode(class_list, class_name, cur_class);

	cout << "Class: " << class_name << endl;

	courseCode* cur_course_code = cur_class->head_course_code;
	course* cur_course;
	while (cur_course_code) {
		findCourseFromCode(course_list, cur_course_code->course_code, cur_course);

		schedule* cur_schedule = cur_course->head_schedule;
		while (cur_schedule && cur_schedule->class_name != class_name)
			cur_schedule = cur_schedule->next;
		if (cur_schedule == NULL)
			return;
		else {
			cout << "-----------------------------\n\n"
				<< "Course code: " << cur_course->course_code << endl
				<< "Course name: " << cur_course->course_name << endl
				<< "Lecturer username: " << cur_course->lecturer_username << endl
				<< "Year: " << cur_schedule->year << endl
				<< "Semester: " << cur_schedule->semester << endl
				<< "Start date: " << cur_schedule->start_date.day << '-' << cur_schedule->start_date.month << '-' << cur_schedule->start_date.year << endl
				<< "End date: " << cur_schedule->end_date.day << '-' << cur_schedule->end_date.month << '-' << cur_schedule->end_date.year << endl
				<< "Course session: " << endl;
			cur_schedule->course_session.displaySession();
			cout << endl;
		}
		cur_course_code = cur_course_code->next;
	}

}

void findCourseFromCode(courseList& course_list, string& course_code, course*  &result) {
	//	Find a course in course list given the class_code
	//	Nghia

	if (course_list.head == NULL) {
		cout << "Course_list.head is NULL\n";
		return;
	}
	course* cur_course = course_list.head;
	while (cur_course && cur_course->course_code != course_code)
		cur_course = cur_course->next;
	if (!cur_course) {
		cout << "Course doesn't exist\n";
	}
	else {
		result = cur_course;
	}
}

void findClassFromCode(classList& class_list, string& class_name, classYear*  &result) {
	//	Find a class in class list given the class_code
	//	Nghia

	if (class_list.head == NULL) {
		cout << "Course_list.head is NULL\n";
		return;
	}
	classYear* cur_class = class_list.head;
	while (cur_class && cur_class->class_name != class_name)
		cur_class = cur_class->next;
	if (!cur_class) {
		cout << "Class doesn't exist\n";
	}
	else {
		result = cur_class;
	}

}

//	24
void viewAttendance(courseList course_list, presence* head_presence)
{
	// Haven't checked
	// Vy Vy

	string code;
	cout << "Enter code of the course you want to check attendance: ";
	cin >> code;
	course* cur = course_list.head;

	while (cur && cur->course_code != code) {
		cur = cur->next;
	}
	if (!cur)
		cout << "Sorry, the course you enter doesn't exist.\n";
	else {
		presence* student_presence = head_presence;
		while (student_presence) {
			cout << setw(17) << "Monday" << setw(5 + 7) << "Tuesday" << setw(5 + 9) << "Wednesday";
			cout << setw(5 + 7) << "Thurday" << setw(5 + 6) << "Friday" << setw(5 + 8) << "Saturday";
			cout << endl;
			cout << student_presence->id << setw(5);
			cout << student_presence->attendance[0] << setw(5 + 6);
			cout << student_presence->attendance[1] << setw(5 + 7);
			cout << student_presence->attendance[2] << setw(5 + 9);
			cout << student_presence->attendance[3] << setw(5 + 7);
			cout << student_presence->attendance[4] << setw(5 + 6);
			cout << student_presence->attendance[5];
			cout << endl;
			student_presence = student_presence->next;
		}
	}
}

//	25
void exportPresence(string path, course a) {

	//	By NT Tung

	ofstream fout;
	fout.open(path);
	presence *cur = a.head_presence;
	fout << a.course_code << endl;
	while (cur != NULL) {
		fout << cur->id << endl;
		cur = cur->next;
	}
}

//	26
course* searchCourse(string a, course *b) {

	//	By NT Tung

	while (b != NULL) {
		if (b->course_code == a) return b;
		b = b->next;
	}
	return NULL;
}

//	26
void viewScore(course* a) {

	//	By NT Tung

	presence* cur = a->head_presence;
	cout << "Scoreboard of " << a->course_code << endl;
	while (cur != NULL) {
		cout << "ID : " << cur->id << " Midterm : " << cur->midterm << " Lab : " << cur->lab << " Final : " << cur->final << endl;
		cur = cur->next;
	}
}

void inputPassword(string &password)
{
	//	Masking password input
	//	By Nguyen Ho Huu Nghia

	char ch;
	do
	{
		ch = getch();
		if (ch == '\n' || ch == 8 || ch == '\r')
			break;
		password.push_back(ch);
		putchar('*');
	} while (ch != '\n');

}

//	29
void editGrade(courseList &a)
{
	//Vy Vy

	string code;
	cout << "Enter the course's code you want to edit grade: ";
	cin >> code;
	course* cur = a.head;
	while (cur && cur->course_code != code) {
		cur = cur->next;
	}
	if (!cur) {
		cout << "Sorry, the code you entered doesn't exist.\n";
		return;
	}
	else {
		int newid;
		cout << "Enter ID of the student you want to edit grade: ";
		cin >> newid;
		presence* edit = cur->head_presence;
		while (edit && edit->id != newid)
			edit = edit->next;
		if (!edit) {
			cout << "Sorry, the ID student you entered doesn't exist.\n";
			return;
		}
		else
			recursionEditGrade(1, edit);
	}
}

void recursionEditGrade(int n, presence *&edit)
{
	// Vy Vy

	if (n == 0) {
		cout << "Please enter edited total grade: ";
		cin >> edit->total;
		return;
	}

	cout << "Which grade you want to edit?\n";
	cout << "1. Mid-term\n";
	cout << "2. Lab\n";
	cout << "3. Final\n";
	cout << "4. Bonus\n";
	int x;
	cin >> x;

	switch (x) {
	case 1: {
		cout << "Please enter edited mid-term grade: ";
		cin >> edit->midterm;
		break;
	}
	case 2: {
		cout << "Please enter edited lab grade: ";
		cin >> edit->lab;
		break;
	}
	case 3: {
		cout << "Please enter edited final grade: ";
		cin >> edit->final;
		break;
	}
	default: {
		cout << "Please enter edited bonus grade: ";
		cin >> edit->bonus;
	}
	}

	cout << "Do you want to edit another grade?\n";
	cout << "1. Yes\n";
	cout << "0. No\n";
	cin >> n;
	recursionEditGrade(n, edit);
}

void Time::displayTime() {
	cout << hour << ":";
	IntToXX(minute);
	cout << endl;
}

void IntToXX(int n) {
	char result[3];
	if (n / 10 == 0) {
		result[0] = '0';
		result[1] = n + '0';
		result[2] = '\0';
		cout << result;
	}
	else
		cout << itoa(n, result, 10);
}

////////////////////////////////////////////////////////////////
int weekFromStartDate(const date &start_date) {
	//	return the week you are in
	//	Nghia
	time_t now = time(0);
	tm *today = localtime(&now), start;
	start.tm_year = start_date.year;
	start.tm_mon = start_date.month;
	start.tm_mday = start_date.day;
	time_t b = mktime(today), a = mktime(&start);
	return difftime(b, a) / (60 * 60 * 24 * 7) + 1;
}

//	31
void student::checkIn(courseList &course_list) {
	//	Nghia
	//	haven't check yet
	string course_code;
	cout << "Enter the code of the course you want to check in: ";
	cin.ignore();
	getline(cin, course_code, '\n');
	course* cur_course = course_list.head;
	while (cur_course && cur_course->course_code != course_code)
		cur_course = cur_course->next;
	if (!cur_course)
		return;
	else {
		presence* cur = cur_course->head_presence;
		while (cur &&cur->id != this->id)
			cur = cur->next;
		if (!cur) {
			cout << "You are not a student of this course.\n";
			return;
		}

		int week = weekFromStartDate(cur_course->start_date);
		cout << "Course: " << course_code << endl
			<< "You are at week " << week << endl
			<< "Please confirm that you want to check in:\n"
			<< "[y]Yes\n[n]No\n"
			<< "Your answer: ";
		char ans;
		cin >> ans;
		if (ans == 'y' || ans == 'Y') {
			cur->attendance[week] = 'x';
		}
	}
}
////////////////////////////////////////////////////////////////////

void student::viewCheckInResult(courseList &course_list) {
	string course_code;
	cout << "Enter the code of the course you want to check in: ";
	cin.ignore();
	getline(cin, course_code, '\n');
	course* cur_course = course_list.head;
	while (cur_course && cur_course->course_code != course_code)
		cur_course = cur_course->next;
	if (!cur_course) {
		cout << "The code you entered matches no existing course.\n";
	}
	else {
		presence* cur = cur_course->head_presence;
		while (cur &&cur->id != this->id)
			cur = cur->next;
		if (!cur) {
			cout << "You are not a student of this course.\n";
			return;
		}

		int week = weekFromStartDate(cur_course->start_date);
		cout << "Course: " << course_code << endl
			<< "You are at week " << week << endl
			<< "Please confirm that you want to check in:\n"
			<< "[y]Yes\n[n]No\n"
			<< "Your answer: ";
		char ans;
		cin >> ans;
		if (ans == 'y' || ans == 'Y') {
			cur->attendance[week] = 'x';
		}
	}
}