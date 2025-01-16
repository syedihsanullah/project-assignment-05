#include <iostream>
#include <string>

using namespace std;

int i = 3;

struct student {
    int ID;
    string name, address, phone, email, course, sem;
    char grade;
    float marks, cgpa;
} s[50] = {
    {1, "Sayed Ihsan Ullah", "B-17", "9876543210", "ihsan@123gmail.com", "Computer Science", "1", 'A', 95, 3.8},
    {2, "Saad Imtiaz", "B-17", "9123456789", "saad@333gmail.com", "Cyber Security", "2", 'B', 80, 3.2},
    {3, "Ubaid ", "B-17", "9988776655", "ubaid@12987gmail.com", "Cyber Security", "3", 'A', 90, 3.6}
};
void delete_record_by_id();
void delete_record_by_name();
void insert_student() {
    cout << "\n **Insert record";
    cout << "\n Enter ID: ";
    cin >> s[i].ID;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s[i].name);
    cout << " Enter Address: ";
    getline(cin, s[i].address);
    cout << " Enter Phone: ";
    cin >> s[i].phone;
    cout << " Enter Email: ";
    cin >> s[i].email;
    cout << " Enter Semester: ";
    cin >> s[i].sem;
    cout << " Enter Course: ";
    cin >> s[i].course;
    cout << " Enter Marks: ";
    cin >> s[i].marks;

    s[i].cgpa = (s[i].marks / 100.0) * 4;

    if (s[i].cgpa >= 3.5) {
        s[i].grade = 'A';
    } else if (s[i].cgpa >= 3.0) {
        s[i].grade = 'B';
    } else if (s[i].cgpa >= 2.5) {
        s[i].grade = 'C';
    } else if (s[i].cgpa >= 2.0) {
        s[i].grade = 'D';
    } else {
        s[i].grade = 'F';
    }

    i++;
    cout << "\n **Record Inserted Successfully";
}

void search_record() {
    cout << "\n **Search Record";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        int id, found = 0;
        cout << "\n Enter Student ID: ";
        cin >> id;
        for (int j = 0; j < i; j++) {
            if (s[j].ID == id) {
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;
                cout << "............................................\n";
                cout << j << " Student Record Found\n";
                found = 1;
                break;
            }
        }

        if (!found) {
            cout << "\n **No Record Found";
        }
    }
}

void update_record() {
    cout << "\n **Update Record";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        int id, found = 0;
        cout << "\n Enter Student ID: ";
        cin >> id;

        for (int j = 0; j < i; j++) {
            if (s[j].ID == id) {
                cout << "\n **Current Record";
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;

                cin.ignore();
                cout << "\n Enter New Name: ";
                getline(cin, s[j].name);
                cout << "\n Enter New Address: ";
                getline(cin, s[j].address);
                cout << "\n Enter New Phone: ";
                cin >> s[j].phone;
                cout << "\n Enter New Email: ";
                cin >> s[j].email;
                cout << "\n Enter New Semester: ";
                cin >> s[j].sem;
                cout << "\n Enter New Course: ";
                cin >> s[j].course;
                cout << "\n Enter New Marks: ";
                cin >> s[j].marks;

                s[j].cgpa = (s[j].marks / 100.0) * 4;

                if (s[j].cgpa >= 3.5) {
                    s[j].grade = 'A';
                } else if (s[j].cgpa >= 3.0) {
                    s[j].grade = 'B';
                } else if (s[j].cgpa >= 2.5) {
                    s[j].grade = 'C';
                } else if (s[j].cgpa >= 2.0) {
                    s[j].grade = 'D';
                } else {
                    s[j].grade = 'F';
                }

                cout << "\n **Record Updated Successfully";
                found = 1;
                break;
            }
        }

        if (!found) {
            cout << "\n **No Record Found";
        }
    }
}

void delete_record() {
    cout << "\n **Delete Record**";
    cout << "\n *** Delete data menu***";
    cout << "\n 1. Delete by ID";
    cout << "\n 2. Delete by Name";
    cout << "\n Enter your choice -> ";
    int choice;
    cin >> choice;
    switch(choice) {
        case 1:
            delete_record_by_id();
            break;
        case 2:
            delete_record_by_name();
            break;
        default:
            cout << "\n **Invalid Choice";
    }
}

void show_all_students() {
    cout << "\n **Show All Students";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        for (int j = 0; j < i; j++) {
            cout << "\n ID: " << s[j].ID;
            cout << "\n Name: " << s[j].name;
            cout << "\n Address: " << s[j].address;
            cout << "\n Phone: " << s[j].phone;
            cout << "\n Email: " << s[j].email;
            cout << "\n Semester: " << s[j].sem;
            cout << "\n Course: " << s[j].course;
            cout << "\n Marks: " << s[j].marks;
            cout << "\n CGPA: " << s[j].cgpa;
            cout << "\n Grade: " << s[j].grade;
        }
    }
}

