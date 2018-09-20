#include "stdafx.h"

Load load3;

int To_Do::mainloop() {
	m_file.open("goalfile.txt", std::ofstream::out | std::ofstream::app);
	std::cout << "What would you like to do?" << std::endl;
	getline(std::cin, answer);
	if (answer == "set goal") {
		getline(std::cin, goalwant);
		setgoalstring = goalwant;
		m_file.close();
		load3.setgoal(setgoalstring);

	}
	else if (answer == "show goals") {

		m_file.close();
		load3.printgoals();

	}
	else if (answer == "help") {
		std::cout << "Use these three commnds to use the program \n 1. set goal: create a goal \n 2.show goals: show list of goals or to dos \n 3. reset: clear goals and to dos" << std::endl;
		return mainloop();
	}
	else if (answer == "reset") {
		m_file.close();
		if (remove("goalfile.txt") != 0) {
			perror("Error clearing file");

		}
		else {

			puts("File cleared");

		}
		return mainloop();
	}
	else {
		std::cout << "That isn't a command try again" << std::endl;

		return mainloop();
	}

	return 0;

}