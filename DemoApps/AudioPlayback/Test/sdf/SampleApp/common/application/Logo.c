﻿/*
 * Copyright (c) Bridgetek Pte Ltd
 *
 * THIS SOFTWARE IS PROVIDED BY BRIDGETEK PTE LTD "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * BRIDGETEK PTE LTD BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
 * TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * BRIDGETEK DRIVERS MAY BE USED ONLY IN CONJUNCTION WITH PRODUCTS BASED ON BRIDGETEK PARTS.
 *
 * BRIDGETEK DRIVERS MAY BE DISTRIBUTED IN ANY FORM AS LONG AS LICENSE INFORMATION IS NOT MODIFIED.
 *
 * IF A CUSTOM VENDOR ID AND/OR PRODUCT ID OR DESCRIPTION STRING ARE USED, IT IS THE
 * RESPONSIBILITY OF THE PRODUCT MANUFACTURER TO MAINTAIN ANY CHANGES AND SUBSEQUENT WHQL
 * RE-CERTIFICATION AS A RESULT OF MAKING THESE CHANGES.
 *
 * Abstract: Logo for both BRT and FTDI
 * Author : Bridgetek
 */

#include "Platform.h"
#include "logo.h"

/// Show BRT logo even if running on FT8x platform (1)
#define FORCE_BRT_LOGO                      0

/*************************************************************************************************
                        BRIDGETEK LOGO
*************************************************************************************************/
#if FORCE_BRT_LOGO 
#define LOGO_HEIGHT 80 
#define LOGO_WIDTH 264 
#define LOGO_STRIDE 528
#define LOGO_FMT   ARGB4

