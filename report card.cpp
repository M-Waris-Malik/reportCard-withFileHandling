#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;

class Student{
private:
	string RollNo,Name, Grade;
public:
Student():RollNo(""), Name(""), Grade(""){}

setRollNo(string rollNo){
RollNo = rollNo;
}

setName(string name){
	Name = name;
}

setGrade(string grade){
	Grade = grade;
}

string getRollNo(){
	return RollNo;
}

string getName(){
	return Name;
}

string getGrade(){
	return Grade;
}

};

int main(){
Student s;

bool exit = false;
while(!exit){
	system("cls");
int val;

cout<<"\tWelcome To Student Report Card System"<<endl;
cout<<"\t*************************************"<<endl;
cout<<"\t1.Report Card"<<endl;
cout<<"\t2.Exit"<<endl;
cout<<"\tEnter Choice: ";
cin>>val;

if(val==1){
	system("cls");
string rollNo, name;
cout<<"\tEnter RollNo Of Student: ";
cin>>rollNo;
s.setRollNo(rollNo);


 cout<<"\tEnter Name Of Student: ";
 cin>>name;
 s.setName(name);
 
 int physics, computer, math, total , avg;
 cout<<"\tEnter Physics: ";
 cin>>physics;
 
  cout<<"\tEnter Computer Marks: ";
 cin>>computer;
 
 cout<<"\tEnter Math Marks: ";
 cin>>math;
 
 system("cls");
cout<<"\tStudent Report Card"<<endl;
cout<<"\t*******************"<<endl;
total = physics + computer+ math;
cout<<"\tTotal Marks Of Student: "<<total<<endl;
avg = total /3;
cout<<"\tAverage Marks Of Student: "<<avg<<endl;

if(avg >= 90 && avg <=100){
	s.setGrade("A");
}

 if(avg >=80 && avg <90){
 	s.setGrade("B");
 }
 
  if(avg >=70 && avg <80){
 	s.setGrade("C");
 }
 
  if(avg >=60 && avg <70){
 	s.setGrade("D");
 }
 
  if(avg >=50 && avg <60){
 	s.setGrade("F");
 }
 cout<<"\tGrade Of Student: "<<s.getGrade()<<endl;
 
 ofstream out("D:/Student.txt", ios::app);
 out<<"\t"<<s.getRollNo()<<" : "<<s.getName()<<" : "<<s.getGrade()<<endl<<endl;
 out.close();
 cout<<"\tReport Card Is Saved To File!"<<endl;
 Sleep(10000);
}
else if (val==2){
	system("cls");
	exit = true;
	cout<<"\tGood Luck!"<<endl;
	Sleep(3000);
}
}
}
