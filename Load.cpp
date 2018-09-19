
#include "stdafx.h"

To_Do m_main;
std::ifstream m_readfile2;
std::ofstream m_file2;
int Load::setgoal(const std::string& goal) {
	m_main.m_file.open("goalfile.txt", std::ios::out | std::ios::app);
	//std::cout << "Writing goal to file" << std::endl;
	std::cout << "Writing " << goal << " to file..." << std::endl; //test purposes
	m_main.m_file << goal << '\n';
	m_main.m_file.close();
	return m_main.mainloop();


}
void Load::printgoals() {
	std::string line;
	m_readfile2.open("goalfile.txt", std::ios::out | std::ios::app);
	std::cout << "Printing current goals" << std::endl;
	while (getline(m_readfile2, line)) {

		std::cout << line << '\n';
	}
	std::cout << "------------------------------" << std::endl;
	m_readfile2.close();
	m_main.mainloop();
} 