PROGMEM prog_uchar8_t logo[SIZE_LOGO] = {//bridgetek 6703 bytes logo
    120,156,237,93,205,78,35,201,178,230,216,189,31,117,122,214,231,200,105,214,247,72,152,39,192,60,1,102,125,71,2,150,173,123,36,232,221,100,222,35,1,203,68,71,194,60,1,244,19,0,251,43,97,246,35,1,79,128,121,2,170,214,211,55,50,242,39,34,178,12,216,204,12,61,67,59,75,24,168,159,172,204,140,47,190,248,201,172,242,210,210,124,69,183,244,150,62,213,106,206,203,22,229,93,22,68,195,35,108,103,221,5,34,190,251,162,149,222,208,21,108,30,17,167,106,129,136,239,188,68,110,8,91,165,207,165,213,208,90,111,168,173,133,37,249,126,138,222,85,143,42,226,1,127,159,37,233,3,115,236,171,123,228,142,5,30,190,155,162,219,250,64,48,196,113,144,62,160,225,34,239,93,224,225,187,42,122,23,253,7,207,4,199,221,191,249,61,93,173,198,25,13,247,90,127,235,22,46,202,31,91,32,166,88,35,41,235,14,32,194,75,126,20,185,65,235,49,227,140,5,30,222,121,233,180,33,166,120,212,87,12,17,109,189,15,91,178,20,87,194,130,84,186,243,237,218,186,40,127,116,233,182,48,194,244,178,190,97,136,104,233,22,254,238,100,52,84,209,138,236,133,35,139,242,62,75,119,131,105,255,149,94,17,199,18,55,84,57,226,216,208,127,251,86,45,93,148,63,190,124,84,106,66,242,46,172,134,66,191,161,98,120,217,90,112,195,123,47,221,181,32,113,159,109,80,254,175,221,176,95,75,110,128,79,181,64,195,119,80,192,83,216,80,247,153,1,82,76,209,105,120,145,11,52,188,235,242,49,75,23,163,205,32,247,99,213,198,61,26,208,64,62,195,227,2,13,239,187,116,91,106,168,239,213,26,201,88,15,61,55,132,236,147,230,217,167,16,85,108,176,51,85,183,61,235,125,76,207,244,77,223,245,205,170,89,183,3,179,110,6,110,213,12,96,223,58,108,126,239,178,89,254,52,115,109,79,220,227,71,168,49,212,234,235,93,53,171,51,92,209,143,215,248,79,127,205,111,108,195,159,161,152,1,142,106,232,145,31,221,57,250,4,22,34,100,150,56,34,116,195,82,164,121,206,45,113,214,120,246,252,131,217,54,149,169,97,171,92,29,255,242,191,249,86,187,59,243,5,122,241,227,236,173,47,238,49,76,53,153,112,143,139,23,175,248,209,214,134,111,149,235,189,246,238,127,158,146,199,22,63,93,101,102,236,83,47,100,159,130,159,56,209,107,242,40,128,34,162,193,251,150,136,154,33,69,152,224,99,222,204,147,143,114,67,144,55,201,42,200,191,142,251,42,91,103,25,86,128,137,15,179,214,42,139,25,90,170,197,127,94,191,120,5,224,193,197,246,96,75,30,94,143,198,63,79,241,99,105,189,222,165,113,152,17,15,104,25,200,26,8,68,196,8,147,199,152,91,138,115,195,205,124,249,106,179,25,229,196,144,203,254,151,140,49,154,189,239,226,30,67,86,155,255,28,191,120,69,47,178,2,93,243,62,240,192,245,174,122,217,110,134,162,87,80,170,83,230,35,0,13,231,58,207,118,123,134,224,17,38,114,195,227,124,243,221,102,211,86,209,86,132,223,100,53,106,198,14,169,15,175,202,131,135,123,48,60,188,204,15,203,225,108,27,177,105,31,94,119,231,215,23,243,33,108,159,62,252,220,49,237,79,237,215,114,35,47,78,88,64,248,89,158,245,74,129,8,63,163,29,98,10,68,67,198,66,211,111,160,107,102,199,195,182,96,131,170,64,48,252,101,249,158,237,249,70,32,222,99,147,249,14,245,140,246,34,99,52,92,105,223,216,127,128,54,143,205,181,185,179,240,3,191,175,205,193,239,80,103,64,56,141,246,204,120,88,90,82,61,244,3,188,85,56,206,243,20,23,209,78,36,91,193,98,10,165,209,199,76,71,103,183,23,219,209,103,152,98,53,28,73,209,123,18,222,159,56,153,167,255,249,30,195,92,247,236,252,144,124,174,208,134,201,91,219,139,168,39,164,23,103,191,67,157,220,27,155,193,127,0,249,178,149,110,81,223,143,131,119,32,185,1,55,54,107,165,1,61,42,177,70,5,246,101,118,126,96,190,127,28,253,137,57,48,135,224,61,142,147,70,39,92,216,25,52,123,234,61,124,244,184,238,214,49,222,92,245,159,47,94,209,65,44,196,209,115,223,192,127,48,123,73,15,162,70,95,254,246,58,29,199,151,255,124,6,15,42,197,20,187,108,159,214,187,145,27,52,139,48,195,207,150,64,131,204,84,62,206,190,202,214,238,56,222,66,175,147,49,26,52,109,123,105,101,15,106,55,126,155,60,0,242,3,89,218,202,76,220,91,251,15,219,174,226,152,252,61,240,192,250,83,63,111,47,252,140,118,246,18,119,203,60,99,183,163,152,188,85,200,69,102,185,104,178,20,201,171,152,135,31,118,138,88,2,226,202,124,108,88,180,191,54,183,111,227,215,217,229,116,231,136,200,183,183,23,59,78,70,91,191,15,30,42,142,115,251,100,124,161,54,10,75,192,228,41,214,69,54,230,48,209,207,16,220,48,103,188,25,253,73,155,198,158,101,139,204,122,30,141,132,139,187,55,227,7,25,247,190,125,124,177,39,116,228,119,193,131,21,140,99,171,163,39,249,33,75,60,174,138,84,217,106,160,223,64,243,151,165,165,64,110,80,143,60,6,197,28,214,204,252,112,180,157,37,158,36,32,241,80,29,85,44,95,117,247,54,114,193,252,67,230,45,204,77,189,117,124,177,195,16,89,147,21,253,77,117,6,155,91,103,214,123,178,79,74,169,179,204,248,184,74,54,236,199,152,162,42,184,129,91,138,155,156,177,230,252,48,79,188,73,253,78,158,91,214,4,51,32,175,34,246,224,154,240,96,6,246,196,156,152,17,252,120,255,243,4,98,196,14,212,54,198,30,79,0,57,163,212,95,240,32,71,112,198,97,60,251,196,238,136,22,180,129,163,46,128,1,2,222,78,204,234,81,219,117,40,198,141,89,16,161,75,224,111,126,6,219,21,44,201,248,232,179,63,10,156,226,91,2,119,114,7,198,111,133,246,193,125,214,161,197,151,120,93,170,123,2,119,62,128,246,137,236,2,244,98,228,46,211,184,132,220,170,157,216,195,216,211,85,81,103,31,90,114,1,117,78,136,67,237,5,156,57,108,90,184,196,56,57,203,211,139,163,115,128,53,251,79,191,225,232,228,248,129,71,152,194,51,40,45,5,174,126,168,68,252,73,168,152,59,222,100,209,21,241,67,223,49,159,14,199,133,105,137,59,97,125,243,127,13,204,153,139,179,32,46,100,179,238,194,56,71,31,37,176,164,63,194,242,147,230,3,140,38,101,204,195,89,123,102,89,180,168,136,47,224,232,53,179,195,53,218,147,33,176,153,204,169,14,184,220,236,166,185,99,60,87,102,10,199,166,255,41,99,2,90,132,189,117,73,67,128,33,115,198,189,54,67,214,142,47,209,19,192,26,29,213,91,35,82,183,63,9,76,48,116,135,179,49,206,178,35,97,151,106,243,57,202,183,21,17,177,175,115,132,169,178,165,192,159,237,169,217,167,170,129,135,57,242,15,118,155,36,238,138,72,59,249,15,14,229,136,178,102,249,7,208,181,58,230,87,194,118,200,228,145,236,36,98,61,228,163,92,66,149,200,87,131,118,213,52,30,54,233,207,136,249,44,120,141,205,35,11,58,121,41,44,92,26,199,67,236,67,150,143,229,120,216,33,57,165,156,39,175,3,91,187,153,207,190,36,198,52,52,223,16,115,48,38,178,27,216,180,59,134,1,134,103,71,168,188,252,153,249,91,12,171,248,151,207,177,1,211,221,57,190,151,89,17,68,0,229,27,120,132,89,172,111,80,180,250,161,42,124,135,121,243,81,59,100,213,76,208,9,178,23,123,66,7,107,26,11,60,122,72,210,112,21,103,146,152,233,70,140,224,153,67,142,20,56,154,179,24,166,237,238,210,24,58,25,201,212,142,203,155,197,155,102,221,77,211,240,170,104,105,109,214,243,21,61,224,15,118,127,142,35,199,175,233,76,195,67,209,175,152,163,5,94,251,34,238,15,154,17,241,82,57,126,175,207,54,243,142,165,17,8,248,234,49,159,61,105,209,152,219,174,143,42,91,138,115,134,133,105,153,233,116,164,82,194,115,136,140,242,26,255,33,97,98,12,227,231,51,72,145,57,8,189,78,204,50,102,62,160,241,21,242,193,235,70,5,30,194,217,132,135,158,161,60,88,205,228,204,207,70,123,192,248,97,196,36,200,239,21,101,151,176,232,214,89,75,177,119,249,44,118,182,227,200,59,140,231,95,136,220,67,69,188,131,123,2,30,150,169,141,52,235,150,163,52,26,17,22,161,23,188,84,123,123,225,4,170,128,133,247,154,50,234,42,149,208,80,77,65,3,250,13,170,100,4,185,205,140,7,63,223,45,101,201,178,104,92,206,254,232,103,129,164,145,147,71,121,79,227,72,71,60,108,134,61,54,201,144,240,16,253,4,226,112,49,163,198,173,61,141,234,88,178,141,144,113,226,255,154,248,1,236,203,53,59,230,207,155,0,166,188,247,54,145,24,118,227,112,23,239,63,200,59,216,132,90,47,49,244,31,204,142,99,87,162,206,95,0,238,70,222,134,20,154,65,184,44,121,108,25,244,238,33,176,74,198,100,35,6,237,202,53,211,62,250,220,104,250,13,74,102,160,56,50,230,183,23,201,178,115,185,86,124,182,25,228,117,107,118,172,244,194,15,229,120,192,207,200,238,193,121,92,150,145,31,82,77,81,119,201,99,237,21,136,243,247,242,190,246,173,224,128,154,143,147,185,107,200,97,21,234,249,44,25,131,225,161,147,229,158,238,17,61,194,104,15,233,186,152,245,130,186,70,128,33,198,62,206,235,121,136,142,70,193,11,116,103,236,58,95,203,69,200,204,176,153,250,132,255,60,7,216,208,176,158,221,20,250,48,101,37,0,203,62,77,227,6,157,230,41,104,203,171,98,200,247,156,35,63,105,119,50,58,107,209,214,96,231,194,231,5,120,157,205,232,137,227,193,159,143,126,168,25,136,186,208,255,244,254,164,136,32,114,175,205,114,225,243,71,15,5,172,85,108,85,244,215,88,62,202,76,242,232,5,59,188,202,112,194,89,101,144,238,81,244,170,74,243,39,44,247,146,112,151,125,185,104,45,171,232,69,54,242,81,140,115,194,103,204,234,122,141,23,220,194,88,181,64,3,216,11,31,91,101,77,241,125,45,230,143,99,212,89,69,123,128,217,39,113,244,70,96,161,42,50,81,20,125,206,227,63,112,28,200,209,201,156,97,39,148,77,16,120,96,168,137,178,95,53,228,137,72,255,129,124,86,110,47,184,231,150,217,213,243,134,227,126,58,247,31,38,197,168,70,60,88,201,76,217,127,64,108,113,230,32,4,161,173,180,92,122,132,186,207,134,36,90,53,243,81,230,146,251,44,169,167,136,135,59,151,252,235,128,230,236,17,152,232,107,216,132,129,62,198,109,220,186,20,99,172,15,10,95,160,25,97,54,125,133,102,116,49,175,63,153,251,229,234,98,29,37,183,36,181,68,47,176,58,183,227,149,27,229,209,167,241,165,248,130,163,174,137,7,210,179,128,135,142,168,219,255,112,60,72,127,37,106,59,218,24,206,54,137,31,6,150,159,95,49,230,224,237,10,159,196,15,113,94,39,75,171,228,135,113,186,87,176,252,46,70,233,204,58,165,214,11,60,248,159,163,212,179,28,161,69,150,28,31,9,139,12,250,127,47,100,187,75,235,34,243,243,252,12,15,57,178,40,48,2,251,231,89,79,203,252,99,151,189,39,83,172,71,137,253,227,185,185,81,232,119,94,47,19,241,32,230,68,79,226,184,115,105,8,123,81,50,82,196,195,114,190,115,29,35,28,102,47,216,21,85,137,7,71,24,138,82,119,125,81,191,255,123,224,215,61,65,196,56,76,247,240,61,62,170,185,126,162,191,152,251,110,171,114,13,112,94,13,144,172,237,23,64,66,27,234,252,49,230,77,171,236,45,113,123,65,136,13,249,58,137,250,29,121,143,56,227,157,164,204,214,69,118,181,152,209,230,182,33,89,8,137,137,121,214,71,85,57,10,15,219,29,216,123,191,125,230,60,17,251,118,70,209,113,228,7,186,46,224,161,7,209,251,5,254,248,207,16,155,109,59,210,51,63,182,207,225,97,16,107,145,122,43,248,193,37,11,37,248,193,222,17,187,227,95,217,94,20,235,14,124,15,111,113,155,32,123,115,228,75,255,33,182,237,200,75,54,207,250,50,60,228,235,176,134,219,184,113,46,146,120,168,167,108,164,115,147,50,182,136,239,116,8,146,221,85,114,93,164,200,76,43,66,5,101,164,8,17,243,204,119,111,179,145,10,237,34,239,127,32,218,236,55,238,215,29,18,214,113,60,158,92,59,69,243,230,141,25,212,101,38,241,168,187,184,191,87,240,195,196,50,126,112,149,104,83,233,79,38,20,113,255,65,218,250,58,102,143,104,110,41,121,9,20,197,176,117,132,206,159,87,172,143,242,246,130,24,196,202,94,136,79,215,176,23,184,23,51,190,66,159,26,107,75,34,30,26,79,98,130,231,64,118,164,204,60,84,204,94,100,68,204,190,30,38,201,138,233,8,73,171,99,43,199,145,226,255,202,107,155,204,161,149,122,240,228,234,235,184,6,139,198,139,227,65,214,17,237,133,237,144,252,80,94,19,35,253,201,196,185,158,111,56,30,248,248,38,60,172,178,156,51,232,58,203,72,114,253,12,190,0,231,7,178,237,66,75,226,241,107,145,133,228,214,72,122,49,210,127,160,168,40,33,157,176,253,96,11,43,143,246,130,180,156,229,223,213,90,225,89,60,210,19,190,90,190,93,44,28,155,121,118,216,113,219,30,122,67,249,234,15,209,151,231,189,163,217,156,3,57,30,246,105,60,108,70,45,74,231,147,189,88,45,198,50,106,59,88,225,160,67,169,77,19,233,63,8,134,104,250,147,140,105,200,195,117,92,31,171,204,106,130,255,108,105,47,168,127,5,63,56,17,111,202,89,140,56,15,150,242,15,133,255,112,196,241,40,153,107,40,239,145,121,32,88,128,123,181,193,142,245,245,164,193,12,101,84,241,152,217,98,190,249,77,105,241,152,165,140,179,208,21,235,53,161,253,32,242,74,234,213,211,246,98,147,141,148,223,88,124,193,162,61,38,69,183,44,89,201,114,60,60,36,73,6,77,119,9,15,119,130,29,200,159,28,48,29,174,24,10,26,26,234,184,215,186,205,236,136,151,108,51,190,144,30,142,244,130,248,190,2,15,108,246,234,172,88,189,94,96,14,252,132,227,66,194,107,93,178,26,107,69,188,89,53,254,163,191,230,176,23,41,67,156,71,134,245,252,232,161,224,213,138,214,157,155,131,44,203,160,251,207,249,15,21,207,68,83,44,239,122,114,252,108,244,14,153,255,144,238,207,249,129,228,90,250,15,252,154,196,15,171,153,167,211,21,123,208,162,77,124,146,114,24,255,90,135,79,63,99,78,222,242,142,108,65,35,255,192,249,193,247,126,12,181,109,198,26,125,77,169,230,33,249,168,114,70,4,174,73,126,85,226,193,135,70,254,33,101,156,146,246,87,226,217,172,21,61,225,30,4,123,46,71,162,226,53,254,36,73,140,245,28,99,59,206,230,85,154,243,129,222,29,8,173,136,249,135,169,247,72,54,169,138,218,33,231,47,210,232,132,154,114,62,42,213,29,229,78,158,30,229,255,132,71,131,252,192,180,221,50,60,136,8,163,158,229,185,168,152,167,163,190,79,207,63,80,173,95,166,215,35,174,73,154,151,198,173,111,39,108,252,252,231,78,121,77,145,117,242,79,235,113,171,225,253,136,105,118,162,240,51,213,188,243,23,209,143,54,194,219,115,109,251,144,101,24,172,98,109,51,63,56,244,39,221,44,120,216,36,158,182,211,227,77,98,137,28,95,36,223,33,242,54,249,147,69,62,216,114,255,161,166,213,71,86,242,3,247,18,102,193,67,158,221,13,188,105,167,241,3,103,144,25,158,101,164,181,25,177,61,125,54,87,27,144,63,101,85,94,119,37,115,68,154,141,88,83,220,106,148,158,229,99,99,78,107,158,231,245,182,153,246,132,30,178,248,130,75,43,102,32,184,255,80,101,28,249,223,79,227,129,158,109,9,191,51,63,216,158,208,177,42,233,46,216,145,232,141,133,149,86,238,65,240,131,176,213,204,127,144,119,161,120,83,122,196,153,31,160,127,219,102,199,110,251,79,179,141,27,161,238,115,182,46,21,102,170,202,252,195,53,217,50,28,191,220,123,96,195,80,23,212,233,182,237,78,194,43,241,131,77,109,95,110,100,234,234,105,235,83,197,147,119,1,19,210,106,220,51,123,50,53,222,156,195,159,28,50,95,61,180,44,51,163,219,100,109,79,89,107,90,69,116,16,121,62,29,121,206,159,76,35,23,70,132,199,23,114,60,164,189,32,15,176,204,79,242,171,146,116,111,211,172,144,11,217,51,142,135,218,230,217,16,75,249,234,30,235,87,148,80,190,75,90,55,150,142,150,246,226,50,107,72,225,11,198,217,114,194,31,139,55,93,242,146,130,30,245,253,108,71,182,111,225,183,88,255,160,90,121,61,204,77,246,34,188,37,184,23,86,99,101,26,71,4,158,136,239,182,158,107,62,75,172,17,242,94,141,95,53,122,224,215,255,8,15,72,88,235,144,143,178,28,75,135,79,222,99,40,240,86,23,235,97,228,177,3,159,245,181,67,118,199,48,86,98,254,130,229,196,19,130,62,36,156,4,185,31,17,63,244,242,88,167,62,150,150,36,72,199,255,197,231,47,130,173,72,26,113,43,179,69,246,44,35,85,176,42,180,227,142,86,75,224,49,158,159,164,126,198,177,116,95,242,255,97,187,160,251,232,150,222,207,79,100,245,195,26,168,108,9,228,155,65,200,106,76,155,223,186,159,61,255,16,125,92,222,202,248,67,235,213,88,76,198,71,236,48,106,87,186,242,105,123,17,125,179,163,42,114,68,99,61,12,187,179,95,99,157,116,38,63,223,45,243,15,100,223,80,134,119,102,7,152,76,172,108,53,217,19,89,74,51,76,28,185,23,192,25,29,156,109,38,175,213,31,225,119,217,201,154,156,61,74,179,7,62,244,118,92,35,124,98,243,204,13,142,148,95,209,219,1,236,237,25,194,72,216,178,143,24,71,129,176,2,204,102,55,133,182,249,159,56,194,202,71,155,94,186,123,33,198,236,246,26,79,253,179,12,85,180,26,211,60,203,199,121,242,147,110,147,107,39,91,113,192,117,150,230,172,46,197,252,69,240,35,19,126,158,243,31,120,159,185,189,248,49,107,46,254,78,49,127,241,174,154,90,228,201,199,12,161,116,70,45,120,159,225,97,137,214,59,81,173,132,114,126,21,199,195,208,36,31,88,174,156,187,141,120,216,180,172,133,140,39,203,251,176,245,81,92,175,176,167,203,44,146,74,43,211,171,188,222,254,56,207,67,236,134,103,44,148,86,55,82,230,170,140,53,154,153,135,240,123,190,231,179,216,232,91,62,74,181,169,139,158,178,25,111,62,127,129,231,60,159,143,170,217,217,196,15,157,152,69,146,216,227,163,154,254,34,123,113,200,89,44,75,54,98,211,209,232,210,58,181,29,214,7,174,241,5,66,68,38,110,144,81,35,207,78,107,234,122,230,65,100,155,57,207,72,125,34,70,165,189,225,119,31,237,203,165,225,94,12,206,99,160,165,136,254,2,174,113,73,111,152,12,25,75,142,9,230,89,170,149,167,86,68,204,241,60,111,94,7,36,70,172,50,210,58,134,94,92,115,239,55,231,171,211,72,61,151,127,224,90,84,243,85,97,225,41,142,242,206,166,98,171,28,194,70,158,94,159,114,91,71,133,54,138,117,181,196,15,29,246,12,78,205,87,66,179,213,48,194,55,74,72,165,39,48,242,245,241,137,69,215,22,43,244,100,6,157,107,215,136,252,1,203,231,82,35,63,44,209,138,36,106,225,170,26,21,204,127,156,234,200,177,70,138,39,238,27,177,70,211,139,152,135,31,226,250,73,203,185,128,121,193,241,237,49,13,52,228,120,115,118,126,160,186,249,243,23,189,32,21,146,144,151,194,209,129,215,26,182,242,110,194,51,119,40,137,20,69,164,90,211,154,75,66,212,58,187,162,159,51,239,220,162,48,59,3,190,99,225,15,251,168,200,86,226,42,31,121,230,89,72,176,117,103,98,189,69,97,193,16,33,226,249,231,204,33,9,179,203,52,2,140,183,42,115,232,191,207,130,229,16,142,53,243,101,181,183,26,41,182,12,126,68,25,107,164,152,147,214,217,205,131,7,201,98,137,111,43,97,163,199,48,58,69,100,108,15,13,63,227,185,120,115,40,112,83,172,26,133,154,31,152,231,232,183,81,120,106,75,72,143,175,244,111,67,171,111,5,151,236,216,182,189,21,253,168,237,186,184,203,50,174,167,102,186,206,162,69,176,96,222,27,44,90,237,159,35,124,136,209,43,141,204,221,167,142,56,227,86,180,146,158,35,169,112,5,174,212,32,54,198,152,203,75,207,51,94,135,61,49,243,5,40,2,123,177,203,208,80,176,61,203,89,166,136,163,244,44,57,183,204,245,62,16,219,137,239,68,196,79,183,25,255,11,111,162,28,184,117,124,3,101,103,218,83,221,128,235,1,230,253,67,150,126,240,244,219,12,240,204,184,57,255,89,188,15,4,238,176,99,78,156,95,63,243,5,188,131,117,63,138,225,221,147,14,219,98,253,103,209,2,227,219,189,3,76,177,157,222,77,153,231,47,146,71,60,40,174,104,227,123,48,247,220,200,156,1,218,224,199,250,251,249,185,140,229,167,222,14,5,119,25,90,31,121,135,43,70,230,208,238,252,252,161,56,163,239,91,111,191,64,235,47,225,156,208,135,61,104,93,115,5,242,32,142,172,223,134,118,61,63,255,179,26,71,125,104,163,28,208,159,220,69,105,142,196,147,22,91,34,31,193,99,141,102,134,234,145,173,160,251,14,191,15,197,222,10,155,84,155,245,151,175,249,51,23,228,136,99,134,134,14,174,181,142,235,164,188,103,169,42,38,245,39,50,84,225,249,172,247,252,45,140,160,231,189,252,230,161,30,108,81,95,253,186,230,108,7,166,240,195,95,175,232,86,183,68,3,72,183,155,56,98,69,223,138,153,204,233,158,229,187,231,7,96,119,242,3,252,22,86,208,180,193,214,167,108,64,96,137,191,56,63,240,162,58,250,138,36,223,221,237,38,68,112,171,209,68,68,90,49,115,255,174,249,161,147,178,36,49,35,116,129,43,13,78,152,111,31,50,161,47,190,181,236,175,82,116,79,124,59,26,203,63,139,39,121,195,54,125,94,227,125,227,225,65,196,252,20,167,197,217,181,24,233,189,131,55,160,135,18,214,221,39,223,80,201,39,253,253,154,24,137,136,105,115,159,51,219,11,240,90,124,105,241,119,152,129,31,171,148,18,49,47,236,225,126,174,210,93,85,124,47,48,212,163,216,62,213,130,127,249,247,53,168,110,11,63,101,173,43,221,214,210,220,5,34,131,34,214,231,145,114,252,171,241,190,72,236,3,52,146,158,77,193,61,234,35,239,89,11,116,81,23,237,134,43,160,47,109,113,21,246,69,244,190,147,222,54,159,246,40,245,81,124,111,149,110,119,53,191,87,168,29,36,150,107,238,182,60,175,203,154,227,29,119,153,188,183,138,163,90,223,42,190,226,161,156,215,152,204,195,15,31,87,98,45,251,185,134,78,140,110,207,233,219,226,161,61,19,54,142,129,133,174,104,213,141,74,79,25,231,182,126,212,156,187,148,207,190,110,104,191,143,190,235,105,109,222,216,56,21,124,19,140,204,158,21,121,35,51,229,221,76,153,59,41,215,119,30,247,196,111,36,3,73,28,99,6,39,123,245,122,5,254,91,129,173,162,111,45,211,62,119,184,226,91,207,234,14,242,186,97,111,15,221,135,255,164,142,157,203,113,94,10,223,188,93,209,121,202,143,72,31,182,170,209,118,202,71,136,39,253,131,54,245,122,5,71,148,126,196,205,28,252,208,7,143,117,77,29,131,44,219,249,222,183,48,34,27,92,158,208,26,38,55,248,59,28,207,210,135,86,194,136,233,83,117,149,247,8,60,96,54,254,216,239,75,24,251,216,210,87,48,66,30,189,5,222,95,46,230,67,122,86,208,17,22,226,95,24,93,60,76,139,45,240,109,158,192,166,12,215,87,254,187,200,128,17,146,244,253,236,192,30,244,37,247,85,15,96,92,214,244,10,103,97,125,172,252,147,115,43,132,7,212,160,83,196,55,141,200,62,71,7,242,122,165,135,56,14,73,250,29,117,175,207,176,238,56,78,248,124,222,22,212,125,211,108,125,224,8,197,223,93,239,229,188,155,99,13,49,223,173,30,249,183,238,73,230,122,190,96,47,180,127,163,126,55,142,147,110,67,221,251,184,146,147,56,163,196,195,126,64,5,235,253,61,92,167,152,246,131,236,149,196,195,173,199,94,30,105,143,186,253,143,158,193,95,99,49,62,128,7,121,45,178,154,201,78,76,154,111,18,75,5,223,234,200,52,5,188,52,177,62,13,144,225,87,48,123,14,207,252,160,3,63,8,60,192,127,99,206,15,40,199,221,240,201,122,44,240,128,250,163,195,104,231,171,252,204,101,11,134,32,106,34,88,212,145,190,0,45,97,28,194,106,104,241,182,171,126,68,192,110,153,161,82,105,85,221,198,180,90,94,42,200,133,251,94,87,19,242,224,190,94,255,215,124,164,155,207,218,229,49,75,96,61,125,163,78,89,239,39,208,63,208,164,228,31,64,251,64,31,216,241,43,117,47,70,195,235,212,49,142,245,171,99,99,136,60,55,205,182,249,140,235,119,124,166,114,253,249,183,18,34,63,115,60,156,67,191,183,152,85,19,114,199,51,86,144,215,246,5,30,78,97,243,223,57,66,120,208,168,215,94,131,242,234,82,184,230,182,129,7,133,35,144,172,147,66,105,246,224,30,244,198,168,33,183,95,207,244,100,192,178,11,41,67,213,231,209,39,162,226,21,25,24,108,161,175,231,52,73,178,155,190,53,225,138,124,63,201,15,106,130,120,184,210,217,103,67,126,88,67,84,38,150,41,237,197,88,157,251,113,77,246,66,181,61,255,160,174,101,150,249,163,11,126,171,45,155,81,192,40,238,94,147,141,243,210,23,99,232,237,5,156,113,207,199,22,218,124,170,177,47,121,79,144,108,137,135,251,46,183,23,222,162,42,189,33,52,98,162,118,193,98,60,178,171,188,46,222,188,196,238,222,131,140,153,199,224,53,108,231,246,79,242,123,98,170,210,143,152,173,68,70,28,178,118,122,73,141,60,99,176,179,164,189,136,252,160,25,63,40,111,47,118,201,30,0,11,78,36,63,128,6,93,209,202,111,100,215,125,124,247,209,219,225,97,91,122,218,192,205,167,60,178,210,13,126,64,15,15,237,133,226,246,226,20,181,159,227,1,215,172,20,246,226,190,224,135,132,135,152,23,65,6,221,3,211,126,43,124,204,115,26,213,39,122,209,41,214,198,221,51,95,247,217,121,141,89,138,215,128,174,134,207,236,65,35,147,239,227,216,145,55,80,224,65,237,119,91,193,139,96,189,239,96,20,66,190,153,228,135,43,220,35,81,119,160,91,111,138,135,13,249,36,2,140,253,185,56,142,252,0,253,56,200,168,246,72,40,253,135,17,224,193,123,66,47,249,15,18,15,97,156,165,255,224,175,106,193,152,177,53,180,234,74,182,105,74,47,20,218,47,146,184,176,46,104,187,120,172,49,153,207,106,40,255,93,175,167,128,246,251,148,9,136,120,128,122,165,255,192,236,197,61,96,250,92,140,209,6,218,217,27,234,139,46,249,97,12,61,247,216,37,175,245,2,234,28,65,228,92,188,35,231,143,43,168,163,210,159,244,62,204,49,151,144,151,7,249,74,79,248,147,167,161,47,121,79,11,174,186,65,175,130,206,242,50,27,121,15,41,254,15,81,36,216,134,177,247,187,195,30,213,10,247,87,34,167,168,206,95,194,195,210,82,92,61,53,5,13,177,205,19,198,30,232,89,206,238,179,131,220,46,96,59,102,156,211,134,255,182,186,30,133,25,183,80,227,41,243,39,189,253,188,208,91,138,101,82,0,49,30,35,196,40,126,254,133,227,101,31,81,117,46,190,223,3,112,168,142,95,19,95,188,174,128,118,158,9,157,221,71,143,242,66,228,68,192,191,103,113,81,31,35,66,104,169,202,227,3,54,127,23,251,194,120,29,206,241,53,237,50,143,107,136,209,236,85,26,3,144,225,150,199,154,98,252,141,111,149,188,2,54,226,57,186,3,242,38,158,233,73,200,80,113,75,241,131,250,73,255,75,253,128,45,140,209,39,155,235,122,199,249,234,69,241,5,51,84,28,13,255,234,252,170,127,213,255,238,33,34,216,91,8,67,180,177,192,195,119,85,244,79,250,171,254,170,126,237,253,170,255,55,238,89,17,43,111,223,241,124,247,162,200,162,127,208,255,13,204,240,107,231,107,239,171,246,136,248,31,29,56,130,158,215,120,197,156,192,162,252,85,139,254,169,247,85,125,213,184,41,143,136,255,83,255,136,71,52,250,184,143,250,93,207,119,47,138,44,157,127,3,59,0,14,84,64,197,47,234,159,116,12,98,152,21,92,117,183,192,195,119,83,244,223,245,127,122,145,29,122,191,232,255,250,214,237,89,148,111,93,122,63,232,255,160,189,248,69,255,243,229,179,23,229,253,23,237,17,177,64,195,187,45,255,15,219,213,59,101,
};

