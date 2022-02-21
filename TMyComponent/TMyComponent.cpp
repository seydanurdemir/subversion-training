//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "TMyComponent.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TMyComponent *)
{
	new TMyComponent(NULL);
}
//---------------------------------------------------------------------------
__fastcall TMyComponent::TMyComponent(TComponent* Owner)
	: TComponent(Owner)
{
}
//---------------------------------------------------------------------------
namespace Tmycomponent
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TMyComponent)};
		RegisterComponents(L"My Components", classes, 0);
	}
}
//---------------------------------------------------------------------------
