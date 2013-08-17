// General

// Make this $DEFINE to use the 16 color icons required by Borland
// or DEFINE to use the 256 color Indy versions
{.$DEFINE Borland}

// S.G. 4/9/2002: IPv4/IPv6 general switch (for defaults only)
{$DEFINE IdIPv4}

{$DEFINE INDY100}
{$DEFINE 10_5_5}  //so developers can IFDEF for this specific version

{$IFDEF BCB}
  {$DEFINE CBUILDER}
{$ELSE}
  {$DEFINE DELPHI}
{$ENDIF}

{$UNDEF USEOPENSSL}
{$UNDEF USEZLIBUNIT}

// $DEFINE the following if the global objects in the IdStack and IdThread
// units should be freed on finalization
{.DEFINE IDFREEONFINAL}
{$UNDEF IDFREEONFINAL}

// Make sure the following is $DEFINE'd only for suitable environments
// as specified further below.  This works in conjunction with the
// IDFREEONFINAL define above.
{$UNDEF REGISTER_EXPECTED_MEMORY_LEAK}

// FastMM is natively available in BDS 2006 and higher.  $DEFINE the
// following for earlier versions if FastMM has been installed manually
{.$DEFINE USEFASTMM4}
{$UNDEF USEFASTMM4}

// Make sure the following is $DEFINE'd only for Tiburon onwards as specified
// further below.  The VCL is fully Unicode, where the 'String' type maps to
// System.UnicodeString, not System.AnsiString anymore
{$UNDEF UNICODESTRING}

// Make sure the following are $DEFINE'd only for suitable environments
// as specified further below.  This works in conjunction with the
// UNICODESTRING define above.
{$UNDEF UNICODE_BUT_NO_UNICODESTRING}
{$UNDEF TEncoding}

// Delphi 4
{$IFDEF VER120}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL40}
  {$DEFINE DELPHI4}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE MSWINDOWS}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCL}
  {$DEFINE WIDGETVCLLIKEORKYLIX}
{$ENDIF}

// C++ Builder 4
{$IFDEF VER125}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL40}
  {$DEFINE CBUILDER4}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE MSWINDOWS}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCL}
  {$DEFINE WIDGETVCLLIKEORKYLIX}
{$ENDIF}

// Delphi 5 & CBuilder 5
{$IFDEF VER130}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL5}
  {$IFDEF BCB}
    {$DEFINE CBUILDER5}
  {$ELSE}
    {$DEFINE DELPHI5}
  {$ENDIF}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE MSWINDOWS}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCL}
  {$DEFINE WIDGETVCLLIKEORKYLIX}
{$ENDIF}

//Delphi 6
{$IFDEF VER140}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$IFDEF BCB}
    {$DEFINE CBUILDER6}
    {$DEFINE ALLOW_NAMED_THREADS}
  {$ELSE}
    {$DEFINE DELPHI6}
  {$ENDIF}
  {$DEFINE TSelectionEditor}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL60}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCL}
  {$DEFINE VCL60PLUS}
  {$DEFINE WIDGETVCLLIKEORKYLIX}
  {$DEFINE DEPRECATED}
{$ENDIF}

//Delphi 7
{$IFDEF VER150}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL70}
  {$IFDEF BCB}
    {$DEFINE CBUILDER7}
  {$ELSE}
    {$DEFINE DELPHI7}
  {$ENDIF}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCLLIKEORKYLIX}
  {$DEFINE WIDGETVCL}
  {$DEFINE VCL60PLUS}
  {$DEFINE DEPRECATED}
{$ENDIF}

//Delphi 8
{$IFDEF VER160}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL80}
  {$DEFINE DELPHI8}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  //Widget defines are omitted since D8 only supports NET
  {$DEFINE DEPRECATED}
{$ENDIF}

//Delphi 2005
{$IFDEF VER170}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL2005ORABOVE}
  {$DEFINE VCL2005}
  {$DEFINE DELPHI2005}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$IFNDEF CIL}
    {$DEFINE WIDGETVCLLIKE} // LCL included.
    {$DEFINE WIDGETVCLLIKEORKYLIX}
    {$DEFINE WIDGETVCL}
    {$DEFINE VCL60PLUS}
  {$ENDIF}
  {$DEFINE DEPRECATED}
{$ENDIF}

// NOTE: CodeGear decided to make Highlander be a non-breaking release
// (no interface changes, thus fully backwards compatible without any
// end user code changes), so VER180 applies to both BDS 2006 and
// Highlander prior to the release of RAD Studio 2007.  Use VER185 to
// identify Highlanger specifically.

