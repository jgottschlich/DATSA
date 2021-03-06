/*

MIT License

Copyright 2018, Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in 
the Software without restriction, including without limitation the rights to 
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies 
of the Software, and to permit persons to whom the Software is furnished to do 
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all 
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
SOFTWARE.

*/

//----------------------------------------------------------------------------
#include "../../src/data_generator.h"
#include "../../src/function_variable.h"
#include "../../src/event_data.h"
#include <iomanip>

using namespace anomaly;

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
static double dataset_normal_function(event_data const &event)
{
  int t = event.timestamp() % 1000;
  double data = 0.0;

  switch(t)
  {
    case 0: data = -0.14; break;
    case 1: data = -0.10; break;
    case 2: data = -0.14; break;
    case 3: data = -0.14; break;
    case 4: data = -0.10; break;
    case 5: data = -0.14; break;
    case 6: data = -0.18; break;
    case 7: data = -0.10; break;
    case 8: data = -0.14; break;
    case 9: data = -0.14; break;
    case 10: data = -0.14; break;
    case 11: data = -0.10; break;
    case 12: data = -0.10; break;
    case 13: data = -0.10; break;
    case 14: data = -0.10; break;
    case 15: data = -0.14; break;
    case 16: data = -0.10; break;
    case 17: data = -0.10; break;
    case 18: data = -0.06; break;
    case 19: data = -0.10; break;
    case 20: data = -0.06; break;
    case 21: data = -0.18; break;
    case 22: data = -0.14; break;
    case 23: data = -0.10; break;
    case 24: data = -0.10; break;
    case 25: data = -0.14; break;
    case 26: data = -0.18; break;
    case 27: data = -0.10; break;
    case 28: data = -0.10; break;
    case 29: data = -0.14; break;
    case 30: data = -0.10; break;
    case 31: data = -0.10; break;
    case 32: data = -0.06; break;
    case 33: data = -0.10; break;
    case 34: data = -0.14; break;
    case 35: data = -0.10; break;
    case 36: data = -0.10; break;
    case 37: data = -0.10; break;
    case 38: data = -0.18; break;
    case 39: data = -0.10; break;
    case 40: data = -0.14; break;
    case 41: data = -0.14; break;
    case 42: data = -0.10; break;
    case 43: data = -0.10; break;
    case 44: data = -0.14; break;
    case 45: data = -0.14; break;
    case 46: data = -0.10; break;
    case 47: data = -0.10; break;
    case 48: data = -0.10; break;
    case 49: data = -0.06; break;
    case 50: data = -0.14; break;
    case 51: data = -0.10; break;
    case 52: data = -0.10; break;
    case 53: data = -0.06; break;
    case 54: data = -0.10; break;
    case 55: data = -0.14; break;
    case 56: data = -0.14; break;
    case 57: data = -0.14; break;
    case 58: data = -0.06; break;
    case 59: data = -0.10; break;
    case 60: data = -0.10; break;
    case 61: data = -0.10; break;
    case 62: data = -0.10; break;
    case 63: data = -0.10; break;
    case 64: data = -0.10; break;
    case 65: data = -0.10; break;
    case 66: data = -0.10; break;
    case 67: data = -0.10; break;
    case 68: data = -0.10; break;
    case 69: data = -0.14; break;
    case 70: data = -0.14; break;
    case 71: data = -0.10; break;
    case 72: data = -0.10; break;
    case 73: data = -0.10; break;
    case 74: data = -0.10; break;
    case 75: data = -0.10; break;
    case 76: data = -0.14; break;
    case 77: data = -0.14; break;
    case 78: data = -0.10; break;
    case 79: data = -0.14; break;
    case 80: data = -0.10; break;
    case 81: data = -0.14; break;
    case 82: data = -0.10; break;
    case 83: data = -0.14; break;
    case 84: data = -0.14; break;
    case 85: data = -0.10; break;
    case 86: data = -0.06; break;
    case 87: data = -0.10; break;
    case 88: data = -0.14; break;
    case 89: data = -0.10; break;
    case 90: data = -0.10; break;
    case 91: data = -0.06; break;
    case 92: data = 0.18; break;
    case 93: data = 0.26; break;
    case 94: data = 0.38; break;
    case 95: data = 0.46; break;
    case 96: data = 0.54; break;
    case 97: data = 0.58; break;
    case 98: data = 0.70; break;
    case 99: data = 0.78; break;
    case 100: data = 0.86; break;
    case 101: data = 0.86; break;
    case 102: data = 1.02; break;
    case 103: data = 1.06; break;
    case 104: data = 1.22; break;
    case 105: data = 1.22; break;
    case 106: data = 1.30; break;
    case 107: data = 1.38; break;
    case 108: data = 1.42; break;
    case 109: data = 1.46; break;
    case 110: data = 1.54; break;
    case 111: data = 1.58; break;
    case 112: data = 1.62; break;
    case 113: data = 1.74; break;
    case 114: data = 1.82; break;
    case 115: data = 1.78; break;
    case 116: data = 1.86; break;
    case 117: data = 1.98; break;
    case 118: data = 2.02; break;
    case 119: data = 2.06; break;
    case 120: data = 2.06; break;
    case 121: data = 2.10; break;
    case 122: data = 2.14; break;
    case 123: data = 2.18; break;
    case 124: data = 2.22; break;
    case 125: data = 2.34; break;
    case 126: data = 2.26; break;
    case 127: data = 2.26; break;
    case 128: data = 2.22; break;
    case 129: data = 2.02; break;
    case 130: data = 1.62; break;
    case 131: data = 0.86; break;
    case 132: data = 0.94; break;
    case 133: data = 0.94; break;
    case 134: data = 1.02; break;
    case 135: data = 1.02; break;
    case 136: data = 1.14; break;
    case 137: data = 1.10; break;
    case 138: data = 1.22; break;
    case 139: data = 1.22; break;
    case 140: data = 1.30; break;
    case 141: data = 1.26; break;
    case 142: data = 1.34; break;
    case 143: data = 1.42; break;
    case 144: data = 1.50; break;
    case 145: data = 1.46; break;
    case 146: data = 1.62; break;
    case 147: data = 1.70; break;
    case 148: data = 1.82; break;
    case 149: data = 1.90; break;
    case 150: data = 2.02; break;
    case 151: data = 2.06; break;
    case 152: data = 2.22; break;
    case 153: data = 2.30; break;
    case 154: data = 2.38; break;
    case 155: data = 2.58; break;
    case 156: data = 2.58; break;
    case 157: data = 2.62; break;
    case 158: data = 2.78; break;
    case 159: data = 2.86; break;
    case 160: data = 2.94; break;
    case 161: data = 3.06; break;
    case 162: data = 3.10; break;
    case 163: data = 3.22; break;
    case 164: data = 3.30; break;
    case 165: data = 3.34; break;
    case 166: data = 3.38; break;
    case 167: data = 3.46; break;
    case 168: data = 3.50; break;
    case 169: data = 3.54; break;
    case 170: data = 3.58; break;
    case 171: data = 3.62; break;
    case 172: data = 3.70; break;
    case 173: data = 3.70; break;
    case 174: data = 3.70; break;
    case 175: data = 3.78; break;
    case 176: data = 3.82; break;
    case 177: data = 3.82; break;
    case 178: data = 3.86; break;
    case 179: data = 3.82; break;
    case 180: data = 3.82; break;
    case 181: data = 3.90; break;
    case 182: data = 3.86; break;
    case 183: data = 3.86; break;
    case 184: data = 3.94; break;
    case 185: data = 3.90; break;
    case 186: data = 3.98; break;
    case 187: data = 3.94; break;
    case 188: data = 3.90; break;
    case 189: data = 3.94; break;
    case 190: data = 3.98; break;
    case 191: data = 3.98; break;
    case 192: data = 3.90; break;
    case 193: data = 3.90; break;
    case 194: data = 3.98; break;
    case 195: data = 3.98; break;
    case 196: data = 3.98; break;
    case 197: data = 3.98; break;
    case 198: data = 3.98; break;
    case 199: data = 3.98; break;
    case 200: data = 3.98; break;
    case 201: data = 3.90; break;
    case 202: data = 3.94; break;
    case 203: data = 3.98; break;
    case 204: data = 3.98; break;
    case 205: data = 3.98; break;
    case 206: data = 3.98; break;
    case 207: data = 3.98; break;
    case 208: data = 3.98; break;
    case 209: data = 4.02; break;
    case 210: data = 3.90; break;
    case 211: data = 4.02; break;
    case 212: data = 3.94; break;
    case 213: data = 3.98; break;
    case 214: data = 3.94; break;
    case 215: data = 3.98; break;
    case 216: data = 4.02; break;
    case 217: data = 3.98; break;
    case 218: data = 3.94; break;
    case 219: data = 3.94; break;
    case 220: data = 3.98; break;
    case 221: data = 3.94; break;
    case 222: data = 3.98; break;
    case 223: data = 3.98; break;
    case 224: data = 3.98; break;
    case 225: data = 3.98; break;
    case 226: data = 3.94; break;
    case 227: data = 3.98; break;
    case 228: data = 3.94; break;
    case 229: data = 3.98; break;
    case 230: data = 3.98; break;
    case 231: data = 3.98; break;
    case 232: data = 3.98; break;
    case 233: data = 3.94; break;
    case 234: data = 3.98; break;
    case 235: data = 3.98; break;
    case 236: data = 3.98; break;
    case 237: data = 3.98; break;
    case 238: data = 3.90; break;
    case 239: data = 3.98; break;
    case 240: data = 3.98; break;
    case 241: data = 3.98; break;
    case 242: data = 3.94; break;
    case 243: data = 3.98; break;
    case 244: data = 3.98; break;
    case 245: data = 3.98; break;
    case 246: data = 3.98; break;
    case 247: data = 3.94; break;
    case 248: data = 3.98; break;
    case 249: data = 4.02; break;
    case 250: data = 3.98; break;
    case 251: data = 3.98; break;
    case 252: data = 3.98; break;
    case 253: data = 3.98; break;
    case 254: data = 3.90; break;
    case 255: data = 3.94; break;
    case 256: data = 3.94; break;
    case 257: data = 3.94; break;
    case 258: data = 3.90; break;
    case 259: data = 3.98; break;
    case 260: data = 3.98; break;
    case 261: data = 3.98; break;
    case 262: data = 3.94; break;
    case 263: data = 3.98; break;
    case 264: data = 3.94; break;
    case 265: data = 3.98; break;
    case 266: data = 3.98; break;
    case 267: data = 3.98; break;
    case 268: data = 3.94; break;
    case 269: data = 3.98; break;
    case 270: data = 3.98; break;
    case 271: data = 3.98; break;
    case 272: data = 3.98; break;
    case 273: data = 3.94; break;
    case 274: data = 3.98; break;
    case 275: data = 3.94; break;
    case 276: data = 3.94; break;
    case 277: data = 3.90; break;
    case 278: data = 3.98; break;
    case 279: data = 3.98; break;
    case 280: data = 3.98; break;
    case 281: data = 3.98; break;
    case 282: data = 3.98; break;
    case 283: data = 3.98; break;
    case 284: data = 3.98; break;
    case 285: data = 3.98; break;
    case 286: data = 3.98; break;
    case 287: data = 3.98; break;
    case 288: data = 3.98; break;
    case 289: data = 3.94; break;
    case 290: data = 3.90; break;
    case 291: data = 3.98; break;
    case 292: data = 3.98; break;
    case 293: data = 3.98; break;
    case 294: data = 3.98; break;
    case 295: data = 3.90; break;
    case 296: data = 3.98; break;
    case 297: data = 3.98; break;
    case 298: data = 3.94; break;
    case 299: data = 3.98; break;
    case 300: data = 3.98; break;
    case 301: data = 3.98; break;
    case 302: data = 3.94; break;
    case 303: data = 3.98; break;
    case 304: data = 3.98; break;
    case 305: data = 3.94; break;
    case 306: data = 3.94; break;
    case 307: data = 3.90; break;
    case 308: data = 3.94; break;
    case 309: data = 3.98; break;
    case 310: data = 3.98; break;
    case 311: data = 3.98; break;
    case 312: data = 3.90; break;
    case 313: data = 3.98; break;
    case 314: data = 3.98; break;
    case 315: data = 3.90; break;
    case 316: data = 3.90; break;
    case 317: data = 3.94; break;
    case 318: data = 3.90; break;
    case 319: data = 4.02; break;
    case 320: data = 3.98; break;
    case 321: data = 3.98; break;
    case 322: data = 3.98; break;
    case 323: data = 3.98; break;
    case 324: data = 3.98; break;
    case 325: data = 3.94; break;
    case 326: data = 3.94; break;
    case 327: data = 3.98; break;
    case 328: data = 3.90; break;
    case 329: data = 3.98; break;
    case 330: data = 3.90; break;
    case 331: data = 3.94; break;
    case 332: data = 3.90; break;
    case 333: data = 3.98; break;
    case 334: data = 3.98; break;
    case 335: data = 3.98; break;
    case 336: data = 3.90; break;
    case 337: data = 3.98; break;
    case 338: data = 3.98; break;
    case 339: data = 3.98; break;
    case 340: data = 3.98; break;
    case 341: data = 3.98; break;
    case 342: data = 3.98; break;
    case 343: data = 3.98; break;
    case 344: data = 3.98; break;
    case 345: data = 3.94; break;
    case 346: data = 3.98; break;
    case 347: data = 3.98; break;
    case 348: data = 3.94; break;
    case 349: data = 3.90; break;
    case 350: data = 3.94; break;
    case 351: data = 3.98; break;
    case 352: data = 3.94; break;
    case 353: data = 3.94; break;
    case 354: data = 3.94; break;
    case 355: data = 3.98; break;
    case 356: data = 3.90; break;
    case 357: data = 3.98; break;
    case 358: data = 3.98; break;
    case 359: data = 3.90; break;
    case 360: data = 3.98; break;
    case 361: data = 3.98; break;
    case 362: data = 3.98; break;
    case 363: data = 4.02; break;
    case 364: data = 3.98; break;
    case 365: data = 3.98; break;
    case 366: data = 3.90; break;
    case 367: data = 3.98; break;
    case 368: data = 3.94; break;
    case 369: data = 4.02; break;
    case 370: data = 3.98; break;
    case 371: data = 3.98; break;
    case 372: data = 3.94; break;
    case 373: data = 3.90; break;
    case 374: data = 3.94; break;
    case 375: data = 3.98; break;
    case 376: data = 3.90; break;
    case 377: data = 3.98; break;
    case 378: data = 3.98; break;
    case 379: data = 3.98; break;
    case 380: data = 3.98; break;
    case 381: data = 3.98; break;
    case 382: data = 3.98; break;
    case 383: data = 3.98; break;
    case 384: data = 3.98; break;
    case 385: data = 3.98; break;
    case 386: data = 3.98; break;
    case 387: data = 3.98; break;
    case 388: data = 3.94; break;
    case 389: data = 3.98; break;
    case 390: data = 3.94; break;
    case 391: data = 3.94; break;
    case 392: data = 3.94; break;
    case 393: data = 3.90; break;
    case 394: data = 3.94; break;
    case 395: data = 3.94; break;
    case 396: data = 3.98; break;
    case 397: data = 3.94; break;
    case 398: data = 3.98; break;
    case 399: data = 3.90; break;
    case 400: data = 3.90; break;
    case 401: data = 2.78; break;
    case 402: data = 2.42; break;
    case 403: data = 2.14; break;
    case 404: data = 1.98; break;
    case 405: data = 1.78; break;
    case 406: data = 1.54; break;
    case 407: data = 1.46; break;
    case 408: data = 1.38; break;
    case 409: data = 1.26; break;
    case 410: data = 1.22; break;
    case 411: data = 1.10; break;
    case 412: data = 1.06; break;
    case 413: data = 0.94; break;
    case 414: data = 0.90; break;
    case 415: data = 0.86; break;
    case 416: data = 0.82; break;
    case 417: data = 0.82; break;
    case 418: data = 0.74; break;
    case 419: data = 0.70; break;
    case 420: data = 0.70; break;
    case 421: data = 0.70; break;
    case 422: data = 0.62; break;
    case 423: data = 0.66; break;
    case 424: data = 0.62; break;
    case 425: data = 0.62; break;
    case 426: data = 0.58; break;
    case 427: data = 0.54; break;
    case 428: data = 0.58; break;
    case 429: data = 0.54; break;
    case 430: data = 0.54; break;
    case 431: data = 0.50; break;
    case 432: data = 0.54; break;
    case 433: data = 0.50; break;
    case 434: data = 0.50; break;
    case 435: data = 0.54; break;
    case 436: data = 0.50; break;
    case 437: data = 0.50; break;
    case 438: data = 0.50; break;
    case 439: data = 0.50; break;
    case 440: data = 0.42; break;
    case 441: data = 0.46; break;
    case 442: data = 0.46; break;
    case 443: data = 0.46; break;
    case 444: data = 0.46; break;
    case 445: data = 0.42; break;
    case 446: data = 0.42; break;
    case 447: data = 0.46; break;
    case 448: data = 0.42; break;
    case 449: data = 0.42; break;
    case 450: data = 0.38; break;
    case 451: data = 0.42; break;
    case 452: data = 0.42; break;
    case 453: data = 0.38; break;
    case 454: data = 0.38; break;
    case 455: data = 0.38; break;
    case 456: data = 0.38; break;
    case 457: data = 0.42; break;
    case 458: data = 0.38; break;
    case 459: data = 0.38; break;
    case 460: data = 0.38; break;
    case 461: data = 0.38; break;
    case 462: data = 0.38; break;
    case 463: data = 0.30; break;
    case 464: data = 0.30; break;
    case 465: data = 0.38; break;
    case 466: data = 0.38; break;
    case 467: data = 0.38; break;
    case 468: data = 0.30; break;
    case 469: data = 0.30; break;
    case 470: data = 0.30; break;
    case 471: data = 0.30; break;
    case 472: data = 0.30; break;
    case 473: data = 0.30; break;
    case 474: data = 0.30; break;
    case 475: data = 0.34; break;
    case 476: data = 0.30; break;
    case 477: data = 0.30; break;
    case 478: data = 0.26; break;
    case 479: data = 0.22; break;
    case 480: data = 0.30; break;
    case 481: data = 0.30; break;
    case 482: data = 0.26; break;
    case 483: data = 0.26; break;
    case 484: data = 0.26; break;
    case 485: data = 0.26; break;
    case 486: data = 0.30; break;
    case 487: data = 0.26; break;
    case 488: data = 0.22; break;
    case 489: data = 0.22; break;
    case 490: data = 0.22; break;
    case 491: data = 0.22; break;
    case 492: data = 0.22; break;
    case 493: data = 0.26; break;
    case 494: data = 0.26; break;
    case 495: data = 0.22; break;
    case 496: data = 0.22; break;
    case 497: data = 0.22; break;
    case 498: data = 0.22; break;
    case 499: data = 0.22; break;
    case 500: data = 0.22; break;
    case 501: data = 0.26; break;
    case 502: data = 0.22; break;
    case 503: data = 0.22; break;
    case 504: data = 0.26; break;
    case 505: data = 0.22; break;
    case 506: data = 0.22; break;
    case 507: data = 0.22; break;
    case 508: data = 0.22; break;
    case 509: data = 0.18; break;
    case 510: data = 0.22; break;
    case 511: data = 0.22; break;
    case 512: data = 0.18; break;
    case 513: data = 0.22; break;
    case 514: data = 0.18; break;
    case 515: data = 0.22; break;
    case 516: data = 0.22; break;
    case 517: data = 0.14; break;
    case 518: data = 0.18; break;
    case 519: data = 0.14; break;
    case 520: data = 0.14; break;
    case 521: data = 0.22; break;
    case 522: data = 0.18; break;
    case 523: data = 0.18; break;
    case 524: data = 0.10; break;
    case 525: data = 0.18; break;
    case 526: data = 0.14; break;
    case 527: data = 0.14; break;
    case 528: data = 0.14; break;
    case 529: data = 0.18; break;
    case 530: data = 0.14; break;
    case 531: data = 0.14; break;
    case 532: data = 0.18; break;
    case 533: data = 0.14; break;
    case 534: data = 0.10; break;
    case 535: data = 0.14; break;
    case 536: data = 0.14; break;
    case 537: data = 0.10; break;
    case 538: data = 0.14; break;
    case 539: data = 0.14; break;
    case 540: data = 0.18; break;
    case 541: data = 0.14; break;
    case 542: data = 0.14; break;
    case 543: data = 0.14; break;
    case 544: data = 0.14; break;
    case 545: data = 0.10; break;
    case 546: data = 0.14; break;
    case 547: data = 0.06; break;
    case 548: data = 0.14; break;
    case 549: data = 0.10; break;
    case 550: data = 0.10; break;
    case 551: data = 0.10; break;
    case 552: data = 0.06; break;
    case 553: data = 0.10; break;
    case 554: data = 0.14; break;
    case 555: data = 0.30; break;
    case 556: data = 0.50; break;
    case 557: data = 0.82; break;
    case 558: data = 0.94; break;
    case 559: data = 0.86; break;
    case 560: data = 0.82; break;
    case 561: data = 0.82; break;
    case 562: data = 0.78; break;
    case 563: data = 0.74; break;
    case 564: data = 0.74; break;
    case 565: data = 0.70; break;
    case 566: data = 0.70; break;
    case 567: data = 0.66; break;
    case 568: data = 0.66; break;
    case 569: data = 0.62; break;
    case 570: data = 0.62; break;
    case 571: data = 0.58; break;
    case 572: data = 0.58; break;
    case 573: data = 0.58; break;
    case 574: data = 0.54; break;
    case 575: data = 0.54; break;
    case 576: data = 0.50; break;
    case 577: data = 0.46; break;
    case 578: data = 0.50; break;
    case 579: data = 0.46; break;
    case 580: data = 0.46; break;
    case 581: data = 0.46; break;
    case 582: data = 0.46; break;
    case 583: data = 0.38; break;
    case 584: data = 0.38; break;
    case 585: data = 0.38; break;
    case 586: data = 0.34; break;
    case 587: data = 0.38; break;
    case 588: data = 0.38; break;
    case 589: data = 0.34; break;
    case 590: data = 0.30; break;
    case 591: data = 0.34; break;
    case 592: data = 0.22; break;
    case 593: data = 0.30; break;
    case 594: data = 0.30; break;
    case 595: data = 0.34; break;
    case 596: data = 0.26; break;
    case 597: data = 0.22; break;
    case 598: data = 0.18; break;
    case 599: data = 0.22; break;
    case 600: data = 0.22; break;
    case 601: data = 0.18; break;
    case 602: data = 0.18; break;
    case 603: data = 0.18; break;
    case 604: data = 0.18; break;
    case 605: data = 0.18; break;
    case 606: data = 0.14; break;
    case 607: data = 0.18; break;
    case 608: data = 0.18; break;
    case 609: data = 0.14; break;
    case 610: data = 0.10; break;
    case 611: data = 0.14; break;
    case 612: data = 0.14; break;
    case 613: data = 0.10; break;
    case 614: data = 0.10; break;
    case 615: data = 0.10; break;
    case 616: data = 0.06; break;
    case 617: data = 0.06; break;
    case 618: data = 0.06; break;
    case 619: data = 0.10; break;
    case 620: data = 0.06; break;
    case 621: data = 0.10; break;
    case 622: data = 0.02; break;
    case 623: data = 0.02; break;
    case 624: data = 0.06; break;
    case 625: data = 0.06; break;
    case 626: data = 0.06; break;
    case 627: data = 0.06; break;
    case 628: data = 0.02; break;
    case 629: data = -0.02; break;
    case 630: data = -0.02; break;
    case 631: data = -0.02; break;
    case 632: data = -0.02; break;
    case 633: data = 0.02; break;
    case 634: data = 0.02; break;
    case 635: data = 0.02; break;
    case 636: data = -0.06; break;
    case 637: data = -0.06; break;
    case 638: data = -0.02; break;
    case 639: data = -0.02; break;
    case 640: data = 0.02; break;
    case 641: data = -0.02; break;
    case 642: data = -0.06; break;
    case 643: data = -0.02; break;
    case 644: data = -0.10; break;
    case 645: data = -0.06; break;
    case 646: data = -0.06; break;
    case 647: data = -0.02; break;
    case 648: data = -0.14; break;
    case 649: data = -0.02; break;
    case 650: data = -0.06; break;
    case 651: data = -0.06; break;
    case 652: data = -0.06; break;
    case 653: data = -0.06; break;
    case 654: data = -0.14; break;
    case 655: data = -0.10; break;
    case 656: data = -0.06; break;
    case 657: data = -0.10; break;
    case 658: data = -0.10; break;
    case 659: data = -0.10; break;
    case 660: data = -0.10; break;
    case 661: data = -0.10; break;
    case 662: data = -0.10; break;
    case 663: data = -0.06; break;
    case 664: data = -0.14; break;
    case 665: data = -0.10; break;
    case 666: data = -0.10; break;
    case 667: data = -0.10; break;
    case 668: data = -0.14; break;
    case 669: data = -0.10; break;
    case 670: data = -0.10; break;
    case 671: data = -0.10; break;
    case 672: data = -0.14; break;
    case 673: data = -0.14; break;
    case 674: data = -0.06; break;
    case 675: data = -0.06; break;
    case 676: data = -0.06; break;
    case 677: data = -0.10; break;
    case 678: data = -0.10; break;
    case 679: data = -0.10; break;
    case 680: data = -0.10; break;
    case 681: data = -0.10; break;
    case 682: data = -0.10; break;
    case 683: data = -0.10; break;
    case 684: data = -0.14; break;
    case 685: data = -0.10; break;
    case 686: data = -0.14; break;
    case 687: data = -0.14; break;
    case 688: data = -0.18; break;
    case 689: data = -0.18; break;
    case 690: data = -0.10; break;
    case 691: data = -0.10; break;
    case 692: data = -0.14; break;
    case 693: data = -0.10; break;
    case 694: data = -0.14; break;
    case 695: data = -0.10; break;
    case 696: data = -0.10; break;
    case 697: data = -0.14; break;
    case 698: data = -0.10; break;
    case 699: data = -0.10; break;
    case 700: data = -0.14; break;
    case 701: data = -0.14; break;
    case 702: data = -0.14; break;
    case 703: data = -0.18; break;
    case 704: data = -0.10; break;
    case 705: data = -0.10; break;
    case 706: data = -0.18; break;
    case 707: data = -0.14; break;
    case 708: data = -0.10; break;
    case 709: data = -0.14; break;
    case 710: data = -0.14; break;
    case 711: data = -0.10; break;
    case 712: data = -0.14; break;
    case 713: data = -0.10; break;
    case 714: data = -0.10; break;
    case 715: data = -0.14; break;
    case 716: data = -0.14; break;
    case 717: data = -0.14; break;
    case 718: data = -0.14; break;
    case 719: data = -0.14; break;
    case 720: data = -0.10; break;
    case 721: data = -0.14; break;
    case 722: data = -0.10; break;
    case 723: data = -0.14; break;
    case 724: data = -0.10; break;
    case 725: data = -0.14; break;
    case 726: data = -0.14; break;
    case 727: data = -0.10; break;
    case 728: data = -0.10; break;
    case 729: data = -0.10; break;
    case 730: data = -0.14; break;
    case 731: data = -0.06; break;
    case 732: data = -0.10; break;
    case 733: data = -0.10; break;
    case 734: data = -0.10; break;
    case 735: data = -0.10; break;
    case 736: data = -0.10; break;
    case 737: data = -0.10; break;
    case 738: data = -0.14; break;
    case 739: data = -0.10; break;
    case 740: data = -0.10; break;
    case 741: data = -0.14; break;
    case 742: data = -0.10; break;
    case 743: data = -0.14; break;
    case 744: data = -0.10; break;
    case 745: data = -0.10; break;
    case 746: data = -0.14; break;
    case 747: data = -0.10; break;
    case 748: data = -0.14; break;
    case 749: data = -0.10; break;
    case 750: data = -0.18; break;
    case 751: data = -0.10; break;
    case 752: data = -0.10; break;
    case 753: data = -0.10; break;
    case 754: data = -0.10; break;
    case 755: data = -0.06; break;
    case 756: data = -0.10; break;
    case 757: data = -0.10; break;
    case 758: data = -0.14; break;
    case 759: data = -0.10; break;
    case 760: data = -0.10; break;
    case 761: data = -0.14; break;
    case 762: data = -0.14; break;
    case 763: data = -0.10; break;
    case 764: data = -0.10; break;
    case 765: data = -0.10; break;
    case 766: data = -0.14; break;
    case 767: data = -0.14; break;
    case 768: data = -0.14; break;
    case 769: data = -0.06; break;
    case 770: data = -0.10; break;
    case 771: data = -0.10; break;
    case 772: data = -0.14; break;
    case 773: data = -0.14; break;
    case 774: data = -0.14; break;
    case 775: data = -0.10; break;
    case 776: data = -0.10; break;
    case 777: data = -0.10; break;
    case 778: data = -0.10; break;
    case 779: data = -0.10; break;
    case 780: data = -0.10; break;
    case 781: data = -0.10; break;
    case 782: data = -0.14; break;
    case 783: data = -0.14; break;
    case 784: data = -0.10; break;
    case 785: data = -0.10; break;
    case 786: data = -0.14; break;
    case 787: data = -0.14; break;
    case 788: data = -0.10; break;
    case 789: data = -0.14; break;
    case 790: data = -0.10; break;
    case 791: data = -0.14; break;
    case 792: data = -0.10; break;
    case 793: data = -0.10; break;
    case 794: data = -0.10; break;
    case 795: data = -0.06; break;
    case 796: data = -0.10; break;
    case 797: data = -0.10; break;
    case 798: data = -0.10; break;
    case 799: data = -0.06; break;
    case 800: data = -0.14; break;
    case 801: data = -0.14; break;
    case 802: data = -0.10; break;
    case 803: data = -0.14; break;
    case 804: data = -0.14; break;
    case 805: data = -0.10; break;
    case 806: data = -0.06; break;
    case 807: data = -0.10; break;
    case 808: data = -0.06; break;
    case 809: data = -0.14; break;
    case 810: data = -0.10; break;
    case 811: data = -0.10; break;
    case 812: data = -0.10; break;
    case 813: data = -0.06; break;
    case 814: data = -0.14; break;
    case 815: data = -0.10; break;
    case 816: data = -0.14; break;
    case 817: data = -0.10; break;
    case 818: data = -0.06; break;
    case 819: data = -0.10; break;
    case 820: data = -0.18; break;
    case 821: data = -0.18; break;
    case 822: data = -0.10; break;
    case 823: data = -0.10; break;
    case 824: data = -0.14; break;
    case 825: data = -0.10; break;
    case 826: data = -0.10; break;
    case 827: data = -0.14; break;
    case 828: data = -0.14; break;
    case 829: data = -0.14; break;
    case 830: data = -0.14; break;
    case 831: data = -0.14; break;
    case 832: data = -0.14; break;
    case 833: data = -0.14; break;
    case 834: data = -0.14; break;
    case 835: data = -0.10; break;
    case 836: data = -0.14; break;
    case 837: data = -0.10; break;
    case 838: data = -0.10; break;
    case 839: data = -0.14; break;
    case 840: data = -0.14; break;
    case 841: data = -0.10; break;
    case 842: data = -0.14; break;
    case 843: data = -0.14; break;
    case 844: data = -0.10; break;
    case 845: data = -0.14; break;
    case 846: data = -0.18; break;
    case 847: data = -0.10; break;
    case 848: data = -0.14; break;
    case 849: data = -0.06; break;
    case 850: data = -0.14; break;
    case 851: data = -0.06; break;
    case 852: data = -0.10; break;
    case 853: data = -0.10; break;
    case 854: data = -0.14; break;
    case 855: data = -0.10; break;
    case 856: data = -0.10; break;
    case 857: data = -0.14; break;
    case 858: data = -0.14; break;
    case 859: data = -0.14; break;
    case 860: data = -0.14; break;
    case 861: data = -0.10; break;
    case 862: data = -0.10; break;
    case 863: data = -0.10; break;
    case 864: data = -0.14; break;
    case 865: data = -0.10; break;
    case 866: data = -0.06; break;
    case 867: data = -0.06; break;
    case 868: data = -0.14; break;
    case 869: data = -0.10; break;
    case 870: data = -0.10; break;
    case 871: data = -0.14; break;
    case 872: data = -0.14; break;
    case 873: data = -0.10; break;
    case 874: data = -0.10; break;
    case 875: data = -0.10; break;
    case 876: data = -0.10; break;
    case 877: data = -0.10; break;
    case 878: data = -0.10; break;
    case 879: data = -0.10; break;
    case 880: data = -0.14; break;
    case 881: data = -0.10; break;
    case 882: data = -0.06; break;
    case 883: data = -0.10; break;
    case 884: data = -0.14; break;
    case 885: data = -0.10; break;
    case 886: data = -0.14; break;
    case 887: data = -0.10; break;
    case 888: data = -0.10; break;
    case 889: data = -0.10; break;
    case 890: data = -0.10; break;
    case 891: data = -0.14; break;
    case 892: data = -0.10; break;
    case 893: data = -0.06; break;
    case 894: data = -0.10; break;
    case 895: data = -0.10; break;
    case 896: data = -0.10; break;
    case 897: data = -0.10; break;
    case 898: data = -0.14; break;
    case 899: data = -0.14; break;
    case 900: data = -0.10; break;
    case 901: data = -0.14; break;
    case 902: data = -0.14; break;
    case 903: data = -0.14; break;
    case 904: data = -0.18; break;
    case 905: data = -0.14; break;
    case 906: data = -0.06; break;
    case 907: data = -0.14; break;
    case 908: data = -0.14; break;
    case 909: data = -0.18; break;
    case 910: data = -0.10; break;
    case 911: data = -0.10; break;
    case 912: data = -0.10; break;
    case 913: data = -0.10; break;
    case 914: data = -0.14; break;
    case 915: data = -0.10; break;
    case 916: data = -0.10; break;
    case 917: data = -0.10; break;
    case 918: data = -0.14; break;
    case 919: data = -0.14; break;
    case 920: data = -0.14; break;
    case 921: data = -0.14; break;
    case 922: data = -0.14; break;
    case 923: data = -0.14; break;
    case 924: data = -0.10; break;
    case 925: data = -0.10; break;
    case 926: data = -0.06; break;
    case 927: data = -0.10; break;
    case 928: data = -0.10; break;
    case 929: data = -0.14; break;
    case 930: data = -0.14; break;
    case 931: data = -0.10; break;
    case 932: data = -0.10; break;
    case 933: data = -0.10; break;
    case 934: data = -0.10; break;
    case 935: data = -0.10; break;
    case 936: data = -0.14; break;
    case 937: data = -0.14; break;
    case 938: data = -0.14; break;
    case 939: data = -0.14; break;
    case 940: data = -0.10; break;
    case 941: data = -0.14; break;
    case 942: data = -0.14; break;
    case 943: data = -0.10; break;
    case 944: data = -0.10; break;
    case 945: data = -0.10; break;
    case 946: data = -0.14; break;
    case 947: data = -0.10; break;
    case 948: data = -0.06; break;
    case 949: data = -0.10; break;
    case 950: data = -0.14; break;
    case 951: data = -0.06; break;
    case 952: data = -0.14; break;
    case 953: data = -0.14; break;
    case 954: data = -0.10; break;
    case 955: data = -0.10; break;
    case 956: data = -0.14; break;
    case 957: data = -0.14; break;
    case 958: data = -0.10; break;
    case 959: data = -0.10; break;
    case 960: data = -0.10; break;
    case 961: data = -0.14; break;
    case 962: data = -0.10; break;
    case 963: data = -0.10; break;
    case 964: data = -0.10; break;
    case 965: data = -0.14; break;
    case 966: data = -0.10; break;
    case 967: data = -0.18; break;
    case 968: data = -0.14; break;
    case 969: data = -0.06; break;
    case 970: data = -0.14; break;
    case 971: data = -0.10; break;
    case 972: data = -0.10; break;
    case 973: data = -0.10; break;
    case 974: data = -0.14; break;
    case 975: data = -0.10; break;
    case 976: data = -0.10; break;
    case 977: data = -0.10; break;
    case 978: data = -0.10; break;
    case 979: data = -0.14; break;
    case 980: data = -0.10; break;
    case 981: data = -0.14; break;
    case 982: data = -0.14; break;
    case 983: data = -0.18; break;
    case 984: data = -0.10; break;
    case 985: data = -0.14; break;
    case 986: data = -0.10; break;
    case 987: data = -0.06; break;
    case 988: data = -0.10; break;
    case 989: data = -0.10; break;
    case 990: data = -0.06; break;
    case 991: data = -0.10; break;
    case 992: data = -0.10; break;
    case 993: data = -0.10; break;
    case 994: data = -0.14; break;
    case 995: data = -0.14; break;
    case 996: data = -0.10; break;
    case 997: data = -0.18; break;
    case 998: data = -0.10; break;
    case 999: data = -0.14; break;
  }

  return data;
}


//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
static double dataset_anomaly_function(event_data const &event)
{
  int t = event.timestamp() % 1000;
  double LO = 4.5;
  double HI = 5.0;
  double data = (HI-LO)*
    (static_cast<double>(rand())/static_cast<double>(RAND_MAX)) + LO;

  if(t >= 110 && t < 130)
  {
      LO = 4.25;
      HI = 4.5;
      data = (HI-LO)*
        (static_cast<double>(rand())/static_cast<double>(RAND_MAX))+LO;
  }
  else if(t >= 160 && t < 400)
  {
      LO = 1.0;
      HI = 3.0;
      data = (HI-LO)*
        (static_cast<double>(rand())/static_cast<double>(RAND_MAX))+LO;
  }

  return data;
}


//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
static data_list dataset_function_vars()
{
  int time_start = 1, time_end = 10000;

  int normal_lowerbound_duration = 10;
  int normal_upperbound_duration = 20;

  int anomaly_lowerbound_duration = 50;
  int anomaly_upperbound_duration = 200;

  long prob_num = 1;
  long prob_den = 100;

  srand(time(0));

  data_generator data_gen(time_start, time_end, normal_lowerbound_duration,
    normal_upperbound_duration, anomaly_lowerbound_duration,
    anomaly_upperbound_duration, prob_num, prob_den);

  function_variable *v = new function_variable("moratta_sensor");
  v->normal_function(&dataset_normal_function);
  v->anomaly_function(&dataset_anomaly_function);
  data_gen.insert_variable(v);

  //data_gen.enable_multithreaded_data_generation();
  data_gen.generate_data();
  return data_gen.generated_data();
}

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void example_space_shuttle()
{
  data_list data = dataset_function_vars();

  //--------------------------------------------------------------------------
  // print out the header information
  //--------------------------------------------------------------------------
  std::cout << "label" << "\t" << "time-stamp" << "\t";

  std::map<std::string, double>::iterator it = data.begin()->variable_values().begin();

  for (; it != data.begin()->variable_values().end(); ++it)
  {
    std::cout << it->first << "\t";
  }
  std::cout << std::endl;

  //--------------------------------------------------------------------------
  // print out the actual generated data
  //--------------------------------------------------------------------------
  data_list::iterator i = data.begin();

  for (; i != data.end(); ++i)
  {
    std::cout << i->label() << ",\t";
    std::cout << i->time_stamp();

    std::map<std::string, double>::iterator it = i->variable_values().begin();

    std::cout << std::setprecision(4);
    for (; it != i->variable_values().end(); ++it)
    {
      std::cout << ",\t";
      std::cout << std::fixed << it->second;
    }
    std::cout << std::setprecision(0);

    std:: cout << std::endl;
  }

}
