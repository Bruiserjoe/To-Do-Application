// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once



#ifndef _STDAFX_H_INCLUDED
#define _STDAFX_H_INCLUDED
#pragma once
#include <stdio.h>
#include <SDKDDKVer.h>
#include <tchar.h>
#include <iostream>
#include <fstream>
#include <cstdio>
#include <Windows.h>
#include <string>

class To_Do {
public:
	std::string answer;
	std::string setgoalstring;
	std::string goalwant;
	std::ofstream m_file;
	int mainloop();
private:
	
};
class Load {
public:
	
	std::ifstream m_readfile2;
	std::ofstream m_file2;
	int setgoal(const std::string& goal);
	void printgoals();

};
#endif
// TODO: reference additional headers your program requires here
// add include guard should fix problems
