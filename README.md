# LudicrousN64-Xtreme

LudicrousN64 Xtreme is [mupen64plus-libretro-nx](https://github.com/libretro/mupen64plus-libretro-nx) + [mupen64plus](https://github.com/mupen64plus/mupen64plus-core) + [GLideN64](https://github.com/gonetz/GLideN64) + [libretro](http://www.libretro.com/) + KMFD Xtreme Additions!

#### LudicrousN64 Xtreme?

LudicrousN64 Xtreme is a custom, personalized N64 Build by KMFDManic, which is absolutely unstable and not meant for normal, everyday, end users.  It can have a myriad of glitches (black screen, flickering, freezes, crashes...simply due to the fact that it deviates from the normalcy of Stability's sake!  

#### Should I use this?

Probably not!  It is highly recommended you stick to the tried and true Mupen (Next), Parallel roll-outs, since they are far more Stable and Reliable! 

#### Why LudicrousN64 Xtreme?

To differentiate from the far more stable and reliable mainline Repo/s, as changes I embrace are generally meant to help lower spec 2.0 GLES Platforms, oft ignoring accuracy relative implementations.  We don't need to inundate the main Repo/s with unnecessary issues due to non-stable forks!

#### What is Turbo Boost Mode Activate!?

This is where Stability truly goes out the window!  It is, more or less, meant for mod masochists who want to push the limits of N64 Emulation to ridiculous, ludicrous proportions, kind of like "Goin' Plaid" in Spaceballs!  Depending on X Factor between 0-6. you can decrease stability of any given game, at cost of potential glitches, black screens, etc...gaining performance and speed!

#### Why can't I use Turbo Boost Mode Activate with Frame Buffering!?

Think of 3D Shutter Glasses.  And, every time you blink your eyes, it is exactly when the shutters are closed!  This is the layman's explanation for why this generally does not work!  But, if you offset things in such a way...wherein you are blinking your eyes whilst the shutters are opened!  Then, Turbo Boost Mode Activate will function with Frame Buffering toggled on!  To pull this off...And, each game performs differently, case by case scenario!  Once in game, IE: Jet Force Gemini OR Dr. Mario, turn Turbo Boost to X2; Frame Buffering ON, EXIT RetroArch completely!  Then, once you come back into RetroArch, reload the game with those exploited, variant Core Options in effect, they will both run fine!  

#### What is Xtreme OverClock!?

Calculations of Operations are sped up, in such a way, that you have "pseudo" OverClock, better performance/speed...perimeters between X1-XX; 0 being hard coded values.

#### Synched and Desynched? Xtreme and Ludicrous?

Synched would be having RetroArch Video and Audio BOTH Synchronized, like Assassin's Creed...with very nice, Xtreme performance and speed (X Factor variable!)  Taking things even further, Desynched are BOTH Unsynchronized, which WILL be unstable, but drastically, increase performance and speed to Ludicrous Proportions, depending on which X Factor is currently selected in Core Options!

#### How is this different from [mupen64plus-libretro](https://github.com/libretro/mupen64plus-libretro)?

mupen64plus-libretro tries to emulate the complete mupen64plus experience (think multiple graphic and RSP plugins). They also make modifications to the code as they see fit.

Because mupen64plus is built to be modular it is difficult to "convert" that project to a libretro core, since you end up with functions with the same name (for instance multiple functions named "PluginStartup").

Many modifications had to be made to the mupen64plus-libretro code to get it to work inside libretro. As a result, it differs quite greatly from vanilla mupen64plus (there is no up to date GLideN64 implmentation for example).

By choosing one RSP implentation (rsp-hle) and one graphics plugin (GLideN64), we will be able to keep the code in line with upstream, and maintaining the code will be much simpler.

#### How is it organized?

The modules (core, rsp-hle, GLideN64, and libretro-common) are brought in as git subtrees, allowing us to easily update the codebase. When modifications have to be made, they are put in the "custom" directory, overriding their vanilla counterparts.

We will try to stay as close to the upstream code as possible, if there are improvements to be made, they should be submitted upstream.

Most of the modifications have involved removing dependencies on SDL, and modifying the plugin architecture to get it running inside libretro.

#### What is not supported:

Cheats

#### Acknowledgments

A VERY special thanks to the mupen64plus team, ALL of the libretro team, m4xw, gonetz, loganmc10, Themaister, fzurita, ata4, Gillou68310, and ANYONE else who has ever worked with N64 and/or GlideN64 coding! 

#### How is this different from [Parallel-N64](https://github.com/libretro/parallel-n64)?

Parallel-N64 implements multiple Graphics plugins. There are also code modifications that make it different than standalone mupen64plus.

Mupen64Plus uses GLideN64 (a graphics plugin that is not available in Parallel-N64). The emulator code itself is identical to standalone mupen64plus.

By choosing one graphics plugin (GLideN64), we will be able to keep the code in line with upstream, and maintaining the code will be much simpler.

**Minimum RetroArch version: v1.3.4**

For information on the options look at the [wiki section](https://github.com/libretro/mupen64plus-libretro/wiki#options).