//Delphi 2006, Delphi 2007 (Highlander)
{$IFDEF VER180}
  {$DEFINE USEINLINE}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL2005ORABOVE}
  {$DEFINE VCL2006ORABOVE}
  {$DEFINE VCL2006}
  {$DEFINE DELPHI2006}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$IFNDEF IDFREEONFINAL}
    {$DEFINE REGISTER_EXPECTED_MEMORY_LEAK}
  {$ENDIF}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCL}
  {$DEFINE WIDGETVCLLIKEORKYLIX}
  {$DEFINE VCL60PLUS}
  {$DEFINE DEPRECATED}
{$ENDIF}

//Delphi 2007 (Highlander)
{$IFDEF VER185}
  {$DEFINE USEINLINE}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL2005ORABOVE}
  {$DEFINE VCL2006ORABOVE}
  {$DEFINE VCL2007ORABOVE}
  {$UNDEF DELPHI2006}
  {$UNDEF VCL2006}
  {$DEFINE VCL2007}
  {$DEFINE DELPHI2007}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$IFNDEF IDFREEONFINAL}
    {$DEFINE REGISTER_EXPECTED_MEMORY_LEAK}
  {$ENDIF}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$IFNDEF CIL}
    {$DEFINE WIDGETVCLLIKE} // LCL included.
    {$DEFINE WIDGETVCLLIKEORKYLIX}
    {$DEFINE WIDGETVCL}
    {$DEFINE VCL60PLUS}
  {$ENDIF}
  {$DEFINE CLASSPROPERTIES}
  {$DEFINE DEPRECATED}
{$ENDIF}

// BDS 2007 NET personality uses VER190 instead of 185.
//Delphi .NET 2007
{$IFDEF VER190}
  {$DEFINE USEINLINE}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL2005ORABOVE}
  {$DEFINE VCL2006ORABOVE}
  {$DEFINE VCL2007ORABOVE}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$DEFINE TFormatSettings}
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$IFDEF CIL}
    //Delphi 2007
    {$DEFINE VCL2007}
    {$DEFINE DELPHI2007}
  {$ENDIF}
  {$DEFINE CLASSPROPERTIES}
  {$DEFINE DEPRECATED}
{$ENDIF}

//Delphi 2009 (Tiburon)
{$IFDEF VER200}
  {$DEFINE UNICODESTRING} // 'String' type is Unicode now
  {$DEFINE TEncoding}
  {$DEFINE TCharacter}
  {$DEFINE DOTNET_OR_TEncoding}
  {$DEFINE DOTNET_OR_UNICODESTRING}
  {$DEFINE USEINLINE}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL8ORABOVE}
  {$DEFINE VCL2005ORABOVE}
  {$DEFINE VCL2006ORABOVE}
  {$DEFINE VCL2007ORABOVE}
  {$DEFINE VCL2009ORABOVE}
  {$DEFINE VCL2009}
  {$DEFINE DELPHI2009}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {$DEFINE ALLOW_NAMED_THREADS}
  {$IFNDEF IDFREEONFINAL}
    {$DEFINE REGISTER_EXPECTED_MEMORY_LEAK}
  {$ENDIF}
  {$DEFINE TFormatSettings}
  {$DEFINE BrokenFmtStr} // TODO: need to differentiate between RTM and Update 1
  {$DEFINE TSelectionEditor}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$IFNDEF CIL}
    {$DEFINE WIDGETVCLLIKE} // LCL included.
    {$DEFINE WIDGETVCLLIKEORKYLIX}
    {$DEFINE WIDGETVCL}
    {$DEFINE VCL60PLUS}
  {$ENDIF}
  {$DEFINE CLASSPROPERTIES}
  {$DEFINE DEPRECATED}
  {$DEFINE DEPRECATED_MSG}
{$ENDIF}

// Delphi 2009 and later support UNICODE strings natively!
// NOTE: Do not define UNICODE here.  The compiler defines
// the symbol automatically.
{$IFNDEF UNICODESTRING}
  {$IFDEF UNICODE}
    {$DEFINE UNICODE_BUT_NO_UNICODESTRING}
  {$ENDIF}
{$ENDIF}

