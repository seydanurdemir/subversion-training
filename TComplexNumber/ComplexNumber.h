//---------------------------------------------------------------------------

#ifndef ComplexNumberH
#define ComplexNumberH
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class PACKAGE TComplexNumber : public TComponent
{
private:
	double fRe, fIm;
	bool fActive;
protected:
public:
	__fastcall double getVersion() {
		return 1.0;
	}

	__fastcall void setVersion(double newVersionNumber) {
		//
	}
	double getModulus() {
        return pow(fRe * fRe + fIm * fIm, 0.5);
    }

	__fastcall TComplexNumber(TComponent* Owner);
__published:
	__property double Re = {read = fRe, write = fRe};
	__property double Im = {read = fIm, write = fIm};
	__property double Version = {read = getVersion, write = setVersion};
    __property bool Active = {read = fActive, write = fActive};
};
//---------------------------------------------------------------------------
#endif
