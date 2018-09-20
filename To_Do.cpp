// To_Do.cpp : Defines the entry point for the console application.
//
// add include guard should fix problems

#include "stdafx.h"
char goalfile[] = "goalfile.txt";
std::string answer;
std::string goalwant;
std::string setgoalstring;
std::ofstream m_file;
std::ifstream m_readfile;
To_Do m_main2;
Load load2;





bool checkfile(char* filepath) {

	static DWORD __stdcall fileatr = GetFileAttributes(filepath);

	if (fileatr == INVALID_FILE_ATTRIBUTES) {


		throw GetLastError();

	}

	return ((fileatr &  FILE_ATTRIBUTE_DIRECTORY) == 0);


}




int main()
{
	m_file.open("goalfile.txt", std::ofstream::out | std::ofstream::app);
	try {
		if (checkfile(goalfile)) {
			std::cout << "What would you like to do?" << std::endl;
			getline(std::cin, answer);
			if (answer == "set goal") {
				std::cout << "Input Goal" << std::endl;
				getline(std::cin, goalwant);
				setgoalstring = goalwant;
				m_file.close();
				load2.setgoal(setgoalstring);

			}
			 else if (answer == "show goals") {

				m_file.close();
				load2.printgoals();

			 }
			 else if (answer == "help") {
				 std::cout << "Use these three commnds to use the program \n 1. set goal: create a goal \n 2.show goals: show list of goals or to dos \n 3. reset: clear goals and to dos" << std::endl;
				 return m_main2.mainloop();
			 }
			 else if (answer == "reset") {
				 m_file.close();
				 if (remove("goalfile.txt") != 0) {
					 perror("Error clearing file");
					
				 }
				 else {
				 
					 puts("File cleared");
				 
				 }
				 return m_main2.mainloop();
			 }
			else {
				std::cout << "That isn't a command try again" << std::endl;

				return m_main2.mainloop();
			}
			//std::cout << m_file.rdbuf();
		}
		else {
			std::ofstream m_file("goalfile.txt");



		}
	}
	catch (DWORD lasterror) {
		std::cout << "catch lasterror: " << lasterror << std::endl;

	}

    return 0;
}

