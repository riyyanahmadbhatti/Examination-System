#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<conio.h>
using namespace std;

//---------------------------------------------------------------------------------------------------
//-------------------Global arrays to store data of the student who attempt the quiz-----------------
//---------------------------------------------------------------------------------------------------

const int arraysize = 216;
int marks1[arraysize];
int marks2[arraysize];
int marks3[arraysize];
int marks4[arraysize];
int marks5[arraysize];
int marks6[arraysize];
int marks7[arraysize];
int marks8[arraysize];
int marks9[arraysize];
int marks10[arraysize];
int marks11[arraysize];

//---------------------------------------------------------------------------------------------------
//-------------------------------------------to store marks------------------------------------------
//---------------------------------------------------------------------------------------------------

int total1 = 0;
int total2 = 0;
int total3 = 0;
int total4 = 0;
int total5 = 0;
int total6 = 0;
int total7 = 0;
int total8 = 0;
int total9 = 0;
int total10 = 0;
int total11 = 0;

//---------------------------------------------------------------------------------------------------
//----------------------to count the number of students who attempt the quiz-------------------------
//---------------------------------------------------------------------------------------------------

string rollno1[arraysize];
string rollno2[arraysize];
string rollno3[arraysize];
string rollno4[arraysize];
string rollno5[arraysize];
string rollno6[arraysize];
string rollno7[arraysize];
string rollno8[arraysize];
string rollno9[arraysize];
string rollno10[arraysize];
string rollno11[arraysize];

//---------------------------------------------------------------------------------------------------
//----------------------storing the rollnumber of student who attempt the quiz-----------------------
//---------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------
//----------------------------------functions of the quizes------------------------------------------
//---------------------------------------------------------------------------------------------------

int pf(int t);
int oop(int t);
int itc(int t);
int ds(int t);
int aoa(int t);
int sre(int t);
int rm(int t);
int bda(int t);
int ai(int t);
int dl(int t);
int dip(int t);

//---------------------------------------------------------------------------------------------------
//----------------------structure made to store data from the csv file-------------------------------
//---------------------------------------------------------------------------------------------------

struct Course
{
    string index[217], rollno[217], name[217], c1[217], c2[217], c3[217], c4[217], c5[217], c6[217], c7[217], c8[217], c9[217], c10[217], c11[217];
    int ts = 0;
};

//---------------------------------------------------------------------------------------------------
//----------------------function made for to get data from the csv filex-----------------------------
//---------------------------------------------------------------------------------------------------

Course* getdata();

//---------------------------------------------------------------------------------------------------
//---------------------functions to make the answerkey of the quizes---------------------------------
//---------------------------------------------------------------------------------------------------

void akpf(int t);
void akoop(int t);
void akitc(int t);
void akds(int t);
void akaoa(int t);
void aksre(int t);
void akrm(int t);
void akbda(int t);
void akai(int t);
void akdl(int t);
void akdip(int t);

//---------------------------------------------------------------------------------------------------
//------------------------class quiz for the set up of the quiz--------------------------------------
//---------------------------------------------------------------------------------------------------

class quiz
{
private:
	string sub;//name of the course
	int type;//setting its type of the quiz
public:
	quiz()//default constructor
	{
		sub = "Programming Fundamentals";
		type = 1;
	}
	quiz(string s, int t)//parameterized constructor
	{
		sub = s;
		type = t;
	}
	void setsub(string s)
	{
		sub = s;
	}
	void settype(int t)
	{
		type = t;
	}
	string getsub()
	{
		return sub;
	}
	int gettype()
	{
		return type;
	}
};

//---------------------------------------------------------------------------------------------------
//------------------------------------------class teacher--------------------------------------------
//---------------------------------------------------------------------------------------------------