//Delphi.NET
// Covers D8+
{$IFDEF CIL}
  {$DEFINE CPUI386}
  {$DEFINE ENDIAN_LITTLE}
  {$DEFINE CPU32}
  {$DEFINE WIDGETWINFORMS}
  {$DEFINE DOTNET_OR_TEncoding}
  {$DEFINE DOTNET_OR_UNICODESTRING}
  // Platform specific conditional. Used for platform specific code.
  {$DEFINE DOTNET}
  //differences in DotNET Framework versions.
  {$IFDEF VCL2007ORABOVE}
    {$DEFINE DOTNET2}
    {$DEFINE DOTNET1_1ORABOVE}
    {$DEFINE DOTNET2_OR_ABOVE}
  {$ELSE}
    {$DEFINE DOTNET1_1}
    {$DEFINE DOTNET1_1_OR_ABOVE}
  {$ENDIF}
  // Extra include used in D7 for testing. Remove later when all comps are
  // ported. Used to selectively exclude non ported parts. Allowed in places
  // IFDEFs are otherwise not permitted.
  {$DEFINE DOTNETEXCLUDE}
{$ENDIF}

// FPC (2+)

{$IFDEF FPC}
  {$DEFINE USEINLINE}
  {$DEFINE USECLASSINLINE}
  {$MODE Delphi}
  {$DEFINE WIDGETVCLLIKE} // LCL included.
  {$DEFINE WIDGETVCLLIKEORKYLIX}
  {$DEFINE USETBITBTN} //use Bit Buttons instead of Buttons
  {$DEFINE WIDGETLCL}
  //note that we may need further defines for widget types depending on
  //what we do and what platforms we support in FPC.
  //I'll let Marco think about that one.
  {$IFDEF UNIX}
    {$DEFINE USEBASEUNIX}
    {$DEFINE USEOPENSSL}
    {$DEFINE USEZLIBUNIT}
    {$IFDEF LINUX}
      //In Linux for I386, you can choose between a Kylix-libc API or 
      //the standard RTL Unix API.  Just pass -dKYLIXCOMPAT to the FPC compiler.
      //I will see what I can do about the Makefile.    
      {$IFDEF KYLIXCOMPAT}
        {$IFDEF CPUI386}
          {$UNDEF USEBASEUNIX}
        {$ENDIF}
      {$ENDIF}
    {$ENDIF}
    {$IFDEF USEBASEUNIX}
      {$UNDEF KYLIXCOMPAT}
    {$ENDIF}
  {$ENDIF}
  //so we can use IdWinsock2 in WinCE, maybe in other places in Indy as well -CYA
  {$IFDEF WINCE}
    //CE is UNICODE ONLY - UNICODE is already defined though.
    {$DEFINE WIN32_OR_WIN64_OR_WINCE}
  {$ENDIF}
  {$DEFINE VCL4ORABOVE}
  {$DEFINE VCL5ORABOVE}
  {$DEFINE VCL6ORABOVE}
  {$DEFINE VCL7ORABOVE}
  {$DEFINE VCL70}
  {$DEFINE DELPHI7}
  {$DEFINE OPTIONALPARAMS}
  {$DEFINE SAMETEXT}
  {.$DEFINE ALLOW_NAMED_THREADS}
  {$DEFINE NO_TMultiReadExclusiveWriteSynchronizer}
  {$DEFINE FPC_REINTRODUCE_BUG}
  {$DEFINE FPC_CIRCULARBUG}
  {$DEFINE NOREDECLARE}
  {$DEFINE BYTECOMPARESETS}
  {.$DEFINE DEPRECATED}
{$ENDIF}

// Kylix
//
//Important:  Don't use CompilerVersion here as
//IF's are evaluated before IFDEF's
//and Kylix 1 does not have CompilerVersion defined at all.
{$IFNDEF FPC}
  {$IFDEF LINUX}
    {$IFDEF CONDITIONALEXPRESSIONS}
      {$IF RTLVersion = 14.0}
        {$DEFINE KYLIX1}
        {$DEFINE KYLIX1ORABOVE}
      {$IFEND}
      {$IF RTLVersion = 14.2}
        {$DEFINE KYLIX2}
        {$DEFINE USEZLIBUNIT}
        {$DEFINE KYLIX1ORABOVE}
        {$DEFINE KYLIX2ORABOVE}
      {$IFEND}
      {$IF RTLVersion = 14.5}
        {$DEFINE KYLIX3}
        {$DEFINE USEZLIBUNIT}
        {$DEFINE KYLIX1ORABOVE}
        {$DEFINE KYLIX2ORABOVE}
        {$DEFINE KYLIX3ORABOVE}
      {$IFEND}
    {$ENDIF}
    {$DEFINE VCL4ORABOVE}
    {$DEFINE VCL5ORABOVE}
    {$DEFINE VCL6ORABOVE}
    {$DEFINE VCL60}
    {$DEFINE OPTIONALPARAMS}
    {$DEFINE SAMETEXT}
    {$DEFINE UNIX}
    {$DEFINE KYLIXCOMPAT}
    {$DEFINE WIDGETKYLIX}
    {$DEFINE WIDGETVCLLIKEORKYLIX}
    {$DEFINE INTTHREADPRIORITY}
    {$DEFINE KYLIX}
    {$DEFINE CPUI386}
    {$UNDEF USEBASEUNIX}
    {.$DEFINE DEPRECATED}
  {$ENDIF}
{$ENDIF}

