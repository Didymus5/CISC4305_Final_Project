#pragma once
#include <vector>
#include <string>
#include <fstream>


typedef std::vector<std::string> Lines_t;

class File
{
public:
	File(std::string zFileName = ".\\sampleContacts.dat");
	~File();

	Lines_t readLines();
	void writeLines(Lines_t tLines);

	void zeroOut();

	std::string getFileName() { return m_zFileName; }

private:
	std::string m_zFileName;
	std::fstream m_cFile;
};
