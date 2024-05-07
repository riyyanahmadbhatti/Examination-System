Task of the project
• In this project we are supposed to design an examination system in which both the
teacher and student can login and do the required
• Where the teacher can set and generate the quiz which will be attempted by the student
and on based of the results, we will receive evaluations regarding the quiz
Steps
• First, we were to check what was required from us
• Then we were supposed to make class diagrams of the classes we were going to use
• Then start designing the project accordingly and in the end test it
Structures
• Course structure: This structure was used to store the data of the students from the csv
file which was provided to us which contained the students and the courses they were
registered in
Classes
• quiz Class: This class was used to set the quiz up by the teachers which is supposed to be
given by the students. Contains 2 private members one is a string other is integer
• Teacher Class: This class is made for the teachers who want to see their information
regarding courses, quizzes and results. Contains 3 private members one is string, second
an object of quiz class and object of structure Course
• Student Class: This class is made for the students which contains their courses and
quizzes. Contains 4 private members one is string, second an object of quiz class, third an
object of structure Course and an integer array of size 11
Functions
• pf(int t): This is the function of programming fundamentals quiz
• oop(int t): This is the function of object-oriented programming quiz
• itc(int t): This is the function of introduction to computer quiz
• ds(int t): This is the function of data structures quiz
• aoa(int t): This is the function of analysis of algorithms quiz
• sre(int t): This is the function of software requirements engineering quiz
• rm(int t): This is the function of research methodology quiz
• bda(int t): This is the function of big data analytics quiz
• ai(int t): This is the function of artificial intelligence quiz
• dl(int t): This is the function of deep learning quiz
• dip(int t): This is the function of digital image processing quiz
• getdata(): This function is supposed to bring data of the students from the csv file
• akpf(int t): This is the function of programming fundamentals answer key
• akoop(int t): This is the function of object-oriented programming answer key
• akitc(int t): This is the function of introduction to computer answer key
• akds(int t): This is the function of data structures answer key
• akaoa(int t): This is the function of analysis of algorithms answer key
• aksre(int t): This is the function of software requirements engineering answer key
• akrm(int t): This is the function of research methodology answer key
• akbda(int t): This is the function of big data analytics answer key
• akai(int t): This is the function of artificial intelligence answer key
• akdl(int t): This is the function of deep learning answer key
• akdip(int t): This is the function of digital image processing answer key
Teacher’s features:
• Show his/her courses
• To set the quiz
• To see the results/analytics
• To see the answer key quizzes
• To see the attendance of whom have attempted the quiz
Student's features:
• Show his/her course
• To give the quiz
• To show the results of the quiz
Programming language/concepts
• The language for this project is C++
• Use of object-oriented programming which includes concepts such as classes, structs,
composition
• The IDE used for this Microsoft Visual Studio
How to use the system
• When you run the program, you will encounter with a choice of student and teacher it is
suggested to use the teacher.
• Enter the required credentials
• When teacher is selected chose any task you want to perform such as setting up of the
quiz
• After performing the tasks log out
• Now a student login after providing the required credentials
• Perform any task such as giving the quiz or seeing his/her courses
• Now logout and login another student until you want to store data
• Now let the teacher login and check the results and attendance of whosoever has
attempted the quiz or not
To conclude
• This project is developed using C++ languages and by using the concepts of objectoriented programming, the accurate design of the system is also attached using the class
diagram. The program also displays the use of concepts of object-oriented programming
such as classes, structs and composition. The program is test to confirm the use of system
is working efficiently to the best of knowledge
