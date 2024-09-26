/*Q8.Anna is a contender for valedictorian of her high school. 
She wants to know how many students (if any) have scored higher than her in the exams given during this semester.
Create a class named Student with the following specifications:
An instance variable named scores holds a student's 5 exam scores.
A void input () function reads 5 integers and saves them to scores.
An int calculateTotalScore() function that returns the sum of the student's scores.
*/
#include <iostream>
using namespace std;

class Student {
private:
    float score[5];

public:
    void Input() {
        for (int j = 0; j < 5; j++)
            cin >> score[j];
    }

    int calculate(float Target) {
        float sum = 0;
        for (int j = 0; j < 5; j++)
            sum += score[j];
        return sum > Target ? 1 : 0;
    }
};

int main() {
    int n, count = 0;
    float target;

    cout << "Enter Anna's score: " << endl;
    cin >> target;
    cout << "Enter number of students: " << endl;
    cin >> n;
    cout << "Enter marks:" << endl;

    Student* s = new Student[n];
    
    for (int i = 0; i < n; i++) {
        s[i].Input();
    }

    for (int i = 0; i < n; i++) {
        if (s[i].calculate(target))
            count++;
    }

    cout << "Students scoring more than Anna are: " << count << endl;

    delete[] s;
    return 0;
}
