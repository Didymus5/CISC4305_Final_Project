#include <string>
#include <fstream>
#include <iostream>
#include "File.h"


#include <direct.h>
#define GetCurrentDir _getcwd

using namespace std;


File::File(std::string zFileName)
{
	m_zFileName = zFileName;
	m_cFile.open(zFileName.c_str(), fstream::in | fstream::out | fstream::ate | fstream::app);

	if (m_cFile.fail()) {
		cout << "Failed to open file " << m_zFileName << endl;
	}
}

File::~File()
{
	m_cFile.close();
}

Lines_t File::readLines()
{
	Lines_t tLines;
	string zLine;

	m_cFile.seekg(0, m_cFile.beg);

	while (getline(m_cFile, zLine)) {
		tLines.push_back(zLine);
	}

	m_nLinesRead = tLines.size();

	return tLines;
}

void File::writeLines(Lines_t tLines)
{
	int nSize = tLines.size();

	for (int nIndex = 0; nIndex < nSize; nIndex++) {
		m_cFile << tLines[nIndex];
	}
}

void File::zeroOut()
{
	m_cFile.close();
	m_cFile.open(m_zFileName.c_str(), fstream::in | fstream::out | fstream::trunc);

	m_cFile.close();
	m_cFile.open(m_zFileName.c_str(), fstream::in | fstream::out | fstream::app);
}
