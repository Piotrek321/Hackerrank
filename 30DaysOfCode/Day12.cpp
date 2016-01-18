#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    protected:
        string firstName;
        string lastName;
        int phone;
    public:
        Student(string fname,string lname,int p){
            firstName=fname;
            lastName=lname;
            phone=p;
        }
        void display(){
            cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone; 

        }
    
};


class Grade :  public Student{
    private:
         int score;   
    public:
            Grade(string fname,string lname,int p, int x):Student (fname,lname,p)
    {
            firstName=fname;
            lastName=lname;
            phone=p;
            score =x;
        }
    char calculate()
        {
        char a;
        if(score<40)a='D';
        else if(score >=40 && score <60 )a='B';
        else if(score >=60 && score <75 )a='A';
        else if(score >=75 && score <90 )a='E';
        else a='O';
        return a;
    }
};

int main() {
    string firstName,lastName;
    int score,phone;
    cin>>firstName;
    cin>>lastName;
    cin>>phone;
    cin>>score;    
    Student *stu=new Grade(firstName,lastName,phone,score);
    stu->display();
    Grade *g=(Grade*)stu;
    cout<< "\nGrade: "<<g->calculate();
    return 0;
}

