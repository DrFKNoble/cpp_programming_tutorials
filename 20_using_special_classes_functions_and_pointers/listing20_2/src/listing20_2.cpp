#include <iostream>

class Student
{
public:
    Student(int newID) : ID(newID) { howManyStudents++; }
    virtual ~Student() { howManyStudents--; }

    virtual int getID() const { return ID; }
    virtual void setID(int newID) { ID = newID; }

    static int getClassSize() { return howManyStudents; }

private:
    int ID;
    static int howManyStudents;
};

int Student::howManyStudents = 0;

int main()
{

    const int maxStudents = 2;
    Student* course[maxStudents];
    int i;

    for (i = 0; i < maxStudents; i++)
    {
        course[i] = new Student(i);
    }

    for(auto s : course)
    {
        std::cout << "There are ";
        std::cout << Student::getClassSize();
        std::cout << " in the course." << std::endl;

        std::cout << "Removing Student ";
        std::cout << s->getID() << "." << std::endl;

        delete s; 
        s = nullptr;

    }

    std::cout << "There are ";
    std::cout << Student::getClassSize();
    std::cout << " in the course." << std::endl;

    return 0;
}