/**
 * @brief Show logo on screen
 * 
 * @param phost 
 */
void Logo_Showup(EVE_HalContext *phost)
{
#if defined (BT81X_ENABLE)
	EVE_CoCmd_logo(phost);
#else
    uint32_t x, y, w, h;
    uint32_t step;
    #define TOTAL_STEP 8
    const float SCALE_INIT = 1.7;
    float scale = 1;

#if defined(MSVC_PLATFORM) || defined(MSVC_FT800EMU)
    EVE_Cmd_wr32(phost,CMD_INFLATE);
    EVE_Cmd_wr32(phost,0);
    EVE_Cmd_wrMem(phost, logo, sizeof(logo));
#else
    EVE_CoCmd_inflate(phost, 0);
    EVE_Cmd_wrProgMem(phost, logo, sizeof(logo));
#endif
    //Starting at SCALE_INIT times of orginial logo
    //Display animation: scale logo from SCALE_INIT to X1 size
    scale = SCALE_INIT;
    for (step = 1; step <= TOTAL_STEP; step++) {
        scale -= (SCALE_INIT-1)/TOTAL_STEP;
        x = (uint32_t)(DispWidth-scale*LOGO_WIDTH)/2;
        y = (uint32_t)(DispHeight-scale*LOGO_HEIGHT)/2;
        w = (uint32_t)(scale*LOGO_WIDTH);
        h = (uint32_t)(scale*LOGO_HEIGHT);

        EVE_CoCmd_dlStart(phost);
        EVE_Cmd_wr32(phost, CLEAR_TAG(1));
        EVE_Cmd_wr32(phost, CLEAR_COLOR_RGB(255,255,255));
        EVE_Cmd_wr32(phost, CLEAR(1, 1, 1));
        
        //Display Logo
        EVE_Cmd_wr32(phost, COLOR_A(255));
        EVE_Cmd_wr32(phost, COLOR_RGB(255,255,255));
        EVE_Cmd_wr32(phost, BITMAP_HANDLE(LOGO_ICON_HANDLE));
        EVE_CoCmd_loadIdentity(phost);
        EVE_CoCmd_scale(phost, scale*65536L,scale*65536L);
        EVE_CoCmd_setMatrix(phost );
        EVE_Cmd_wr32(phost,BITMAP_SOURCE(0));
        EVE_Cmd_wr32(phost,BITMAP_LAYOUT(LOGO_FMT, LOGO_STRIDE,LOGO_HEIGHT));
        EVE_Cmd_wr32(phost,BITMAP_SIZE(NEAREST, BORDER, BORDER, w, h));    
        //#endif
        EVE_Cmd_wr32(phost,BEGIN(BITMAPS));
        EVE_Cmd_wr32(phost, BITMAP_HANDLE(LOGO_ICON_HANDLE));
        
        EVE_Cmd_wr32(phost,VERTEX2F(x<<4 , y<<4));

        //DONE
        EVE_Cmd_wr32(phost,TAG_MASK(0));
        EVE_Cmd_wr32(phost,DISPLAY());
        EVE_Cmd_waitFlush(phost);
        /*Swap the frame directly*/
        EVE_Hal_wr8(phost,REG_DLSWAP,DLSWAP_FRAME);
        EVE_Cmd_waitFlush(phost);
        EVE_sleep(150);
    }
#endif
    /* Show dummy clear screen to clean up logo after animation */
    EVE_CoCmd_dlStart(phost);
    EVE_Util_clearScreenphost);
	EVE_Cmd_waitFlush(phost);
    EVE_Cmd_waitFlush(phost);
    EVE_sleep(150);
}
#else
/**
 * @brief Show logo on screen
 *
 * @param phost
 */
void Logo_Showup(EVE_HalContext *phost) {
	EVE_CoCmd_dlStart(phost);
	EVE_Cmd_wr32(phost, CLEAR_TAG(1));
	EVE_Cmd_wr32(phost, CLEAR_COLOR_RGB(255, 255, 255));
	EVE_Cmd_wr32(phost, CLEAR(1, 1, 1)); 
	
	EVE_CoCmd_logo(phost);

	EVE_Cmd_wr32(phost, DISPLAY());
	EVE_Cmd_waitFlush(phost);
	EVE_sleep(150);
}
#endif