#define PLUG_MFR "AndrewMinnich"
#define PLUG_NAME "CynthiaMicro"

#define PLUG_CLASS_NAME CynthiaMicro

#define BUNDLE_MFR "AndrewMinnich"
#define BUNDLE_NAME "CynthiaMicro"

#define PLUG_ENTRY CynthiaMicro_Entry
#define PLUG_VIEW_ENTRY CynthiaMicro_ViewEntry

#define PLUG_ENTRY_STR "CynthiaMicro_Entry"
#define PLUG_VIEW_ENTRY_STR "CynthiaMicro_ViewEntry"

#define VIEW_CLASS CynthiaMicro_View
#define VIEW_CLASS_STR "CynthiaMicro_View"

// Format        0xMAJR.MN.BG - in HEX! so version 10.1.5 would be 0x000A0105
#define PLUG_VER 0x00010000
#define VST3_VER_STR "1.0.0"

// http://service.steinberg.de/databases/plugin.nsf/plugIn?openForm
// 4 chars, single quotes. At least one capital letter
#define PLUG_UNIQUE_ID 'TesC'
// make sure this is not the same as BUNDLE_MFR
#define PLUG_MFR_ID 'Tesa'

// ProTools stuff

#if (defined(AAX_API) || defined(RTAS_API)) && !defined(_PIDS_)
  #define _PIDS_
  const int PLUG_TYPE_IDS[2] = {'EFN1', 'EFN2'};
  const int PLUG_TYPE_IDS_AS[2] = {'EFA1', 'EFA2'}; // AudioSuite
#endif

#define PLUG_MFR_PT "AndrewMinnich\nAndrewMinnich\nAcme"
#define PLUG_NAME_PT "CynthiaMicro\nIPEF"
#define PLUG_TYPE_PT "Effect"
#define PLUG_DOES_AUDIOSUITE 1

/* PLUG_TYPE_PT can be "None", "EQ", "Dynamics", "PitchShift", "Reverb", "Delay", "Modulation", 
"Harmonic" "NoiseReduction" "Dither" "SoundField" "Effect" 
instrument determined by PLUG _IS _INST
*/

#define PLUG_CHANNEL_IO "0-1 0-2"

#define PLUG_LATENCY 0
#define PLUG_IS_INST 1

// if this is 0 RTAS can't get tempo info
#define PLUG_DOES_MIDI 1

#define PLUG_DOES_STATE_CHUNKS 0

// Unique IDs for each image resource.
#define BG_ID 100
#define KNOB_ID 101
#define SWITCH_ID 102
#define WAVEFORM_SWITCH_ID 103

// Image resource locations for this plug.
#define BG_FN "resources/img/bg.png"
#define KNOB_FN "resources/img/knob.png"
#define SWITCH_FN "resources/img/switch.png"
#define WAVEFORM_SWITCH_FN "resources/img/waveforms.png"

// GUI default dimensions
#define GUI_WIDTH 833
#define GUI_HEIGHT 384

// on MSVC, you must define SA_API in the resource editor preprocessor macros as well as the c++ ones
#if defined(SA_API)
#include "app_wrapper/app_resource.h"
#endif

// vst3 stuff
#define MFR_URL "www.tesselode.github.io"
#define MFR_EMAIL "aminnich3@gmail.com"
#define EFFECT_TYPE_VST3 "Fx"

/* "Fx|Analyzer"", "Fx|Delay", "Fx|Distortion", "Fx|Dynamics", "Fx|EQ", "Fx|Filter",
"Fx", "Fx|Instrument", "Fx|InstrumentExternal", "Fx|Spatial", "Fx|Generator",
"Fx|Mastering", "Fx|Modulation", "Fx|PitchShift", "Fx|Restoration", "Fx|Reverb",
"Fx|Surround", "Fx|Tools", "Instrument", "Instrument|Drum", "Instrument|Sampler",
"Instrument|Synth", "Instrument|Synth|Sampler", "Instrument|External", "Spatial",
"Spatial|Fx", "OnlyRT", "OnlyOfflineProcess", "Mono", "Stereo",
"Surround"
*/