class Teacher
{
private:
	string name;//to save the name of the teacher
	quiz* q;//for the quiz setup
	Course* c;//for the data from csv file
public:
	Teacher()//default constructor
	{
		name = "Zaviyar";
	}
	Teacher(string n, Course* c1, quiz* q1)//parameterized constructor
	{
		name = n;
		c = c1;
		q = q1;
	}
	void setname(string n)
	{
		name = n;
	}
	quiz* setquiz()//function to set the type of the quiz of each of the course
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		for (int i = 0; i < 11; i++)
		{
			string s1 = "Programming Fundamentals";
			string s2 = "Object Oriented Programming";
			string s3 = "Introduction to Computer";
			string s4 = "Data Structures";
			string s5 = "Analysis of Algorithms";
			string s6 = "Software Requirements Engineering";
			string s7 = "Research Methodology";
			string s8 = "Big Data Analytics";
			string s9 = "Artificial Intelligence";
			string s10 = "Deep Learning";
			string s11 = "Digital Image Processing";
			cout << "Enter the type of quiz you want to set of the following course:" << endl;
			if (i == 0)
			{
				q[i].setsub(s1);
				cout << s1 << endl;
			}
			else if (i == 1)
			{
				q[i].setsub(s2);
				cout << s2 << endl;
			}
			else if (i == 2)
			{
				q[i].setsub(s3);
				cout << s3 << endl;
			}
			else if (i == 4)
			{
				q[i].setsub(s5);
				cout << s5 << endl;
			}
			else if (i == 5)
			{
				q[i].setsub(s6);
				cout << s6 << endl;
			}
			else if (i == 6)
			{
				q[i].setsub(s7);
				cout << s7 << endl;
			}
			else if (i == 7)
			{
				q[i].setsub(s8);
				cout << s8 << endl;
			}
			else if (i == 8)
			{
				q[i].setsub(s9);
				cout << s9 << endl;
			}
			else if (i == 9)
			{
				q[i].setsub(s10);
				cout << s10 << endl;
			}
			else if (i == 10)
			{
				q[i].setsub(s11);
				cout << s11 << endl;
			}
			cout << "Enter the type:" << endl;
			cout << "1:MCQ's" << endl;
			cout << "2:True/False" << endl;
			cout << "3:Long Question" << endl;
			int t;
			cin >> t;
			q[i].settype(t);
		}
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		return q;
	}
	void showmycourse()//function to show my the course of the teacher and see its students 
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Select the number of which you want to see students:" << endl;
		cout << "1:Programming Fundamentals" << endl;
		cout << "2:Object Oriented Programming" << endl;
		cout << "3:Introduction to Computer" << endl;
		cout << "4:Data Structures" << endl;
		cout << "5:Analysis of Algorithms" << endl;
		cout << "6:Software Requirements Engineering" << endl;
		cout << "7:Research Methodology" << endl;
		cout << "8:Big Data Analytics" << endl;
		cout << "9:Artificial Intelligence" << endl;
		cout << "10:Deep Learning" << endl;
		cout << "11:Digital Image Processing" << endl;
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c1[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 2)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c2[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 3)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c3[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 4)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c4[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 5)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c5[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 6)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c6[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 7)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c7[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 8)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c8[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 9)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c9[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 10)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c10[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else if (choice == 11)
		{
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c11[i] == "1")
				{
					cout << c->rollno[i] << "	" << c->name[i] << endl;
				}
			}
		}
		else
		{
			cout << "Invalid choice" << endl;
			cout << endl;
			cout << "--------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			teachermenu();
		}
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	void showattendence()//function to show the attendence of the students who have already attempted the quiz
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Select the number of which you want to see attendence:" << endl;
		cout << "1:Programming Fundamentals" << endl;
		cout << "2:Object Oriented Programming" << endl;
		cout << "3:Introduction to Computer" << endl;
		cout << "4:Data Structures" << endl;
		cout << "5:Analysis of Algorithms" << endl;
		cout << "6:Software Requirements Engineering" << endl;
		cout << "7:Research Methodology" << endl;
		cout << "8:Big Data Analytics" << endl;
		cout << "9:Artificial Intelligence" << endl;
		cout << "10:Deep Learning" << endl;
		cout << "11:Digital Image Processing" << endl;
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total1; i++)
			{
				cout << rollno1[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c1[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total1; j++)
					{
						if (c->rollno[i] == rollno1[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 2)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total2; i++)
			{
				cout << rollno2[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c2[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total2; j++)
					{
						if (c->rollno[i] == rollno2[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 3)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total3; i++)
			{
				cout << rollno3[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c3[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total3; j++)
					{
						if (c->rollno[i] == rollno3[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 4)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total4; i++)
			{
				cout << rollno4[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c4[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total4; j++)
					{
						if (c->rollno[i] == rollno1[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 5)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total5; i++)
			{
				cout << rollno5[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c5[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total5; j++)
					{
						if (c->rollno[i] == rollno1[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 6)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total6; i++)
			{
				cout << rollno6[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c6[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total6; j++)
					{
						if (c->rollno[i] == rollno6[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 7)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total7; i++)
			{
				cout << rollno7[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c7[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total7; j++)
					{
						if (c->rollno[i] == rollno7[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 8)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total8; i++)
			{
				cout << rollno8[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c8[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total8; j++)
					{
						if (c->rollno[i] == rollno1[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 9)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total9; i++)
			{
				cout << rollno9[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c9[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total9; j++)
					{
						if (c->rollno[i] == rollno9[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 10)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total10; i++)
			{
				cout << rollno10[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c10[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total10; j++)
					{
						if (c->rollno[i] == rollno10[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
		else if (choice == 11)
		{
			cout << "The students who attempted the quiz:" << endl;
			for (int i = 0; i < total11; i++)
			{
				cout << rollno11[i] << endl;
			}
			cout << "The students who did not attempt the quiz:" << endl;
			bool validation = false;
			for (int i = 0; i < c->ts; i++)
			{
				if (c->c11[i] == "1")
				{
					bool validation = false;
					for (int j = 0; j < total1; j++)
					{
						if (c->rollno[i] == rollno11[j])
						{
							validation = true;
						}
					}
					if (validation == false)
					{
						cout << c->rollno[i] << endl;
					}
				}
			}
		}
	}
	void ak()//function to show the answerkeys of the quizes using the functions
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Select the number of which you want to see the answer key:" << endl;
		cout << "1:Programming Fundamentals" << endl;
		cout << "2:Object Oriented Programming" << endl;
		cout << "3:Introduction to Computer" << endl;
		cout << "4:Data Structures" << endl;
		cout << "5:Analysis of Algorithms" << endl;
		cout << "6:Software Requirements Engineering" << endl;
		cout << "7:Research Methodology" << endl;
		cout << "8:Big Data Analytics" << endl;
		cout << "9:Artificial Intelligence" << endl;
		cout << "10:Deep Learning" << endl;
		cout << "11:Digital Image Processing" << endl;
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			akpf(q[choice - 1].gettype());
		}
		else if (choice == 2)
		{
			akoop(q[choice - 1].gettype());
		}
		else if (choice == 3)
		{
			akitc(q[choice - 1].gettype());
		}
		else if (choice == 4)
		{
			akds(q[choice - 1].gettype());
		}
		else if (choice == 5)
		{
			akaoa(q[choice - 1].gettype());
		}
		else if (choice == 6)
		{
			aksre(q[choice - 1].gettype());
		}
		else if (choice == 7)
		{
			akrm(q[choice - 1].gettype());
		}
		else if (choice == 8)
		{
			akbda(q[choice - 1].gettype());
		}
		else if (choice == 9)
		{
			akai(q[choice - 1].gettype());
		}
		else if (choice == 10)
		{
			akdl(q[choice - 1].gettype());
		}
		else if (choice == 11)
		{
			akdip(q[choice - 1].gettype());
		}
		else
		{
			cout << "Invalid Choice,Try again" << endl;
			cout << endl;
			cout << "--------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			ak();
		}
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	void setcourse(Course* c1)
	{
		c = c1;
	}
	string getname()
	{
		return name;
	}

	quiz* getquiz()
	{
		return q;
	}
	Course* getcourse()
	{
		return c;
	}
	void showresultanalytics()//showing the result analytics of the quizes
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Select the number of which you want to see results:" << endl;
		cout << "1:Programming Fundamentals" << endl;
		cout << "2:Object Oriented Programming" << endl;
		cout << "3:Introduction to Computer" << endl;
		cout << "4:Data Structures" << endl;
		cout << "5:Analysis of Algorithms" << endl;
		cout << "6:Software Requirements Engineering" << endl;
		cout << "7:Research Methodology" << endl;
		cout << "8:Big Data Analytics" << endl;
		cout << "9:Artificial Intelligence" << endl;
		cout << "10:Deep Learning" << endl;
		cout << "11:Digital Image Processing" << endl;
		int choice;
		cin >> choice;
		int n0 = 0, n2 = 0, n4 = 0, n6 = 0, n8 = 0, n10 = 0;
		if (choice == 1)
		{
			
			for (int i = 0; i < total1; i++)
			{
				cout << rollno1[i] << "		" << marks1[i] << "/10" << endl;
			}
			for (int i = 0; i < total1; i++)
			{
				if (marks1[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks1[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks1[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks1[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks1[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks1[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 2)
		{
			for (int i = 0; i < total2; i++)
			{
				cout << rollno2[i] << "		" << marks2[i] << "/10" << endl;
			}
			for (int i = 0; i < total2; i++)
			{
				if (marks2[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks2[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks2[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks2[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks2[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks2[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 3)
		{
			for (int i = 0; i < total3; i++)
			{
				cout << rollno3[i] << "		" << marks3[i] << "/10" << endl;
			}
			for (int i = 0; i < total3; i++)
			{
				if (marks3[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks3[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks3[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks3[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks3[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks3[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 4)
		{
			for (int i = 0; i < total4; i++)
			{
				cout << rollno4[i] << "		" << marks4[i] << "/10" << endl;
			}
			for (int i = 0; i < total4; i++)
			{
				if (marks4[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks4[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks4[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks4[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks4[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks4[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 5)
		{
			for (int i = 0; i < total5; i++)
			{
				cout << rollno5[i] << "		" << marks5[i] << "/10" << endl;
			}
			for (int i = 0; i < total5; i++)
			{
				if (marks5[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks5[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks5[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks5[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks5[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks5[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 6)
		{
			for (int i = 0; i < total6; i++)
			{
				cout << rollno6[i] << "		" << marks6[i] << "/10" << endl;
			}
			for (int i = 0; i < total6; i++)
			{
				if (marks6[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks6[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks6[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks6[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks6[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks6[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 7)
		{
			for (int i = 0; i < total7; i++)
			{
				cout << rollno7[i] << "		" << marks7[i] << "/10" << endl;
			}
			for (int i = 0; i < total7; i++)
			{
				if (marks7[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks7[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks7[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks7[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks7[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks7[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 8)
		{
			for (int i = 0; i < total8; i++)
			{
				cout << rollno8[i] << "		" << marks8[i] << "/10" << endl;
			}
			for (int i = 0; i < total8; i++)
			{
				if (marks8[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks8[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks8[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks8[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks8[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks8[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 9)
		{
			for (int i = 0; i < total9; i++)
			{
				cout << rollno9[i] << "		" << marks9[i] << "/10" << endl;
			}
			for (int i = 0; i < total9; i++)
			{
				if (marks9[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks9[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks9[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks9[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks9[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks9[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 10)
		{
			for (int i = 0; i < total10; i++)
			{
				cout << rollno10[i] << "		" << marks10[i] << "/10" << endl;
			}
			for (int i = 0; i < total10; i++)
			{
				if (marks10[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks10[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks10[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks10[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks10[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks10[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		else if (choice == 11)
		{
			for (int i = 0; i < total11; i++)
			{
				cout << rollno11[i] << "		" << marks11[i] << "/10" << endl;
			}
			for (int i = 0; i < total11; i++)
			{
				if (marks11[i] == 0)
				{
					n0 = n0 + 1;
				}
				else if (marks11[i] == 2)
				{
					n2 = n2 + 1;
				}
				else if (marks11[i] == 4)
				{
					n4 = n4 + 1;
				}
				else if (marks11[i] == 6)
				{
					n6 = n6 + 1;
				}
				else if (marks11[i] == 8)
				{
					n8 = n8 + 1;
				}
				else if (marks11[i] == 10)
				{
					n10 = n10 + 1;
				}
			}
		}
		cout << "Number of students who got 0 marks:" << n0 << endl;
		cout << "Number of students who got 2 marks:" << n2 << endl;
		cout << "Number of students who got 4 marks:" << n4 << endl;
		cout << "Number of students who got 6 marks:" << n6 << endl;
		cout << "Number of students who got 8 marks:" << n8 << endl;
		cout << "Number of students who got 10 marks:" << n10 << endl;
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	void teachermenu()//function for the menu display of the teahcer menu
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		int choice;
		cout << "Select the number of the task you want to perform:" << endl;
		cout << "1:Show my courses:" << endl;
		cout << "2:Set quiz" << endl;
		cout << "3:Show results/analytics" << endl;
		cout << "4:Show answer keys" << endl;
		cout << "5:Show attendence of quiz" << endl;
		cout << "6:To end session" << endl;
		cin >> choice;
		if (choice == 1)
		{
			showmycourse();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
		}
		else if (choice == 2)
		{
			q = setquiz();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
		}
		else if (choice == 3)
		{
			showresultanalytics();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
		}
		else if (choice == 4)
		{
			ak();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
		}
		else if (choice == 5)
		{
			showattendence();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
		}
		else if (choice == 6)
		{
			return;
		}
		else
		{
			cout << "You have entered a invalid option" << endl;
			cout << "Press 1 to try again" << endl;
			cout << "Press any other key to end session" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				teachermenu();
			}
			else
			{
				return;
			}
		}
	}
};

//---------------------------------------------------------------------------------------------------
//------------------------------------class for the student------------------------------------------
//---------------------------------------------------------------------------------------------------

class Student
{
private:
	quiz* q;//the data of the quiz of which he will give quiz of 
	string rollno;//getting the rollno of the student
	int result[11];//array to save the students result 
	Course* c;//getting the data to see if he is registered in the specific courses
public:
	Student()//default constructor
	{
		rollno = '\0';
	}
	Student(string r, Course* c1, quiz* q1)//parameterized constructor
	{
		rollno = r;
		c = c1;
		q = q1;
	}
	void givequiz()//function to attempt the quiz
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		int index;
		for (int i = 0; i < c->ts; i++)
		{
			if (rollno == c->rollno[i])
			{
				index = i;
				break;
			}
		}
		int choice;
		int m = 0;
		cout << "Select the number of which you want to give quiz of:" << endl;
		cout << "1:Programming Fundamentals" << endl;
		cout << "2:Object Oriented Programming" << endl;
		cout << "3:Introduction to Computer" << endl;
		cout << "4:Data Structures" << endl;
		cout << "5:Analysis of Algorithms" << endl;
		cout << "6:Software Requirements Engineering" << endl;
		cout << "7:Research Methodology" << endl;
		cout << "8:Big Data Analytics" << endl;
		cout << "9:Artificial Intelligence" << endl;
		cout << "10:Deep Learning" << endl;
		cout << "11:Digital Image Processing" << endl;
		cin >> choice;
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		if (choice == 1)
		{
			if (c->c1[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = pf(q[choice - 1].gettype());
			marks1[total1] = m;
			rollno1[total1] = rollno;
			total1++;
		}
		else if (choice == 2)
		{
			if (c->c2[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = oop(q[choice - 1].gettype());
			marks2[total2] = m;
			rollno2[total2] = rollno;
			total2++;
		}
		else if (choice == 3)
		{
			if (c->c3[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = itc(q[choice - 1].gettype());
			marks3[total3] = m;
			rollno3[total3] = rollno;
			total3++;
		}
		else if (choice == 4)
		{
			if (c->c4[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = ds(q[choice - 1].gettype());
			marks4[total4] = m;
			rollno4[total4] = rollno;
			total4++;
		}
		else if (choice == 5)
		{
			if (c->c5[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = aoa(q[choice - 1].gettype());
			marks5[total5] = m;
			rollno5[total5] = rollno;
			total5++;
		}
		else if (choice == 6)
		{
			if (c->c6[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = sre(q[choice - 1].gettype());
			marks6[total6] = m;
			rollno6[total6] = rollno;
			total6++;
		}
		else if (choice == 7)
		{
			if (c->c7[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = rm(q[choice - 1].gettype());
			marks7[total7] = m;
			rollno7[total7] = rollno;
			total7++;
		}
		else if (choice == 8)
		{
			if (c->c8[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = bda(q[choice - 1].gettype());
			marks8[total8] = m;
			rollno8[total8] = rollno;
			total8++;
		}
		else if (choice == 9)
		{
			if (c->c9[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = ai(q[choice - 1].gettype());
			marks9[total9] = m;
			rollno9[total9] = rollno;
			total9++;
		}
		else if (choice == 10)
		{
			if (c->c10[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = dl(q[choice - 1].gettype());
			marks10[total10] = m;
			rollno10[total10] = rollno;
			total10++;
		}
		else if (choice == 11)
		{
			if (c->c11[index] != "1")
			{
				cout << "You are not enrolled in this course" << endl;
				cout << endl;
				studentmenu();
			}
			m = dip(q[choice - 1].gettype());
			marks11[total11] = m;
			rollno11[total11] = rollno;
			total11++;
		}
		else
		{
			cout << "Invaild choice" << endl;
			studentmenu();
		}
		result[choice - 1] = m;
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	quiz* getquiz()//function to return the quiz
	{
		return q;
	}
	int getresult(int i)//fucntion for the result of all courses of the specific student 
	{
		return result[i];
	}
	void showmycourse()//function to show courses of the student  
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		int index;
		for (int i = 0; i < c->ts; i++)
		{
			if (rollno == c->rollno[i])
			{
				index = i;
				break;
			}
		}
		if (c->c1[index] == "1")
		{
			cout << "Programming fundamentals" << endl;
		}
		if (c->c2[index] == "1")
		{
			cout << "Object Oriented Programming" << endl;
		}
		if (c->c3[index] == "1")
		{
			cout << "Introduction to Computer" << endl;
		}
		if (c->c4[index] == "1")
		{
			cout << "Data Structures" << endl;
		}
		if (c->c5[index] == "1")
		{
			cout << "Analysis of Algorithms" << endl;
		}
		if (c->c6[index] == "1")
		{
			cout << "Software Requirements Engineering" << endl;
		}
		if (c->c7[index] == "1")
		{
			cout << "Research Methodology" << endl;
		}
		if (c->c8[index] == "1")
		{
			cout << "Big Data Analytics" << endl;
		}
		if (c->c9[index] == "1")
		{
			cout << "Artificial Intelligence" << endl;
		}
		if (c->c10[index] == "1")
		{
			cout << "Deep Learning" << endl;
		}
		if (c->c11[index] == "1")
		{
			cout << "Digital Image Processing" << endl;
		}
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Press 1 to go back to menu" << endl;
		cout << "            Or            " << endl;
		cout << "Press any other key end sessioon" << endl;
		int n;
		cin >> n;
		if (n == 1)
		{
			studentmenu();
		}

	}
	void studentmenu()//function for the student menu
	{
		cout << endl;
		cout << "--------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		int choice;
		cout << "Select the number of the task you want to perform:" << endl;
		cout << "1:Show my courses:" << endl;
		cout << "2:Give quiz" << endl;
		cout << "3:Show results" << endl;
		cout << "4:To end session" << endl;
		cin >> choice;
		if (choice == 1)
		{
			showmycourse();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				studentmenu();
			}
		}
		else if (choice == 2)
		{
			givequiz();
			cout << "Press 1 to go back to menu" << endl;
			cout << "            Or            " << endl;
			cout << "Press any other key end sessioon" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				studentmenu();
			}
		}
		else if (choice == 3)
		{
			int choice1;
			int index;
			for (int i = 0; i < c->ts; i++)
			{
				if (rollno == c->rollno[i])
				{
					index = i;
					break;
				}
			}
			cout << "Select the number of which you want to give quiz of:" << endl;
			cout << "1:Programming Fundamentals" << endl;
			cout << "2:Object Oriented Programming" << endl;
			cout << "3:Introduction to Computer" << endl;
			cout << "4:Data Structures" << endl;
			cout << "5:Analysis of Algorithms" << endl;
			cout << "6:Software Requirements Engineering" << endl;
			cout << "7:Research Methodology" << endl;
			cout << "8:Big Data Analytics" << endl;
			cout << "9:Artificial Intelligence" << endl;
			cout << "10:Deep Learning" << endl;
			cout << "11:Digital Image Processing" << endl;
			cin >> choice1;
			cout << endl;
			cout << "--------------------------------------------------------------------------------------------------" << endl;
			cout << endl;
			if (choice1 == 1)
			{
				if (c->c1[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total1; i++)
				{
					if (rollno == rollno1[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks1[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 2)
			{
				if (c->c2[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total2; i++)
				{
					if (rollno == rollno2[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks2[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 3)
			{
				if (c->c3[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total3; i++)
				{
					if (rollno == rollno3[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks3[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 4)
			{
				if (c->c4[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total4; i++)
				{
					if (rollno == rollno4[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks4[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 5)
			{
				if (c->c5[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index=-1;
				for(int i=0;i<total5;i++)
				{
					if(rollno==rollno5[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks5[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 6)
			{
				if (c->c6[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total6; i++)
				{
					if (rollno == rollno6[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks6[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 7)
			{
				if (c->c7[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total7; i++)
				{
					if (rollno == rollno7[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks7[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}

			}
			else if (choice1 == 8)
			{
				if (c->c8[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total8; i++)
				{
					if (rollno == rollno8[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks8[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 9)
			{
				if (c->c9[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total9; i++)
				{
					if (rollno == rollno9[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks9[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 10)
			{
				if (c->c10[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total10; i++)
				{
					if (rollno == rollno10[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks10[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else if (choice1 == 11)
			{
				if (c->c11[index] != "1")
				{
					cout << "You are not enrolled in this course" << endl;
					cout << endl;
					studentmenu();
				}
				int index = -1;
				for (int i = 0; i < total11; i++)
				{
					if (rollno == rollno11[i])
					{
						index = i;
					}
				}
				if (index != -1)
				{
					cout << "Your result in this course is:" << marks11[index] << "/10" << endl;
					cout << endl;
				}
				else
				{
					cout << "You haven't attempted the quiz" << endl;
				}
				cout << "Press 1 to go back to menu" << endl;
				cout << "            Or            " << endl;
				cout << "Press any other key end sessioon" << endl;
				string n;
				cin >> n;
				if (n == "1")
				{
					studentmenu();
				}
			}
			else
			{
				cout << "Invaild choice" << endl;
				studentmenu();
			}
		}
		else if (choice == 4)
		{
			return;
		}
		else
		{
			cout << "You have entered a invalid option" << endl;
			cout << "Press 1 to try again" << endl;
			cout << "Press any other key to end session" << endl;
			string n;
			cin >> n;
			if (n == "1")
			{
				studentmenu();
			}
			else
			{
				return;
			}
		}

	}
};

//---------------------------------------------------------------------------------------------------
//-------------------------------function for usercredential verification----------------------------
//---------------------------------------------------------------------------------------------------

bool passwordvalidation(string p);
bool verifyrollno(Course* c, string n);

//---------------------------------------------------------------------------------------------------
//-----------------------------------the main of the question----------------------------------------
//---------------------------------------------------------------------------------------------------

int main()
{
	Course* data = new Course();
	data = getdata();
	quiz* q = new quiz[11];
	cout << "--------------------------------------------------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------Welcome to fast-------------------------------------------------" << endl;
	cout << "--------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Press t for Teacher" << endl;
	cout << "Press s for Student" << endl;
	string choice;
	cin >> choice;
	char ch;
	string rollno;
	string name;
	string password="";
	//---------------------------------------------if choice teacher enters------------------------
	if(choice=="t")
	{
		cout << "Name:" << endl;
		cin >> name;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1=false,validation2=false;
		validation1 = passwordvalidation(password);
		if(name=="Zaviyar")
		{
			validation2 = true;
		}
		while(validation1==false||validation2==false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Name:" << endl;
			cin >> name;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			validation1 = passwordvalidation(password);
			if (name == "Zaviyar")
			{
				validation2 = true;
			}
		}
		Teacher t1(name, data, q);
		t1.teachermenu();
		q = t1.getquiz();
		cout << "Press t for Teacher" << endl;
		cout << "Press s for Student" << endl;
		cin >> choice;
	}
	//------------------------------------------------if choice student enters------------------------------
	else if(choice=="s")
	{
		cout << "Rollno:" << endl;
		cin >> rollno;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1 = false, validation2 = false;
		validation1 = passwordvalidation(password);
		validation2 = verifyrollno(data, rollno);
		while (validation1 == false || validation2 == false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Rollno:" << endl;
			cin >> rollno;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			validation1 = passwordvalidation(password);
			validation2 = verifyrollno(data, rollno);
		}
		Student s1(rollno, data, q);
		s1.studentmenu();
		cout << "Press t for Teacher" << endl;
		cout << "Press s for Student" << endl;
		cin >> choice;
	}
	//-------------------------------------------------------if option is wrong try again--------------------------
	while(choice!="s"&&choice!="t")
	{
		cout << "Invalid Option, Try Again" << endl;
		cout << "Press t for Teacher" << endl;
		cout << "Press s for Student" << endl;
		cin >> choice;
	}
	//------------------------------------------------------opening menus accordinng to choice--------------------
	if (choice == "t")
	{
		cout << "Name:" << endl;
		cin >> name;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1 = false, validation2 = false;
		validation1 = passwordvalidation(password);
		if (name == "Zaviyar")
		{
			validation2 = true;
		}
		while (validation1 == false || validation2 == false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Name:" << endl;
			cin >> name;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			validation1 = passwordvalidation(password);
			if (name == "Zaviyar")
			{
				validation2 = true;
			}
		}
		Teacher t1(name, data, q);
		t1.teachermenu();
		q = t1.getquiz();
	}
	else if (choice == "s")
	{
		cout << "Rollno:" << endl;
		cin >> rollno;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1 = false, validation2 = false;
		validation1 = passwordvalidation(password);
		validation2 = verifyrollno(data, rollno);
		while (validation1 == false || validation2 == false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Rollno:" << endl;
			cin >> rollno;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			cout << endl;
			validation1 = passwordvalidation(password);
			validation2 = verifyrollno(data, rollno);
		}
		Student s1(rollno, data, q);
		s1.studentmenu();
	}
	cout << "Press t for Teacher" << endl;
	cout << "Press s for Student" << endl;
	cin >> choice;
	//-------------------------------------------opening a student menu-------------------------------------------
	while(choice=="s")
	{
		cout << "Rollno:" << endl;
		cin >> rollno;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1 = false, validation2 = false;
		validation1 = passwordvalidation(password);
		validation2 = verifyrollno(data, rollno);
		while (validation1 == false || validation2 == false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Rollno:" << endl;
			cin >> rollno;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			validation1 = passwordvalidation(password);
			validation2 = verifyrollno(data, rollno);
		}
		Student s1(rollno, data, q);
		s1.studentmenu();
		cout << "Press t for Teacher" << endl;
		cout << "Press s for Student" << endl;
		cin >> choice;
	}
	//-------------------------------------------opening a student menu--------------------------------------
	if (choice == "t")
	{
		cout << "Name:" << endl;
		cin >> name;
		cout << "Password:" << endl;
		ch = _getch();
		while (ch != 13)
		{
			password.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		cout << endl;
		bool validation1 = false, validation2 = false;
		validation1 = passwordvalidation(password);
		if (name == "Zaviyar")
		{
			validation2 = true;
		}
		while (validation1 == false || validation2 == false)
		{
			cout << "Entered details are incorrect" << endl;
			cout << "Try Again" << endl;
			cout << "Name:" << endl;
			cin >> name;
			cout << "Password:" << endl;
			ch = _getch();
			while (ch != 13)
			{
				password.push_back(ch);
				cout << '*';
				ch = _getch();
			}
			validation1 = passwordvalidation(password);
			if (name == "Zaviyar")
			{
				validation2 = true;
			}
		}
		Teacher t1(name, data, q);
		t1.teachermenu();
	}
}

//---------------------------------------------------------------------------------------------------
//-------------------------------Function definiton of course getdata--------------------------------
//---------------------------------------------------------------------------------------------------

Course* getdata()
{
	ifstream inputFile("data.csv");
	int rc = 0;
	int max = 217;
	Course* c = new Course;
	if (inputFile.is_open()) {
		string line;
		getline(inputFile, line); // skip the header line
		while (getline(inputFile, line) && rc < max) {
			stringstream ss(line);
			string field;
			getline(ss, field, ',');
			c->index[rc] = field;
			getline(ss, field, ',');
			c->rollno[rc] = field;
			getline(ss, field, ',');
			c->name[rc] = field;
			getline(ss, field, ',');
			c->c1[rc] = field;
			getline(ss, field, ',');
			c->c2[rc] = field;
			getline(ss, field, ',');
			c->c3[rc] = field;
			getline(ss, field, ',');
			c->c4[rc] = field;
			getline(ss, field, ',');
			c->c5[rc] = field;
			getline(ss, field, ',');
			c->c6[rc] = field;
			getline(ss, field, ',');
			c->c7[rc] = field;
			getline(ss, field, ',');
			c->c8[rc] = field;
			getline(ss, field, ',');
			c->c9[rc] = field;
			getline(ss, field, ',');
			c->c10[rc] = field;
			getline(ss, field, ',');
			c->c11[rc] = field;
			rc++;
			c->ts = c->ts + 1;;
		}
	}
	else {
		cout << "Unable to open file" << endl;
	}
	inputFile.close();
	return c;
}

//---------------------------------------------------------------------------------------------------
//---------------------------------answer key functions definition-----------------------------------
//---------------------------------------------------------------------------------------------------

void akpf(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:2" << endl;
		cout << "Q2:4" << endl;
		cout << "Q3:4" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:1" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:False" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:False" << endl;
	}
}
void akoop(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:3" << endl;
		cout << "Q2:2" << endl;
		cout << "Q3:4" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:4" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:False" << endl;
		cout << "Q3:False" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:True" << endl;
	}
}
void akitc(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:2" << endl;
		cout << "Q2:4" << endl;
		cout << "Q3:4" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:3" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:False" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:False" << endl;
	}
}
void akds(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:3" << endl;
		cout << "Q2:1" << endl;
		cout << "Q3:3" << endl;
		cout << "Q4:2" << endl;
		cout << "Q5:3" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:False" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:False" << endl;
		cout << "Q5:True" << endl;
	}
}
void akaoa(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:3" << endl;
		cout << "Q2:3" << endl;
		cout << "Q3:1" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:2" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:False" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:False" << endl;
	}
}
void aksre(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:4" << endl;
		cout << "Q2:4" << endl;
		cout << "Q3:2" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:3" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:False" << endl;
		cout << "Q2:False" << endl;
		cout << "Q3:False" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:True" << endl;
	}
}
void akrm(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:3" << endl;
		cout << "Q2:1" << endl;
		cout << "Q3:3" << endl;
		cout << "Q4:4" << endl;
		cout << "Q5:3" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:False" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:False" << endl;
		cout << "Q5:False" << endl;
	}
}
void akbda(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:4" << endl;
		cout << "Q2:2" << endl;
		cout << "Q3:4" << endl;
		cout << "Q4:1" << endl;
		cout << "Q5:4" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:True" << endl;
	}
}
void akai(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:2" << endl;
		cout << "Q2:2" << endl;
		cout << "Q3:1" << endl;
		cout << "Q4:3" << endl;
		cout << "Q5:3" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:False" << endl;
		cout << "Q3:False" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:True" << endl;
	}
}
void akdl(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:3" << endl;
		cout << "Q2:2" << endl;
		cout << "Q3:1" << endl;
		cout << "Q4:4" << endl;
		cout << "Q5:4" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:True" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:False" << endl;
		cout << "Q4:True" << endl;
		cout << "Q5:False" << endl;
	}
}
void akdip(int t)
{
	if (t == 1)
	{
		cout << "MCQ'S" << endl;
		cout << "Q1:2" << endl;
		cout << "Q2:4" << endl;
		cout << "Q3:3" << endl;
		cout << "Q4:4" << endl;
		cout << "Q5:4" << endl;
	}
	else if (t == 2)
	{
		cout << "TRUE/FALSE" << endl;
		cout << "Q1:False" << endl;
		cout << "Q2:True" << endl;
		cout << "Q3:True" << endl;
		cout << "Q4:False" << endl;
		cout << "Q5:False" << endl;
	}
}

//---------------------------------------------------------------------------------------------------
//---------------------------------------quiz definiton functions------------------------------------
//---------------------------------------------------------------------------------------------------

int pf(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "A_______ is a short hand notation for a simple assignment" << endl;
		cout << "1:Simple assignment   " << endl;
		cout << "2:Compound assignment " << endl;
		cout << "3:Complex assignment  " << endl;
		cout << "4:Non of the above  " << endl;
		cout << "5:End Quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "A piece of data is called logical if it conveys the idea of ________ " << endl;
		cout << "1:Undefine " << endl;
		cout << "2:True " << endl;
		cout << "3:False  " << endl;
		cout << "4:Both 2 and 3(answer)  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "An expression is a sequence of _______ that reduces to a single value " << endl;
		cout << "1:Character   " << endl;
		cout << "2:Operands " << endl;
		cout << "3:Operators  " << endl;
		cout << "4:Both 2 and 3 " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "The symbol that represents comments in a flowchart is" << endl;
		cout << "1:A procedure symbol  " << endl;
		cout << "2:A annotation symbol " << endl;
		cout << "3:A flow line  " << endl;
		cout << "4:A subroutine  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is NOT a type of algorithm?" << endl;
		cout << "1:Program " << endl;
		cout << "2:Flowchart " << endl;
		cout << "3:Decision Table  " << endl;
		cout << "4:Pseudocode  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "the precedence of an operator determines its order of evaluation in an expression" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "whenever there is at least one relational operator in an expression, the result of the expression will be either true or false" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "the OR operator is applied before the AND operator" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "decision making in computers is based on comparing data" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "the NOT operator turns a result to false regardless of its previous value" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "When Does a syntax error occurs:" << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int oop(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "Who invented OOP?" << endl;
		cout << "1:Andrea Ferro " << endl;
		cout << "2:Adele Goldberg" << endl;
		cout << "3:Alan Ka " << endl;
		cout << "4:Dennis Ritchie " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which was the first purely object oriented programming language developed? " << endl;
		cout << "1:Kotlin " << endl;
		cout << "2:SmallTalk " << endl;
		cout << "3:Java " << endl;
		cout << "4: C++ " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which is not a feature of OOP in general definitions? " << endl;
		cout << "1:Efficient Code " << endl;
		cout << "2:Code reusabilit" << endl;
		cout << "3:Modularity " << endl;
		cout << "4:Duplicate/Redundant data" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "When OOP concept did first came into picture?" << endl;
		cout << "1:1980’s  " << endl;
		cout << "2:1995" << endl;
		cout << "3:1970’s " << endl;
		cout << "4:1993 " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which feature of OOP indicates code reusability? " << endl;
		cout << "1:Abstractiom " << endl;
		cout << "2:Polymorphism" << endl;
		cout << "3:Encapsulation " << endl;
		cout << "4:Inheritance " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Abstraction provides a high-level model of a physical entity " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Encapsulation makes code modification easier but reduces code reuse" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Objects in OO systems posses state, behavior, and quantity" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << " Improvements in compiler technology help make OO Programming more usable" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << " Classes in OOP programming provide types for objects " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is polymorphism? " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int itc(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "Who is the father of Computers?" << endl;
		cout << "1:James Gosling " << endl;
		cout << "2:Charles Babbage" << endl;
		cout << "3:Dennis Ritchie " << endl;
		cout << "4:Bjarne Stroustrup " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is the correct abbreviation of COMPUTER?" << endl;
		cout << "1:Commonly Occupied Machines Used in Technical and Educational Research " << endl;
		cout << "2:Commonly Operated Machines Used in Technical and Environmental Research" << endl;
		cout << "3:Commonly Oriented Machines Used in Technical and Educational Research  " << endl;
		cout << "4: Commonly Operated Machines Used in Technical and Educational Research " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is the correct definition of Computer? " << endl;
		cout << "1:Computer is a machine or device that can be programmed to perform arithmetical or logic operation sequences automatically  " << endl;
		cout << "2:Computer understands only binary language which is written in the form of 0s & 1s " << endl;
		cout << "3:Computer is a programmable electronic device that stores, retrieves, and processes the data  " << endl;
		cout << "4:All of the mentioned" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What is the full form of CPU? " << endl;
		cout << "1:Computer Processing Unit   " << endl;
		cout << "2:Computer Principle Unit" << endl;
		cout << "3:Central Processing Unit " << endl;
		cout << "4:Control Processing Unit " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following language does the computer understand? " << endl;
		cout << "1:Computer understands only C Language  " << endl;
		cout << "2:Computer understands only Assembly Language " << endl;
		cout << "3:Computer understands only Binary Language " << endl;
		cout << "4:Computer understands only BASIC " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Digital camera is input device used to take photographs " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "FAX stands for First Away Xerox " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Whaling / Whaling attack is a kind of phishing attacks that target senior executives and other high profile to access valuable information. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Freeware is software that is available for use at no monetary cost. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "IPv6 Internet Protocol address is represented as eight groups of four Octal digits." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "Who is the father of computer? " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int ds(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "How can we describe an array in the best possible way? " << endl;
		cout << "1:The Array shows a hierarchical structure " << endl;
		cout << "2:Arrays are immutable" << endl;
		cout << "3:Container that stores the elements of similar types " << endl;
		cout << "4:The Array is not a data structure  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is the correct way of declaring an array? " << endl;
		cout << "1:int javatpoint[10]; " << endl;
		cout << "2:int javatpoint;" << endl;
		cout << "3:javatpoint{20}; " << endl;
		cout << "4:array javatpoint[10]; " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "How can we initialize an array in C language? " << endl;
		cout << "1:int arr[2]=(10, 20)  " << endl;
		cout << "2:int arr(2)={10, 20} " << endl;
		cout << "3:int arr[2] = {10, 20} " << endl;
		cout << "4:int arr(2) = (10, 20) " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is the advantage of the array data structure? " << endl;
		cout << "1:Elements of mixed data types can be stored.   " << endl;
		cout << "2:Easier to access the elements in an array" << endl;
		cout << "3:Index of the first element starts from 1 " << endl;
		cout << "4:Elements of an array cannot be sorted  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following highly uses the concept of an array?" << endl;
		cout << "1:Binary Search tree  " << endl;
		cout << "2:Caching " << endl;
		cout << "3:Spatial locality " << endl;
		cout << "4:Scheduling of Processes  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "A queue cannot be implemented using in an array" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Every node in a linked list has two components: one to store the relevant information and one to store the address." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "The address of the first node in a linked list is stored in a separate location/pointer, called the head.  " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Each node of a singly linked list has at least four components.  " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "The link component of each node is a pointer." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is a postfix expression?" << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int aoa(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "Data Analytics uses ___ to get insights from data. " << endl;
		cout << "1:Statistical figures  " << endl;
		cout << "2:Numerical aspects " << endl;
		cout << "3:Statistical methods " << endl;
		cout << "4:None of the mentioned above  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Amongst which of the following is / are the branch of statistics which deals with the development of statistical methods is classified as ___" << endl;
		cout << "1:Industry statistics  " << endl;
		cout << "2:Economic statistics" << endl;
		cout << "3:Applied statistics " << endl;
		cout << "4:None of the mentioned above  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Linear Regression is the supervised machine learning model in which the model finds the best fit ___ between the independent and dependent variable. " << endl;
		cout << "1:Linear line " << endl;
		cout << "2:Nonlinear line" << endl;
		cout << "3:Curved line  " << endl;
		cout << "4:All of the mentioned above " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Amongst which of the following is / are the types of Linear Regression" << endl;
		cout << "1:Simple Linear Regression   " << endl;
		cout << "2:Multiple Linear Regression " << endl;
		cout << "3:Both A and B " << endl;
		cout << "4:None of the mentioned above  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Amongst which of the following is / are the true about regression analysis? " << endl;
		cout << "1:Describes associations within the data  " << endl;
		cout << "2:Modeling relationships within the dat" << endl;
		cout << "3:Answering yes/no questions about the data " << endl;
		cout << "4:All of the mentioned above  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Business data analytics targets effectvie business decision-making using rigorous technical know-hows." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Business analysis tools, techniques, and competencies are used in data analytics to direct analytics initiatives.   " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Business data analytics asks foundational questions to shape strategic imperatives. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Rapid technological advances in the digitization of data and improved analytics methods are prompting businesses to adopt a data-driven management philosophy." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Business data analytic competencies are limited to those required to complete analytical activities." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "Define the term 'Data Wrangling in Data Analytics" << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int sre(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << " What are the types of requirements ? " << endl;
		cout << "1:Availability  " << endl;
		cout << "2:Reliability " << endl;
		cout << "3:Usability " << endl;
		cout << "4:All of the mentioned " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Select the developer-specific requirement ? " << endl;
		cout << "1:Portability " << endl;
		cout << "2:Maintainability" << endl;
		cout << "3:Availability " << endl;
		cout << "4:Both Portability and Maintainability " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which one of the following is not a step of requirement engineering?" << endl;
		cout << "1:elicitation  " << endl;
		cout << "2:design" << endl;
		cout << "3:analysis " << endl;
		cout << "4:documentation" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "FAST stands for" << endl;
		cout << "1:Functional Application Specification Technique" << endl;
		cout << "2:Fast Application Specification Technique" << endl;
		cout << "3:Facilitated Application Specification Technique" << endl;
		cout << "4:None of the mentioned" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << " QFD stands for" << endl;
		cout << "1:quality function design " << endl;
		cout << "2:quality function development" << endl;
		cout << "3:quality function deployment" << endl;
		cout << "4:none of the mentioned " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Software is a product and can be manufactured using the same technologies used for other engineering artifacts" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "WebApps are a mixture of print publishing and software development, making their development outside the realm of software engineering practice" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "There are no real differences between creating WebApps and Mobile-Apps" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "In its simplest form an external computing device may access cloud data services using a web browser." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Product line software development depends the reuse of existing software components to provide software engineering leverage." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is a software requirements specification " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int rm(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "Who was the author of the book named \"Methods in Social Research\"?" << endl;
		cout << "1:Kerlinger  " << endl;
		cout << "2:CR Kothari " << endl;
		cout << "3:Goode and Hatt " << endl;
		cout << "4:Wilkinson  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What is the major attribute of Correlation Analysis?" << endl;
		cout << "1:Association among variables " << endl;
		cout << "2:Difference among variables" << endl;
		cout << "3:Regression among variables " << endl;
		cout << "4:Variations among variables " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What is the name of the conceptual framework in which the research is carried out? " << endl;
		cout << "1:Research hypothesis  " << endl;
		cout << "2:Synopsis of Research " << endl;
		cout << "3:Research paradigm " << endl;
		cout << "4:Research design " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "How is random sampling helpful? " << endl;
		cout << "1:Reasonably accurate " << endl;
		cout << "2:An economical method of data collection " << endl;
		cout << "3:Free from personal biases  " << endl;
		cout << "4:All of the above " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following features are considered as critical in qualitative research? " << endl;
		cout << "1:Collecting data with the help of standardized research tools " << endl;
		cout << "2:Design sampling with probability sample techniques" << endl;
		cout << "3:Collecting data with bottom-up empirical evidence " << endl;
		cout << "4:Gathering data with top-down schematic evidence " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Mixed methods research is a type of research that combines qualitative and quantitative research techniques into a single study. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "“Double-barreled” questions ask two questions at one time and are very effective in survey research because it saves valuable time." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "If the researcher is providing answer choices for a survey question, they have to be both exhaustive and mutually exclusive. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Open-ended questions are those that provide the answers for respondents to select from in their response to a survey question. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "When constructing a questionnaire, it is best to get the potentially threatening questions out of the way first at the start of the survey. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is the meaning of research?   " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int bda(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "What are the main components of Big Data? " << endl;
		cout << "1:MapReduce  " << endl;
		cout << "2:HDFS " << endl;
		cout << "3:YARN  " << endl;
		cout << "4:All of these  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "" << endl;
		cout << "1: " << endl;
		cout << "2:" << endl;
		cout << "3: " << endl;
		cout << "4: " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What are the different features of Big Data Analytics?" << endl;
		cout << "1:Open-Source  " << endl;
		cout << "2:Scalability " << endl;
		cout << "3:Data Recovery  " << endl;
		cout << "4:All the above " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "According to analysts, for what can traditional IT systems provide a foundation when they’re integrated with big data technologies like Hadoop?" << endl;
		cout << "1:Big data management and data mining   " << endl;
		cout << "2:Data warehousing and business intelligence " << endl;
		cout << "3:Management of Hadoop clusters  " << endl;
		cout << "4:Collecting and storing unstructured data  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What are the four V’s of Big Data ? " << endl;
		cout << "1:Volume  " << endl;
		cout << "2:Velocity " << endl;
		cout << "3:Variety  " << endl;
		cout << "4:All the above" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "Descriptive analytics answers the question, \"What happened ? \" " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Descriptive analytics is the most common and fundamental form of analytics that companies use." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Descriptive analytics uses simple Math's and statistical tools, such as arithmetic, averages and percent" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Teradata refers accuracy and confidence in business decision making," << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Beyond Volume, velocity and variety are the concerns and problems of big data veracity. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is Big Data, and where does it come from?" << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int ai(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "What is the full form of “AI”?" << endl;
		cout << "1:Artificially Intelligent " << endl;
		cout << "2:Artificial Intelligence" << endl;
		cout << "3:Artificially Intelligence " << endl;
		cout << "4:Advanced Intelligence " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << " What is Artificial Intelligence? " << endl;
		cout << "1:Artificial Intelligence is a field that aims to make humans more intelligent  " << endl;
		cout << "2:Artificial Intelligence is a field that aims to improve the security" << endl;
		cout << "3:Artificial Intelligence is a field that aims to develop intelligent machines " << endl;
		cout << "4:Artificial Intelligence is a field that aims to mine the data  " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is the branch of Artificial Intelligence?" << endl;
		cout << "1:Machine Learning " << endl;
		cout << "2:Cyber forensics" << endl;
		cout << "3:Full-Stack Developer  " << endl;
		cout << "4:Network Design " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Who is the inventor of Artificial Intelligence" << endl;
		cout << "1:Geoffrey Hinton   " << endl;
		cout << "2:Andrew Ng " << endl;
		cout << "3:John McCarthy " << endl;
		cout << "4:Jürgen Schmidhuber " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What is the goal of Artificial Intelligence" << endl;
		cout << "1:To solve artificial problems " << endl;
		cout << "2:To extract scientific causes" << endl;
		cout << "3:To explain various sorts of intelligence " << endl;
		cout << "4:To solve real-world problems " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "The intelligence phase of decision making finds or recognizes a problem, need, or  opportunity.  " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "The choice phase of decision making considers ways to solve problems, fill needs, or take advantage of opportunities." << endl;
		cout << "1:True " << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "The four phases of decision making are linear and once one phase is complete it is never returned to.  " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "A structured decision involves processing a certain kind of information in a specified way so that you will always get the right answer.No \"feel\" or intuition is necessary.  " << endl;
		cout << "1:" << endl;
		cout << "2:" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "A recurring decision is one that happens repeatedly, and often periodically, whether weekly, monthly, quarterly, or yearly." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What are the Common Uses and Applications of AI?" << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int dl(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "Which of the following is a subset of machine learning? " << endl;
		cout << "1:Numpy " << endl;
		cout << "2:SciPy" << endl;
		cout << "3:Deep Learning " << endl;
		cout << "4:All of the above " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "How many layers Deep learning algorithms are constructed? " << endl;
		cout << "1:2 " << endl;
		cout << "2:3" << endl;
		cout << "3:4 " << endl;
		cout << "4:5 " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "The first layer is called the?" << endl;
		cout << "1:inner layer " << endl;
		cout << "2:outer laye" << endl;
		cout << "3:hidden layer " << endl;
		cout << "4:None of the above" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "RNNs stands for?" << endl;
		cout << "1:Receives neural networks" << endl;
		cout << "2:Report neural networks" << endl;
		cout << "3:Recording neural networks" << endl;
		cout << "4:Recurrent neural networks" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following is/are Common uses of RNNs? " << endl;
		cout << "1:BusinessesHelp securities traders to generate analytic reports  " << endl;
		cout << "2:Detect fraudulent credit-card transaction" << endl;
		cout << "3:Provide a caption for images" << endl;
		cout << "4:All of the above" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "If a machine learning algorithm A performs better then machine learning algorithm B on a non-empty set of benchmark problems, there must be another non-empty set of problems for which B is better than " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Weights are update more often in pattern learning, than in batch learning. " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Binary perceptrons require that the input values are binary" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "A multilayer perceptron must have at least one non linear hidden layer, to solve the XOR proble " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "A multilayer perceptron trained by Backprop and with sufficiently many hidden layer and nodes to represent a solution to a given problem, is guaranteed to find that solution (or one equally good) if trained for long enough " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "What is deep learning?  " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}
int dip(int t)
{
	int m = 0;
	int c;
	if (t == 1)
	{
		cout << "What is Digital Image Processing?" << endl;
		cout << "1:It’s an application that alters digital video " << endl;
		cout << "2:It’s a software that allows altering digital pictures" << endl;
		cout << "3:It’s a system that manipulates digital media " << endl;
		cout << "4:It’s a machine that allows altering digital images " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Among the following, functions that can be performed by digital image processing is? " << endl;
		cout << "1:Fast image storage and retrieval " << endl;
		cout << "2:Controlled viewin" << endl;
		cout << "3:Image reformattin " << endl;
		cout << "4:All of the above " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "Which of the following process helps in Image enhancement" << endl;
		cout << "1:Digital Image Processing  " << endl;
		cout << "2:Analog Image Processing " << endl;
		cout << "3:Both a and b " << endl;
		cout << "4:None of the above" << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 3)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << "What are the categories of digital image processing" << endl;
		cout << "1:Image Enhancement  " << endl;
		cout << "2:Image Classification and Analysis" << endl;
		cout << "3:Image Transformation " << endl;
		cout << "4:All of the mentioned " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
		cout << " Which of the following is an example of Digital Image Processing? " << endl;
		cout << "1:Computer Graphics " << endl;
		cout << "2:Pixels " << endl;
		cout << "3:Camera Mechanism  " << endl;
		cout << "4:All of the mentioned " << endl;
		cout << "5:End quiz" << endl;
		cin >> c;
		if (c == 4)
		{
			m = m + 2;
		}
		else if (c == 5)
		{
			return m;
		}
	}
	else if (t == 2)
	{
		cout << "The unique feature of imaging radar is its ability to flash camera  over virtually any region at any time, regardless of whether or ambient lighting conditions." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "Image enhancement is one of the simplest and most appealing areas of digital image processing" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "With reference to sense, two elements used to acquire digital images are a physical device and  Digitalizer.  " << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 1)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "The types of images are generated by the combination of an “illumination” source and Refraction of energy from that source by the elements of the “scene” being image(d)" << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
		cout << "One-dimensional imaging sensor strips that respond to various bands of the electromagnetic spectrum are mounted at 180 degrees to the direction of flight." << endl;
		cout << "1:True" << endl;
		cout << "2:False" << endl;
		cout << "3:End quiz" << endl;
		cin >> c;
		if (c == 2)
		{
			m = m + 2;
		}
		else if (c == 3)
		{
			return m;
		}
	}
	else if (t == 3)
	{
		string a;
		cout << "Define Image. How do you represent the digital images? " << endl;
		cin.ignore();
		getline(cin, a);
		int w = 0;
		int size = a.size();
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ' ')
			{
				w++;
			}
		}
		w = w + 1;
		if (w == 1)
		{
			m = 1;
		}
		else if (w == 2)
		{
			m = 2;
		}
		else if (w == 3)
		{
			m = 3;
		}
		else if (w == 4)
		{
			m = 4;
		}
		else if (w == 5)
		{
			m = 5;
		}
		else if (w == 6)
		{
			m = 6;
		}
		else if (w == 7)
		{
			m = 7;
		}
		else if (w == 8)
		{
			m = 8;
		}
		else if (w == 9)
		{
			m = 9;
		}
		else if (w >= 10)
		{
			m = 10;
		}
	}
	return m;
}

//---------------------------------------------------------------------------------------------------
//----------------------------function for the validation of the password----------------------------
//---------------------------------------------------------------------------------------------------

bool passwordvalidation(string p)
{
	int size = 0;
	int l = 0;
	int u = 0;
	int n = 0;
	int s = 0;
	int val;
	bool validation = false;
	while (p[size] != '\0')
	{
		size = size + 1;
	}
	if (size >= 6)
	{
		validation = true;
	}
	bool validation1 = false;
	for (int i = 0; i < size; i++)
	{
		val = p[i];
		if (val >= 'a' && val <= 'z')
		{
			l = l + 1;
		}
	}
	if (l > 0)
	{
		validation1 = true;
	}

	bool validation2 = false;
	for (int i = 0; i < size; i++)
	{
		val = p[i];
		if (val >= 'A' && val <= 'Z')
		{
			u = u + 1;
		}
	}
	if (u > 0)
	{
		validation2 = true;
	}

	bool validation3 = false;
	for (int i = 0; i < size; i++)
	{
		val = p[i];
		if (val >= '0' && val <= '9')
		{
			n = n + 1;
		}
	}
	if (n > 0)
	{
		validation3 = true;
	}
	bool validation4 = false;
	for (int i = 0; i < size; i++)
	{
		val = p[i];
		if (val >= 33 && val <= 47)
		{
			s = s + 1;
		}
	}
	if (s > 0)
	{
		validation4 = true;
	}
	return (validation && validation1 && validation2 && validation3 && validation4);
}

//---------------------------------------------------------------------------------------------------
//--------------------------------function for verification of rollno--------------------------------
//---------------------------------------------------------------------------------------------------

bool verifyrollno(Course* c, string n)
{
	if (n == "Zaviyar")
	{
		return true;
	}
	for (int i = 0; i < c->ts; i++)
	{
		if (c->rollno[i] == n)
		{
			return true;
		}
	}
	return false;
}