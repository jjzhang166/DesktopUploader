// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Idheadercoderindy.pas' rev: 20.00

#ifndef IdheadercoderindyHPP
#define IdheadercoderindyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Idglobal.hpp>	// Pascal unit
#include <Idheadercoderbase.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Idheadercoderindy
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TIdHeaderCoderIndy;
class PASCALIMPLEMENTATION TIdHeaderCoderIndy : public Idheadercoderbase::TIdHeaderCoder
{
	typedef Idheadercoderbase::TIdHeaderCoder inherited;
	
public:
	__classmethod virtual System::UnicodeString __fastcall Decode(const System::UnicodeString ACharSet, const System::UnicodeString AData);
	__classmethod virtual System::UnicodeString __fastcall Encode(const System::UnicodeString ACharSet, const System::UnicodeString AData);
	__classmethod virtual bool __fastcall CanHandle(const System::UnicodeString ACharSet);
public:
	/* TObject.Create */ inline __fastcall TIdHeaderCoderIndy(void) : Idheadercoderbase::TIdHeaderCoder() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIdHeaderCoderIndy(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Idheadercoderindy */
using namespace Idheadercoderindy;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdheadercoderindyHPP
