// Text.h

#ifndef TEXT_H
#define TEXT_H

// a class that extends the file type

#include "File.h"

class TextFile : public File{
	private:
		int numChars;
	public:
		TextFile();
		TextFile(const string& n, const int& numChar);
		int getNumChars();
		
		virtual int getSize();
		void displayProperties();
};

#endif
