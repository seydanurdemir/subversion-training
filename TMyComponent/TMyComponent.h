//---------------------------------------------------------------------------

#ifndef TMyComponentH
#define TMyComponentH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
using namespace std;
//---------------------------------------------------------------------------
class PACKAGE TMyComponent : public TComponent
{
private:
	string path;
protected:
public:
	__fastcall string getPath() {
		return path;
	}
	__fastcall void setPath(string newPath) {
		path = newPath;
	}
	__fastcall string readFile() {
		string firstLine = "jake";
		ifstream myFile("abc.txt");
		if (myFile.is_open()){
			getline(myFile, firstLine);
			myFile.close();
		}
		return firstLine;
    }
	__fastcall TMyComponent(TComponent* Owner);
__published:
	//__property string Path = {read = getPath, write = setPath};
};
//---------------------------------------------------------------------------
#endif
