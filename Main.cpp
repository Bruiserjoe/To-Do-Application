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
	else {
		std::cout << "That isn't a command try again" << std::endl;

		return mainloop();
	}

	return 0;

}