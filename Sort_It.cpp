#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int sclass;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool compareStudents(Student a, Student b)
{
    if (a.total_marks != b.total_marks)
        return a.total_marks > b.total_marks;
    else
        return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].sclass >> a[i].section >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        a[i].total_marks = a[i].math_marks + a[i].eng_marks;
    }
    sort(a, a+n, compareStudents);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].sclass << " " << a[i].section << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}
