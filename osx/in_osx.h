//------------------------------------------------------------------------------------------------------------------------------------------------------------
//
// "in_osx.h"
//
// Written by:	awe                         [mailto:awe@fruitz-of-dojo.de].
//		        ©2001-2006 Fruitz Of Dojo   [http://www.fruitz-of-dojo.de].
//
// Quake IIª is copyrighted by id software  [http://www.idsoftware.com].
//
//------------------------------------------------------------------------------------------------------------------------------------------------------------

#pragma mark Variables

extern UInt8		gInSpecialKey[];
extern UInt8		gInNumPadKey[];

//------------------------------------------------------------------------------------------------------------------------------------------------------------

#ifdef MAC_OS_X_VERSION_10_9
typedef int32_t CGMouseDelta;
#endif // MAC_OS_X_VERSION_10_9
