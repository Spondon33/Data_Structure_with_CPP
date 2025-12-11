#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float mrk;
    char grade;

    void setAll(int i, string n, float m){
        setId(i);
        setName(n);
        setMark(m);
        setGrade(m);
    }

    void setId(int i){
        id = i;
    }
    void setName(string n){
        name = n;
    }
    void setMark(float m){
        mrk = m;
    }
    void setGrade(float m){
        if (m <= 100 or m >= 90){
            grade = 'A';
        }
        if (m <= 89 or m >= 80){
            grade = 'B';
        }
        if (m <= 79 or m >= 70){
            grade = 'C';
        }
        if (m <= 69 or m >= 60){
            grade = 'D';
        }
        if (m < 60){
            grade = 'F';
        }
    }

    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    float getMark(){
        return mrk;
    }
    float getGrade(){
        return grade;
    }

    void displayAll(){
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Mark: " << getMark() << endl;
    }
    void displayByGrade(){
        cout << "Name: " << getName() << endl;
        cout << "Mark: " << getMark() << endl;
        cout << "Letter Grade: " << getGrade() << endl;
    }
};

int main(){

}