#include <iostream>
#include <string>
using namespace std;



int main() {

  std::cout << "====================================================================" << endl;;
  std::cout << "=====================================================================" << endl;;
  std::cout << "=======   Welcome To The Polytechnic Of Excellence, Ikorodu ===========" << endl;;
  std::cout << "=======   The Lagos State Polytechnic                       ==========" << endl;;
  std::cout << "=======   Faculty Of Technology                             =========" << endl;;
  std::cout << "=======   Department Of Computer Science                    =========" << endl;;
  std::cout << "==================================================================" << endl;;
  std::cout << "===================================================================" << endl;;

  std::string name, course_name;
  int total_score[3];
  int courses, score, avg, sum = 0; 
  
  
  std::cout << "Let's start by knowing you, what's your full name? " << endl;
//  std::cin >> name;
	getline(std::cin, name);
  std::cout << "Welcome " << name << std::endl;

  std::cout << "So, " << name << ", How many courses were you offered this semester? ";
  std::cin >> courses;
  for(int i = 1; i <= courses; i++)
  {
    std::cout << "Enter your course name for " << i << std::endl;
    std::cin >> course_name;
    std::cout << "Enter your score for " << course_name << std::endl;
    std::cin >> score;
    sum+=score;
  }
  cout << "score as at this level is " << score << endl;
//  for(int i = 0; i < courses; i++)
//    {
//      sum+=total_score[i];
//    }
	
	cout << "sum as at this level is " << sum << endl;
	cout << "courses as at this level is " << courses << endl;
	avg = sum / courses;
	
	std::cout << "your average score is " << avg << endl;
	
	/*
  Formulae for the grading System are as follows:
	70 - 100 A
	60 - 69 B
	50 - 59 C
	40 - 49 D
	01 - 39 F
	*/
	
  // conditionals - checking the average score with the formulae provided
	if(avg >= 70 || avg == 100)
	{
		std::cout << "Your grade is A";
	}
  else if(avg >= 60 && avg <= 69 )
  {
		std::cout << "Your grade is B";
	}
  else if(avg >= 50 && avg <= 59)
  {
		std::cout << "your grade is C";
	}
  else if(avg >= 40 && avg <= 49)
  {
		std::cout << "your grade is D";
	}
  else if(avg >= 1 && avg <40)
  {
		std::cout << "your grade is F";
	}
  else
  {
		std::cout << "your don't have a grade, please try again";
	}
	
	return 0;
}