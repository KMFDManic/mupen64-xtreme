#ifdef OS_WINDOWS
# include <windows.h>
#else
# include "winlnxdefs.h"
#endif // OS_WINDOWS

#include "PluginAPI.h"

#include "RSP.h"
#include "GLideN64.h"
extern uint32_t TurboBoost;
extern "C" {

int skip;
int render;
EXPORT BOOL CALL InitiateGFX (GFX_INFO Gfx_Info)
{
	skip = 0;
	render = 1;
	return api().InitiateGFX(Gfx_Info);
}

EXPORT void CALL MoveScreen (int xpos, int ypos)
{
	api().MoveScreen(xpos, ypos);
}

EXPORT void CALL ProcessDList(void)
{
	if (skip < TurboBoost) {
		*REG.MI_INTR |= MI_INTR_DP;
		CheckInterrupts();
		++skip;
	} else {
		api().ProcessDList();
		skip = 0;
		render = 1;
	}
}

EXPORT void CALL ProcessRDPList(void)
{
	api().ProcessRDPList();
}

EXPORT void CALL RomClosed (void)
{
	api().RomClosed();
}

EXPORT void CALL ShowCFB (void)
{
	api().ShowCFB();
}

EXPORT void CALL UpdateScreen (void)
{
	if (render == 1) {
		api().UpdateScreen();
		render = 1;
	}
}

EXPORT void CALL ViStatusChanged (void)
{
	api().ViStatusChanged();
}

EXPORT void CALL ViWidthChanged (void)
{
	api().ViWidthChanged();
}

EXPORT void CALL ChangeWindow(void)
{
	api().ChangeWindow();
}

EXPORT void CALL FBWrite(unsigned int addr, unsigned int size)
{
	api().FBWrite(addr, size);
}

EXPORT void CALL FBRead(unsigned int addr)
{
	api().FBRead(addr);
}

EXPORT void CALL FBGetFrameBufferInfo(void *pinfo)
{
	api().FBGetFrameBufferInfo(pinfo);
}

#ifndef MUPENPLUSAPI
EXPORT void CALL FBWList(FrameBufferModifyEntry *plist, unsigned int size)
{
	api().FBWList(plist, size);
}
#endif
}