void top_performers() {
    cout << "\n **Top Performers";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        for (int j = 0; j < i; j++) {
            if (s[j].grade == 'A') {
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;
            }
        }
    }
}

void calculate_avg_marks_cgpa() {
    cout << "\n **Calculate Average Marks and CGPA";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        float total_marks = 0, total_cgpa = 0;
        for (int j = 0; j < i; j++) {
            total_marks += s[j].marks;
            total_cgpa += s[j].cgpa;
        }
        cout << "\n Average Marks: " << total_marks / i;
        cout << "\n Average CGPA: " << total_cgpa / i;
    }
}

void find_students_by_grade() {
    cout << "\n **Find Students by Grade";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        char grade;
        cout << "\n Enter Grade: ";
        cin >> grade;
        for (int j = 0; j < i; j++) {
            if (s[j].grade == grade) {
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;
            }
        }
    }
}

void display_students_by_semester() {
    cout << "\n **Display Students by Semester";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        string sem;
        cout << "\n Enter Semester: ";
        cin >> sem;
        for (int j = 0; j < i; j++) {
            if (s[j].sem == sem) {
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;
            }
        }
    }
}

void search_students_by_name() {
    cout << "\n **Search Students by Name";
    string name;
    bool found = false;
    cout << "\n Enter Name: ";
    cin.ignore();
    getline(cin, name);
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        for (int j = 0; j < i; j++) {
            if (s[j].name == name) {
                found = true;
                cout << "\n ID: " << s[j].ID;
                cout << "\n Name: " << s[j].name;
                cout << "\n Address: " << s[j].address;
                cout << "\n Phone: " << s[j].phone;
                cout << "\n Email: " << s[j].email;
                cout << "\n Semester: " << s[j].sem;
                cout << "\n Course: " << s[j].course;
                cout << "\n Marks: " << s[j].marks;
                cout << "\n CGPA: " << s[j].cgpa;
                cout << "\n Grade: " << s[j].grade;
            }
        }
    }
}


int main() {
    while (true) {
        int choice;

        cout << "##########################################################################\n";
        cout << "\t\t\t\t\t\t**Student Management System\n";
        cout << "--------------------------------------------------------------------------\n";
        cout << "\n 1. Insert Student";
        cout << "\n 2. Search Student by ID";
        cout << "\n 3. Update Student";
        cout << "\n 4. Delete Student";
        cout << "\n 5. Show All Students";
        cout << "\n 6. Top Performers";
        cout << "\n 7. Calculate Average Marks and CGPA";
        cout << "\n 8. Find Students by Grade";
        cout << "\n 9. Display Students by Semester";
        cout << "\n 10. Search Students by Name";
        cout << "\n 11. Exit";
        cout << "\n Enter your choice -> ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert_student();
                break;
            case 2:
                search_record();
                break;
            case 3:
                update_record();
                break;
            case 4:
                delete_record();
                break;
            case 5:
                show_all_students();
                break;
            case 6:
                top_performers();
                break;
            case 7:
                calculate_avg_marks_cgpa();
                break;
            case 8:
                find_students_by_grade();
                break;
            case 9:
                display_students_by_semester();
                break;
            case 10:
                search_students_by_name();
                break;
            case 11:
                exit(0);
                break;
            default:
                cout << "\n **Invalid Choice";
        }
        cin.ignore();
        cin.get();
    }
    return 0;
}
void delete_record_by_id() {
    cout << "\n **Delete Record by ID";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        int id, found = 0;
        cout << "\n Enter Student ID: ";
        cin >> id;

        for (int j = 0; j < i; j++) {
            if (s[j].ID == id) {
                for (int k = j; k < i - 1; k++) {
                    s[k] = s[k + 1];
                }
                i--;
                found = 1;
                cout << "\n **Record Deleted Successfully";
                break;
            }
        }

        if (!found) {
            cout << "\n **No Record Found";
        }
    }
}

void delete_record_by_name() {
    cout << "\n **Delete Record by Name";
    if (i == 0) {
        cout << "\n **No Record Found";
    } else {
        string name;
        bool found = false;
        cout << "\n Enter Student Name: ";
        cin.ignore();
        getline(cin, name);

        for (int j = 0; j < i; j++) {
            if (s[j].name == name) {
                for (int k = j; k < i - 1; k++) {
                    s[k] = s[k + 1];
                }
                i--;
                found = true;
                cout << "\n **Record Deleted Successfully";
                break;
            }
        }

        if (!found) {
            cout << "\n **No Record Found";
        }
    }
}