{$IFDEF KYLIXCOMPAT}
  {$linklib c}
{$ENDIF}

{$IFDEF WIN32}
  {$DEFINE WIN32_OR_WIN64}
{$ENDIF}
{$IFDEF WIN64}
  {$DEFINE WIN32_OR_WIN64}
{$ENDIF}

{$IFDEF WIN32_OR_WIN64}
  {$DEFINE USEOPENSSL}
  {$DEFINE USEZLIBUNIT}
  {$DEFINE WIN32_OR_WIN64_OR_WINCE}
{$ENDIF}

{
BSD 4.4 introduced a minor API change.  sa_family was changed from a 16bit
word to an 8 bit byte and an 8 bit byte field named sa_len was added.
}
{$IFDEF FREEBSD}
   {$DEFINE SOCK_HAS_SINLEN}
{$ENDIF}
{$IFDEF DARWIN}
   {$DEFINE SOCK_HAS_SINLEN}
{$ENDIF}

{$IFDEF FPC_REQUIRES_PROPER_ALIGNMENT}
  {$DEFINE REQUIRES_PROPER_ALIGNMENT}
{$ENDIF}

// Do NOT remove these IFDEF's.  They are here because InterlockedExchange
// only handles 32bit values.  Some Operating Systems may have 64bit  
// THandles.  This is not always tied to the platform architecture.

{$IFDEF AMIGA}
  {$DEFINE THANDLECPUBITS}
{$ENDIF}
{$IFDEF ATARI}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF BEOS}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF BSD}
  //I think BSD might handle FreeBSD, NetBSD, OpenBSD, and Darwin
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF EMBEDDED}
  {$DEFINE THANDLECPUBITS}
{$ENDIF}
{$IFDEF EMX}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF GBA}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF GO32}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF LINUX}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF MACOS}
   {$DEFINE THANDLECPUBITS}
{$ENDIF}
{$IFDEF MORPHOS}
  {$DEFINE THANDLECPUBITS}
{$ENDIF}
{$IFDEF NDS}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF NETWARE}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF NETWARELIBC}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF OS2}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF PALMOS}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF SOLARIS}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF WATCOM}
  {$DEFINE THANDLE32}
{$ENDIF}
{$IFDEF WIN32_OR_WIN64_OR_WINCE}
  {$DEFINE THANDLECPUBITS}
{$ENDIF}

// end platform specific stuff for THandle size

{$IFDEF THANDLECPUBITS}  
  {$IFDEF CPU64}
    {$DEFINE THANDLE64}
  {$ELSE}
    {$DEFINE THANDLE32}
  {$ENDIF}
{$ENDIF}
//

{$UNDEF SIZE64STREAM}
{$IFDEF FPC}
  {$DEFINE SIZE64STREAM}
{$ENDIF}
{$IFDEF VCL6ORABOVE}
  {$DEFINE SIZE64STREAM}
{$ENDIF}

{$IFNDEF IDFREEONFINAL}
  {$IFNDEF REGISTER_EXPECTED_MEMORY_LEAK}
    {$IFDEF USEFASTMM4}
      {$DEFINE REGISTER_EXPECTED_MEMORY_LEAK}
    {$ENDIF}
  {$ENDIF}
{$ENDIF}

{$IFDEF REGISTER_EXPECTED_MEMORY_LEAK}
  {$IFDEF DOTNET}
    {$UNDEF REGISTER_EXPECTED_MEMORY_LEAK}
  {$ENDIF}
{$ENDIF}

{$IFDEF DEBUG}
  {$UNDEF USEINLINE}
{$ENDIF}