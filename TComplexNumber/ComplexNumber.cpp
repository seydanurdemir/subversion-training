//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "ComplexNumber.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TComplexNumber *)
{
	new TComplexNumber(NULL);
}
//---------------------------------------------------------------------------
__fastcall TComplexNumber::TComplexNumber(TComponent* Owner)
	: TComponent(Owner)
{
}
//---------------------------------------------------------------------------
namespace Complexnumber
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TComplexNumber)};
		RegisterComponents(L"My Components", classes, 0);
	}
}
//---------------------------------------------------------------------------
