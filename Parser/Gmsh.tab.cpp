/* A Bison parser, made from Gmsh.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	tDOUBLE	257
# define	tSTRING	258
# define	tBIGSTR	259
# define	tEND	260
# define	tAFFECT	261
# define	tDOTS	262
# define	tPi	263
# define	tMPI_Rank	264
# define	tMPI_Size	265
# define	tExp	266
# define	tLog	267
# define	tLog10	268
# define	tSqrt	269
# define	tSin	270
# define	tAsin	271
# define	tCos	272
# define	tAcos	273
# define	tTan	274
# define	tRand	275
# define	tAtan	276
# define	tAtan2	277
# define	tSinh	278
# define	tCosh	279
# define	tTanh	280
# define	tFabs	281
# define	tFloor	282
# define	tCeil	283
# define	tFmod	284
# define	tModulo	285
# define	tHypot	286
# define	tPrintf	287
# define	tSprintf	288
# define	tStrCat	289
# define	tStrPrefix	290
# define	tDraw	291
# define	tPoint	292
# define	tCircle	293
# define	tEllipse	294
# define	tLine	295
# define	tSurface	296
# define	tSpline	297
# define	tVolume	298
# define	tCharacteristic	299
# define	tLength	300
# define	tParametric	301
# define	tElliptic	302
# define	tPlane	303
# define	tRuled	304
# define	tTransfinite	305
# define	tComplex	306
# define	tPhysical	307
# define	tUsing	308
# define	tBump	309
# define	tProgression	310
# define	tPlugin	311
# define	tRotate	312
# define	tTranslate	313
# define	tSymmetry	314
# define	tDilate	315
# define	tExtrude	316
# define	tDuplicata	317
# define	tLoop	318
# define	tRecombine	319
# define	tDelete	320
# define	tCoherence	321
# define	tIntersect	322
# define	tAttractor	323
# define	tLayers	324
# define	tScalarTetrahedron	325
# define	tVectorTetrahedron	326
# define	tTensorTetrahedron	327
# define	tScalarTriangle	328
# define	tVectorTriangle	329
# define	tTensorTriangle	330
# define	tScalarLine	331
# define	tVectorLine	332
# define	tTensorLine	333
# define	tScalarPoint	334
# define	tVectorPoint	335
# define	tTensorPoint	336
# define	tText2D	337
# define	tText3D	338
# define	tBSpline	339
# define	tBezier	340
# define	tNurbs	341
# define	tOrder	342
# define	tWith	343
# define	tBounds	344
# define	tKnots	345
# define	tColor	346
# define	tColorTable	347
# define	tFor	348
# define	tIn	349
# define	tEndFor	350
# define	tIf	351
# define	tEndIf	352
# define	tExit	353
# define	tReturn	354
# define	tCall	355
# define	tFunction	356
# define	tMesh	357
# define	tB_SPLINE_SURFACE_WITH_KNOTS	358
# define	tB_SPLINE_CURVE_WITH_KNOTS	359
# define	tCARTESIAN_POINT	360
# define	tTRUE	361
# define	tFALSE	362
# define	tUNSPECIFIED	363
# define	tU	364
# define	tV	365
# define	tEDGE_CURVE	366
# define	tVERTEX_POINT	367
# define	tORIENTED_EDGE	368
# define	tPLANE	369
# define	tFACE_OUTER_BOUND	370
# define	tEDGE_LOOP	371
# define	tADVANCED_FACE	372
# define	tVECTOR	373
# define	tDIRECTION	374
# define	tAXIS2_PLACEMENT_3D	375
# define	tISO	376
# define	tENDISO	377
# define	tENDSEC	378
# define	tDATA	379
# define	tHEADER	380
# define	tFILE_DESCRIPTION	381
# define	tFILE_SCHEMA	382
# define	tFILE_NAME	383
# define	tMANIFOLD_SOLID_BREP	384
# define	tCLOSED_SHELL	385
# define	tADVANCED_BREP_SHAPE_REPRESENTATION	386
# define	tFACE_BOUND	387
# define	tCYLINDRICAL_SURFACE	388
# define	tCONICAL_SURFACE	389
# define	tCIRCLE	390
# define	tTRIMMED_CURVE	391
# define	tGEOMETRIC_SET	392
# define	tCOMPOSITE_CURVE_SEGMENT	393
# define	tCONTINUOUS	394
# define	tCOMPOSITE_CURVE	395
# define	tTOROIDAL_SURFACE	396
# define	tPRODUCT_DEFINITION	397
# define	tPRODUCT_DEFINITION_SHAPE	398
# define	tSHAPE_DEFINITION_REPRESENTATION	399
# define	tELLIPSE	400
# define	tTrimmed	401
# define	tSolid	402
# define	tEndSolid	403
# define	tVertex	404
# define	tFacet	405
# define	tNormal	406
# define	tOuter	407
# define	tLoopSTL	408
# define	tEndLoop	409
# define	tEndFacet	410
# define	tAFFECTPLUS	411
# define	tAFFECTMINUS	412
# define	tAFFECTTIMES	413
# define	tAFFECTDIVIDE	414
# define	tOR	415
# define	tAND	416
# define	tEQUAL	417
# define	tNOTEQUAL	418
# define	tAPPROXEQUAL	419
# define	tLESSOREQUAL	420
# define	tGREATEROREQUAL	421
# define	tCROSSPRODUCT	422
# define	tPLUSPLUS	423
# define	tMINUSMINUS	424
# define	UNARYPREC	425

#line 1 "Gmsh.y"
 

// $Id: Gmsh.tab.cpp,v 1.140 2002-05-18 09:14:33 geuzaine Exp $
//
// Copyright (C) 1997 - 2002 C. Geuzaine, J.-F. Remacle
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.

#include <stdarg.h>
#ifndef _NOPLUGIN
#include "PluginManager.h"
#endif
#include "ParUtil.h"
#include "Gmsh.h"
#include "Numeric.h"
#include "Context.h"
#include "Geo.h"
#include "CAD.h"
#include "DataBase.h"
#include "Mesh.h"
#include "Draw.h"
#include "Create.h"
#include "Views.h"
#include "StepGeomDatabase.h"
#include "Options.h"
#include "Colors.h"
#include "Parser.h"
#include "OpenFile.h"
#include "FunctionManager.h"
#include "ColorTable.h"
#include "Timer.h"
#include "CreateFile.h"
#include "STL.h"

#ifdef __DECCXX // bug in bison
#include <alloca.h>
#endif

List_T *Symbol_L=NULL;

extern Context_T  CTX;
extern Mesh      *THEM;

static FILE          *yyinTab[MAX_OPEN_FILES];
static int            yylinenoTab[MAX_OPEN_FILES];
static fpos_t         yyposImbricatedLoopsTab[MAX_OPEN_FILES];
static int            yylinenoImbricatedLoopsTab[MAX_OPEN_FILES];
static double         LoopControlVariablesTab[MAX_OPEN_FILES][3];
static char*          LoopControlVariablesNameTab[MAX_OPEN_FILES];
static char           yynameTab[MAX_OPEN_FILES][256];
static char           tmpstring[1024];
static Symbol         TheSymbol, *pSymbol;
static Surface       *STL_Surf;
static Shape          TheShape;
static int            i,j,k,flag,RecursionLevel=0,ImbricatedLoop = 0;
static int            Last_NumberOfPoints = 0;
static double         d, *pd;
static ExtrudeParams  extr;
static char           *str;
static StringXString  *pStrCat;
static StringXNumber  *pNumCat;
static StringXColor   *pColCat;
static double         (*pNumOpt)(int num, int action, double value);
static char*          (*pStrOpt)(int num, int action, char *value);
static unsigned int   (*pColOpt)(int num, int action, unsigned int value);
static Post_View      *View;

char *strsave(char *ptr);
void  yyerror (char *s);
void  vyyerror (char *fmt, ...);
void  skip_until (char *skip, char *until);
int PrintListOfDouble(char *format, List_T *list, char *buffer);

#line 87 "Gmsh.y"
#ifndef YYSTYPE
typedef union {
  char    *c;
  int      i;
  unsigned int u;
  double   d;
  double   v[5];
  Shape    s;
  List_T  *l;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		1706
#define	YYFLAG		-32768
#define	YYNTBASE	190

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 425 ? yytranslate[x] : 284)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   177,     2,     2,     2,   175,     2,     2,
     182,   183,   173,   171,   187,   172,   186,   174,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     167,     2,   169,   161,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   184,     2,   185,   181,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   188,     2,   189,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   162,   163,   164,   165,   166,
     168,   170,   176,   178,   179,   180
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     2,     4,     6,     9,    11,    14,    16,    38,
      40,    41,    44,    46,    48,    50,    53,    56,    59,    62,
      65,    73,    79,    97,   107,   131,   163,   179,   191,   203,
     219,   229,   243,   253,   265,   279,   289,   299,   311,   321,
     333,   343,   355,   369,   383,   395,   409,   427,   437,   449,
     461,   475,   487,   497,   498,   501,   503,   505,   507,   509,
     511,   513,   515,   517,   519,   521,   523,   525,   527,   533,
     541,   548,   557,   558,   561,   564,   567,   570,   573,   576,
     579,   582,   585,   588,   591,   594,   597,   600,   602,   606,
     607,   621,   623,   627,   628,   642,   644,   648,   649,   663,
     665,   669,   670,   690,   692,   696,   697,   717,   719,   723,
     724,   744,   746,   750,   751,   777,   779,   783,   784,   810,
     812,   816,   817,   843,   845,   849,   850,   882,   884,   888,
     889,   921,   923,   927,   928,   960,   962,   966,   967,   981,
     983,   987,   988,  1004,  1006,  1008,  1010,  1012,  1014,  1016,
    1018,  1023,  1031,  1041,  1048,  1052,  1059,  1066,  1076,  1083,
    1093,  1099,  1108,  1117,  1129,  1136,  1146,  1156,  1166,  1174,
    1183,  1196,  1203,  1211,  1219,  1232,  1240,  1248,  1258,  1276,
    1285,  1294,  1302,  1310,  1322,  1331,  1344,  1353,  1376,  1397,
    1406,  1415,  1424,  1432,  1441,  1447,  1459,  1465,  1475,  1477,
    1479,  1481,  1482,  1485,  1492,  1499,  1506,  1511,  1516,  1523,
    1527,  1533,  1537,  1541,  1549,  1552,  1555,  1562,  1571,  1580,
    1591,  1593,  1596,  1598,  1602,  1607,  1609,  1618,  1631,  1646,
    1655,  1668,  1683,  1684,  1697,  1698,  1715,  1716,  1735,  1744,
    1757,  1772,  1773,  1786,  1787,  1804,  1805,  1824,  1826,  1829,
    1839,  1847,  1850,  1857,  1867,  1877,  1886,  1895,  1904,  1911,
    1916,  1919,  1922,  1924,  1926,  1928,  1930,  1932,  1934,  1938,
    1941,  1944,  1947,  1951,  1955,  1959,  1963,  1967,  1971,  1975,
    1979,  1983,  1987,  1991,  1995,  1999,  2003,  2009,  2014,  2019,
    2024,  2029,  2034,  2039,  2044,  2049,  2054,  2059,  2066,  2071,
    2076,  2081,  2086,  2091,  2096,  2103,  2110,  2117,  2122,  2127,
    2132,  2137,  2142,  2147,  2152,  2157,  2162,  2167,  2172,  2179,
    2184,  2189,  2194,  2199,  2204,  2209,  2216,  2223,  2230,  2235,
    2237,  2239,  2241,  2243,  2245,  2250,  2253,  2259,  2263,  2270,
    2275,  2283,  2285,  2288,  2291,  2295,  2299,  2311,  2321,  2329,
    2337,  2338,  2342,  2344,  2348,  2349,  2353,  2357,  2359,  2363,
    2365,  2367,  2371,  2376,  2380,  2386,  2390,  2395,  2402,  2410,
    2412,  2414,  2418,  2422,  2432,  2440,  2442,  2448,  2452,  2459,
    2461,  2465,  2467,  2474,  2479,  2484,  2491,  2498
};
static const short yyrhs[] =
{
     193,     0,   192,     0,   198,     0,     1,     6,     0,     3,
       0,   172,     3,     0,   148,     0,   151,   152,   191,   191,
     191,   153,   154,   150,   191,   191,   191,   150,   191,   191,
     191,   150,   191,   191,   191,   155,   156,     0,   149,     0,
       0,   193,   194,     0,   195,     0,   197,     0,   196,     0,
     122,     6,     0,   123,     6,     0,   125,     6,     0,   124,
       6,     0,   126,     6,     0,   127,   182,   273,   187,     5,
     183,     6,     0,   128,   182,   273,   183,     6,     0,   129,
     182,     5,   187,     5,   187,   273,   187,   273,   187,     5,
     187,     5,   187,     5,   183,     6,     0,     3,     7,   106,
     182,     5,   187,   271,   183,     6,     0,     3,     7,   105,
     182,     5,   187,   269,   187,   277,   187,   268,   187,   268,
     187,   268,   187,   277,   187,   277,   187,   268,   183,     6,
       0,     3,     7,   104,   182,     5,   187,   269,   187,   269,
     187,   275,   187,   268,   187,   268,   187,   268,   187,   268,
     187,   277,   187,   277,   187,   277,   187,   277,   187,   268,
     183,     6,     0,     3,     7,   112,   182,     5,   187,     3,
     187,     3,   187,     3,   187,   268,   183,     6,     0,     3,
       7,   116,   182,     5,   187,     3,   187,   268,   183,     6,
       0,     3,     7,   133,   182,     5,   187,     3,   187,   268,
     183,     6,     0,     3,     7,   114,   182,     5,   187,   173,
     187,   173,   187,   269,   187,   268,   183,     6,     0,     3,
       7,   117,   182,     5,   187,   277,   183,     6,     0,     3,
       7,   118,   182,     5,   187,   277,   187,     3,   187,   268,
     183,     6,     0,     3,     7,   113,   182,     5,   187,     3,
     183,     6,     0,     3,     7,   119,   182,     5,   187,     3,
     187,   269,   183,     6,     0,     3,     7,   121,   182,     5,
     187,     3,   187,     3,   187,     3,   183,     6,     0,     3,
       7,   120,   182,     5,   187,   271,   183,     6,     0,     3,
       7,   115,   182,     5,   187,     3,   183,     6,     0,     3,
       7,    41,   182,     5,   187,     3,   187,     3,   183,     6,
       0,     3,     7,   131,   182,     5,   187,   277,   183,     6,
       0,     3,     7,   132,   182,     5,   187,   277,   187,     3,
     183,     6,     0,     3,     7,   130,   182,     5,   187,     3,
     183,     6,     0,     3,     7,   134,   182,     5,   187,     3,
     187,   269,   183,     6,     0,     3,     7,   135,   182,     5,
     187,     3,   187,   269,   187,   269,   183,     6,     0,     3,
       7,   142,   182,     5,   187,     3,   187,   269,   187,   269,
     183,     6,     0,     3,     7,   136,   182,     5,   187,     3,
     187,   269,   183,     6,     0,     3,     7,   146,   182,     5,
     187,     3,   187,   269,   187,   269,   183,     6,     0,     3,
       7,   137,   182,     5,   187,     3,   187,   277,   187,   277,
     187,   268,   187,   268,   183,     6,     0,     3,     7,   138,
     182,     5,   187,   277,   183,     6,     0,     3,     7,   139,
     182,   140,   187,   268,   187,     3,   183,     6,     0,     3,
       7,   141,   182,     5,   187,   277,   187,   268,   183,     6,
       0,     3,     7,   143,   182,     5,   187,     5,   187,     3,
     187,     3,   183,     6,     0,     3,     7,   144,   182,     5,
     187,     5,   187,     3,   183,     6,     0,     3,     7,   145,
     182,     3,   187,     3,   183,     6,     0,     0,   198,   199,
       0,   201,     0,   200,     0,   247,     0,   248,     0,   249,
       0,   252,     0,   253,     0,   254,     0,   257,     0,   266,
       0,   267,     0,   256,     0,   255,     0,    33,   182,     5,
     183,     6,     0,    33,   182,     5,   187,   279,   183,     6,
       0,     4,     5,   188,   202,   189,     6,     0,     4,     5,
       4,   271,   188,   202,   189,     6,     0,     0,   202,   204,
       0,   202,   207,     0,   202,   210,     0,   202,   213,     0,
     202,   216,     0,   202,   219,     0,   202,   222,     0,   202,
     225,     0,   202,   228,     0,   202,   231,     0,   202,   234,
       0,   202,   237,     0,   202,   240,     0,   202,   243,     0,
     269,     0,   203,   187,   269,     0,     0,    80,   182,   269,
     187,   269,   187,   269,   183,   205,   188,   203,   189,     6,
       0,   269,     0,   206,   187,   269,     0,     0,    81,   182,
     269,   187,   269,   187,   269,   183,   208,   188,   206,   189,
       6,     0,   269,     0,   209,   187,   269,     0,     0,    82,
     182,   269,   187,   269,   187,   269,   183,   211,   188,   209,
     189,     6,     0,   269,     0,   212,   187,   269,     0,     0,
      77,   182,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   183,   214,   188,   212,   189,     6,     0,
     269,     0,   215,   187,   269,     0,     0,    78,   182,   269,
     187,   269,   187,   269,   187,   269,   187,   269,   187,   269,
     183,   217,   188,   215,   189,     6,     0,   269,     0,   218,
     187,   269,     0,     0,    79,   182,   269,   187,   269,   187,
     269,   187,   269,   187,   269,   187,   269,   183,   220,   188,
     218,   189,     6,     0,   269,     0,   221,   187,   269,     0,
       0,    74,   182,   269,   187,   269,   187,   269,   187,   269,
     187,   269,   187,   269,   187,   269,   187,   269,   187,   269,
     183,   223,   188,   221,   189,     6,     0,   269,     0,   224,
     187,   269,     0,     0,    75,   182,   269,   187,   269,   187,
     269,   187,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   183,   226,   188,   224,   189,     6,     0,
     269,     0,   227,   187,   269,     0,     0,    76,   182,   269,
     187,   269,   187,   269,   187,   269,   187,   269,   187,   269,
     187,   269,   187,   269,   187,   269,   183,   229,   188,   227,
     189,     6,     0,   269,     0,   230,   187,   269,     0,     0,
      71,   182,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   187,   269,   183,   232,   188,   230,   189,
       6,     0,   269,     0,   233,   187,   269,     0,     0,    72,
     182,   269,   187,   269,   187,   269,   187,   269,   187,   269,
     187,   269,   187,   269,   187,   269,   187,   269,   187,   269,
     187,   269,   187,   269,   183,   235,   188,   233,   189,     6,
       0,   269,     0,   236,   187,   269,     0,     0,    73,   182,
     269,   187,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   187,   269,   187,   269,   187,   269,   187,
     269,   187,   269,   183,   238,   188,   236,   189,     6,     0,
     283,     0,   239,   187,   283,     0,     0,    83,   182,   269,
     187,   269,   187,   269,   183,   241,   188,   239,   189,     6,
       0,   283,     0,   242,   187,   283,     0,     0,    84,   182,
     269,   187,   269,   187,   269,   187,   269,   183,   244,   188,
     242,   189,     6,     0,     7,     0,   157,     0,   158,     0,
     159,     0,   160,     0,   178,     0,   179,     0,     4,   245,
     269,     6,     0,     4,   184,   269,   185,   245,   269,     6,
       0,     4,   184,   188,   279,   189,   185,   245,   277,     6,
       0,     4,   184,   185,     7,   277,     6,     0,     4,   246,
       6,     0,     4,   184,   269,   185,   246,     6,     0,     4,
     186,     4,     7,   283,     6,     0,     4,   184,   269,   185,
     186,     4,     7,   283,     6,     0,     4,   186,     4,   245,
     269,     6,     0,     4,   184,   269,   185,   186,     4,   245,
     269,     6,     0,     4,   186,     4,   246,     6,     0,     4,
     184,   269,   185,   186,     4,   246,     6,     0,     4,   186,
      92,   186,     4,     7,   280,     6,     0,     4,   184,   269,
     185,   186,    92,   186,     4,     7,   280,     6,     0,     4,
     186,    93,     7,   281,     6,     0,     4,   184,   269,   185,
     186,    93,     7,   281,     6,     0,    57,   182,     4,   183,
     186,     4,     7,   269,     6,     0,    57,   182,     4,   183,
     186,     4,     7,   283,     6,     0,    38,   182,   269,   183,
       7,   271,     6,     0,    53,    38,   182,   269,   183,     7,
     277,     6,     0,    69,    38,   277,     7,   188,   269,   187,
     269,   187,   269,   189,     6,     0,    45,    46,   277,     7,
     269,     6,     0,    41,   182,   269,   183,     7,   277,     6,
       0,    43,   182,   269,   183,     7,   277,     6,     0,    69,
      41,   277,     7,   188,   269,   187,   269,   187,   269,   189,
       6,     0,    39,   182,   269,   183,     7,   277,     6,     0,
      40,   182,   269,   183,     7,   277,     6,     0,    39,   182,
     269,   183,     7,   277,    49,   271,     6,     0,    47,   182,
     269,   183,     7,   188,   269,   187,   269,   187,     5,   187,
       5,   187,     5,   189,     6,     0,    53,    41,   182,   269,
     183,     7,   277,     6,     0,    41,    64,   182,   269,   183,
       7,   277,     6,     0,    85,   182,   269,   183,     7,   277,
       6,     0,    86,   182,   269,   183,     7,   277,     6,     0,
      87,   182,   269,   183,     7,   277,    91,   277,    88,   269,
       6,     0,    49,    42,   182,   269,   183,     7,   277,     6,
       0,   147,    42,   182,   269,   183,     7,   188,   269,   187,
     277,   189,     6,     0,    50,    42,   182,   269,   183,     7,
     277,     6,     0,    87,    42,    89,    90,   182,   269,   183,
       7,   275,    91,   188,   277,   187,   277,   189,    88,   188,
     269,   187,   269,   189,     6,     0,    87,    42,   182,   269,
     183,     7,   275,    91,   188,   277,   187,   277,   189,    88,
     188,   269,   187,   269,   189,     6,     0,    53,    42,   182,
     269,   183,     7,   277,     6,     0,    42,    64,   182,   269,
     183,     7,   277,     6,     0,    52,    44,   182,   269,   183,
       7,   277,     6,     0,    44,   182,   269,   183,     7,   277,
       6,     0,    53,    44,   182,   269,   183,     7,   277,     6,
       0,    59,   271,   188,   250,   189,     0,    58,   188,   271,
     187,   271,   187,   269,   189,   188,   250,   189,     0,    60,
     271,   188,   250,   189,     0,    61,   188,   271,   187,   269,
     189,   188,   250,   189,     0,   252,     0,   251,     0,   249,
       0,     0,   251,   248,     0,   251,    38,   188,   279,   189,
       6,     0,   251,    41,   188,   279,   189,     6,     0,   251,
      42,   188,   279,   189,     6,     0,    63,   188,   251,   189,
       0,    66,   188,   251,   189,     0,    66,     4,   184,   269,
     185,     6,     0,    66,   103,     6,     0,    92,   280,   188,
     251,   189,     0,     4,   283,     6,     0,     4,   269,     6,
       0,    57,   182,     4,   183,   186,     4,     6,     0,    99,
       6,     0,    37,     6,     0,    94,   182,   269,     8,   269,
     183,     0,    94,   182,   269,     8,   269,     8,   269,   183,
       0,    94,     4,    95,   188,   269,     8,   269,   189,     0,
      94,     4,    95,   188,   269,     8,   269,     8,   269,   189,
       0,    96,     0,   102,     4,     0,   100,     0,   101,     4,
       6,     0,    97,   182,   269,   183,     0,    98,     0,    62,
      38,   188,   269,   187,   271,   189,     6,     0,    62,    38,
     188,   269,   187,   271,   187,   271,   187,   269,   189,     6,
       0,    62,    38,   188,   269,   187,   271,   187,   271,   187,
     271,   187,   269,   189,     6,     0,    62,    41,   188,   269,
     187,   271,   189,     6,     0,    62,    41,   188,   269,   187,
     271,   187,   271,   187,   269,   189,     6,     0,    62,    41,
     188,   269,   187,   271,   187,   271,   187,   271,   187,   269,
     189,     6,     0,     0,    62,    41,   188,   269,   187,   271,
     189,   258,   188,   264,   189,     6,     0,     0,    62,    41,
     188,   269,   187,   271,   187,   271,   187,   269,   189,   259,
     188,   264,   189,     6,     0,     0,    62,    41,   188,   269,
     187,   271,   187,   271,   187,   271,   187,   269,   189,   260,
     188,   264,   189,     6,     0,    62,    42,   188,   269,   187,
     271,   189,     6,     0,    62,    42,   188,   269,   187,   271,
     187,   271,   187,   269,   189,     6,     0,    62,    42,   188,
     269,   187,   271,   187,   271,   187,   271,   187,   269,   189,
       6,     0,     0,    62,    42,   188,   269,   187,   271,   189,
     261,   188,   264,   189,     6,     0,     0,    62,    42,   188,
     269,   187,   271,   187,   271,   187,   269,   189,   262,   188,
     264,   189,     6,     0,     0,    62,    42,   188,   269,   187,
     271,   187,   271,   187,   271,   187,   269,   189,   263,   188,
     264,   189,     6,     0,   265,     0,   264,   265,     0,    70,
     188,   277,   187,   277,   187,   277,   189,     6,     0,    70,
     188,   277,   187,   277,   189,     6,     0,    65,     6,     0,
      51,    41,   277,     7,   269,     6,     0,    51,    41,   277,
       7,   269,    54,    56,   269,     6,     0,    51,    41,   277,
       7,   269,    54,    55,   269,     6,     0,    51,    42,   188,
     269,   189,     7,   277,     6,     0,    48,    42,   188,   269,
     189,     7,   277,     6,     0,    51,    44,   188,   269,   189,
       7,   277,     6,     0,    65,    42,   277,     7,   269,     6,
       0,    65,    42,   277,     6,     0,    67,     6,     0,    68,
       6,     0,   107,     0,   108,     0,   109,     0,   110,     0,
     111,     0,   270,     0,   182,   269,   183,     0,   172,   269,
       0,   171,   269,     0,   177,   269,     0,   269,   172,   269,
       0,   269,   171,   269,     0,   269,   173,   269,     0,   269,
     174,   269,     0,   269,   175,   269,     0,   269,   181,   269,
       0,   269,   167,   269,     0,   269,   169,   269,     0,   269,
     168,   269,     0,   269,   170,   269,     0,   269,   164,   269,
       0,   269,   165,   269,     0,   269,   163,   269,     0,   269,
     162,   269,     0,   269,   161,   269,     8,   269,     0,    12,
     182,   269,   183,     0,    13,   182,   269,   183,     0,    14,
     182,   269,   183,     0,    15,   182,   269,   183,     0,    16,
     182,   269,   183,     0,    17,   182,   269,   183,     0,    18,
     182,   269,   183,     0,    19,   182,   269,   183,     0,    20,
     182,   269,   183,     0,    22,   182,   269,   183,     0,    23,
     182,   269,   187,   269,   183,     0,    24,   182,   269,   183,
       0,    25,   182,   269,   183,     0,    26,   182,   269,   183,
       0,    27,   182,   269,   183,     0,    28,   182,   269,   183,
       0,    29,   182,   269,   183,     0,    30,   182,   269,   187,
     269,   183,     0,    31,   182,   269,   187,   269,   183,     0,
      32,   182,   269,   187,   269,   183,     0,    21,   182,   269,
     183,     0,    12,   184,   269,   185,     0,    13,   184,   269,
     185,     0,    14,   184,   269,   185,     0,    15,   184,   269,
     185,     0,    16,   184,   269,   185,     0,    17,   184,   269,
     185,     0,    18,   184,   269,   185,     0,    19,   184,   269,
     185,     0,    20,   184,   269,   185,     0,    22,   184,   269,
     185,     0,    23,   184,   269,   187,   269,   185,     0,    24,
     184,   269,   185,     0,    25,   184,   269,   185,     0,    26,
     184,   269,   185,     0,    27,   184,   269,   185,     0,    28,
     184,   269,   185,     0,    29,   184,   269,   185,     0,    30,
     184,   269,   187,   269,   185,     0,    31,   184,   269,   187,
     269,   185,     0,    32,   184,   269,   187,   269,   185,     0,
      21,   184,   269,   185,     0,     3,     0,     9,     0,    10,
       0,    11,     0,     4,     0,     4,   184,   269,   185,     0,
       4,   246,     0,     4,   184,   269,   185,   246,     0,     4,
     186,     4,     0,     4,   184,   269,   185,   186,     4,     0,
       4,   186,     4,   246,     0,     4,   184,   269,   185,   186,
       4,   246,     0,   272,     0,   172,   271,     0,   171,   271,
       0,   271,   172,   271,     0,   271,   171,   271,     0,   188,
     269,   187,   269,   187,   269,   187,   269,   187,   269,   189,
       0,   188,   269,   187,   269,   187,   269,   187,   269,   189,
       0,   188,   269,   187,   269,   187,   269,   189,     0,   182,
     269,   187,   269,   187,   269,   183,     0,     0,   182,   274,
     183,     0,     5,     0,   274,   187,     5,     0,     0,   188,
     276,   189,     0,   182,   276,   183,     0,   277,     0,   276,
     187,   277,     0,   269,     0,   278,     0,   188,   279,   189,
       0,   172,   188,   279,   189,     0,   269,     8,   269,     0,
     269,     8,   269,     8,   269,     0,     4,   184,   185,     0,
     172,     4,   184,   185,     0,     4,   184,   188,   279,   189,
     185,     0,   172,     4,   184,   188,   279,   189,   185,     0,
     269,     0,   278,     0,   279,   187,   269,     0,   279,   187,
     278,     0,   188,   269,   187,   269,   187,   269,   187,   269,
     189,     0,   188,   269,   187,   269,   187,   269,   189,     0,
       4,     0,     4,   186,    92,   186,     4,     0,   188,   282,
     189,     0,     4,   184,   269,   185,   186,    93,     0,   280,
       0,   282,   187,   280,     0,     5,     0,    35,   182,   283,
     187,   283,   183,     0,    36,   182,   283,   183,     0,    34,
     182,   283,   183,     0,    34,   182,   283,   187,   279,   183,
       0,    34,   182,     4,   186,     4,   183,     0,    34,   182,
       4,   184,   269,   185,   186,     4,   183,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   170,   172,   173,   174,   181,   183,   186,   194,   208,
     220,   222,   225,   227,   228,   231,   237,   242,   243,   244,
     247,   251,   254,   260,   265,   271,   279,   284,   288,   294,
     299,   303,   308,   312,   315,   320,   324,   328,   332,   337,
     341,   344,   348,   352,   356,   360,   364,   368,   371,   375,
     378,   382,   385,   394,   398,   404,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   420,   425,
     442,   447,   453,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   474,   477,   481,
     481,   493,   496,   500,   500,   512,   515,   519,   519,   531,
     534,   538,   538,   552,   555,   559,   559,   573,   576,   580,
     580,   594,   597,   601,   601,   619,   622,   626,   626,   644,
     647,   651,   651,   669,   672,   676,   676,   695,   698,   702,
     702,   721,   724,   728,   728,   747,   753,   760,   760,   774,
     780,   787,   787,   806,   808,   809,   810,   811,   814,   816,
     819,   850,   884,   931,   946,   955,   970,   982,   996,  1019,
    1043,  1055,  1069,  1081,  1095,  1115,  1137,  1149,  1167,  1178,
    1184,  1203,  1217,  1223,  1229,  1248,  1254,  1260,  1276,  1283,
    1289,  1295,  1306,  1317,  1342,  1348,  1367,  1388,  1396,  1402,
    1408,  1417,  1423,  1429,  1441,  1447,  1452,  1457,  1464,  1466,
    1467,  1470,  1475,  1480,  1495,  1510,  1531,  1549,  1557,  1562,
    1572,  1586,  1659,  1679,  1686,  1690,  1712,  1724,  1734,  1755,
    1776,  1797,  1803,  1808,  1813,  1817,  1827,  1836,  1843,  1852,
    1857,  1862,  1867,  1867,  1877,  1877,  1887,  1887,  1900,  1905,
    1910,  1915,  1915,  1926,  1926,  1938,  1938,  1952,  1956,  1961,
    1988,  2012,  2022,  2041,  2059,  2077,  2099,  2120,  2141,  2155,
    2176,  2181,  2192,  2194,  2195,  2196,  2197,  2200,  2202,  2203,
    2204,  2205,  2206,  2207,  2208,  2209,  2216,  2217,  2218,  2219,
    2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,
    2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2249,  2250,
    2251,  2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2274,
    2279,  2280,  2281,  2285,  2296,  2313,  2324,  2343,  2359,  2375,
    2391,  2408,  2413,  2417,  2421,  2425,  2431,  2436,  2440,  2444,
    2450,  2454,  2459,  2463,  2468,  2472,  2476,  2482,  2488,  2495,
    2501,  2505,  2509,  2519,  2526,  2537,  2551,  2567,  2587,  2611,
    2617,  2621,  2625,  2636,  2641,  2652,  2657,  2675,  2680,  2693,
    2699,  2705,  2710,  2718,  2731,  2735,  2753,  2767
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tDOUBLE", "tSTRING", "tBIGSTR", "tEND", 
  "tAFFECT", "tDOTS", "tPi", "tMPI_Rank", "tMPI_Size", "tExp", "tLog", 
  "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", "tTan", "tRand", 
  "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", 
  "tCeil", "tFmod", "tModulo", "tHypot", "tPrintf", "tSprintf", "tStrCat", 
  "tStrPrefix", "tDraw", "tPoint", "tCircle", "tEllipse", "tLine", 
  "tSurface", "tSpline", "tVolume", "tCharacteristic", "tLength", 
  "tParametric", "tElliptic", "tPlane", "tRuled", "tTransfinite", 
  "tComplex", "tPhysical", "tUsing", "tBump", "tProgression", "tPlugin", 
  "tRotate", "tTranslate", "tSymmetry", "tDilate", "tExtrude", 
  "tDuplicata", "tLoop", "tRecombine", "tDelete", "tCoherence", 
  "tIntersect", "tAttractor", "tLayers", "tScalarTetrahedron", 
  "tVectorTetrahedron", "tTensorTetrahedron", "tScalarTriangle", 
  "tVectorTriangle", "tTensorTriangle", "tScalarLine", "tVectorLine", 
  "tTensorLine", "tScalarPoint", "tVectorPoint", "tTensorPoint", 
  "tText2D", "tText3D", "tBSpline", "tBezier", "tNurbs", "tOrder", 
  "tWith", "tBounds", "tKnots", "tColor", "tColorTable", "tFor", "tIn", 
  "tEndFor", "tIf", "tEndIf", "tExit", "tReturn", "tCall", "tFunction", 
  "tMesh", "tB_SPLINE_SURFACE_WITH_KNOTS", "tB_SPLINE_CURVE_WITH_KNOTS", 
  "tCARTESIAN_POINT", "tTRUE", "tFALSE", "tUNSPECIFIED", "tU", "tV", 
  "tEDGE_CURVE", "tVERTEX_POINT", "tORIENTED_EDGE", "tPLANE", 
  "tFACE_OUTER_BOUND", "tEDGE_LOOP", "tADVANCED_FACE", "tVECTOR", 
  "tDIRECTION", "tAXIS2_PLACEMENT_3D", "tISO", "tENDISO", "tENDSEC", 
  "tDATA", "tHEADER", "tFILE_DESCRIPTION", "tFILE_SCHEMA", "tFILE_NAME", 
  "tMANIFOLD_SOLID_BREP", "tCLOSED_SHELL", 
  "tADVANCED_BREP_SHAPE_REPRESENTATION", "tFACE_BOUND", 
  "tCYLINDRICAL_SURFACE", "tCONICAL_SURFACE", "tCIRCLE", "tTRIMMED_CURVE", 
  "tGEOMETRIC_SET", "tCOMPOSITE_CURVE_SEGMENT", "tCONTINUOUS", 
  "tCOMPOSITE_CURVE", "tTOROIDAL_SURFACE", "tPRODUCT_DEFINITION", 
  "tPRODUCT_DEFINITION_SHAPE", "tSHAPE_DEFINITION_REPRESENTATION", 
  "tELLIPSE", "tTrimmed", "tSolid", "tEndSolid", "tVertex", "tFacet", 
  "tNormal", "tOuter", "tLoopSTL", "tEndLoop", "tEndFacet", "tAFFECTPLUS", 
  "tAFFECTMINUS", "tAFFECTTIMES", "tAFFECTDIVIDE", "'?'", "tOR", "tAND", 
  "tEQUAL", "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "tCROSSPRODUCT", 
  "'!'", "tPLUSPLUS", "tMINUSMINUS", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "','", "'{'", "'}'", "All", "SignedDouble", 
  "STLFormatItem", "StepFormatItems", "StepFormatItem", "StepSpecial", 
  "StepHeaderItem", "StepDataItem", "GeomFormatList", "GeomFormat", 
  "Printf", "View", "Views", "ScalarPointValues", "ScalarPoint", "@1", 
  "VectorPointValues", "VectorPoint", "@2", "TensorPointValues", 
  "TensorPoint", "@3", "ScalarLineValues", "ScalarLine", "@4", 
  "VectorLineValues", "VectorLine", "@5", "TensorLineValues", 
  "TensorLine", "@6", "ScalarTriangleValues", "ScalarTriangle", "@7", 
  "VectorTriangleValues", "VectorTriangle", "@8", "TensorTriangleValues", 
  "TensorTriangle", "@9", "ScalarTetrahedronValues", "ScalarTetrahedron", 
  "@10", "VectorTetrahedronValues", "VectorTetrahedron", "@11", 
  "TensorTetrahedronValues", "TensorTetrahedron", "@12", "Text2DValues", 
  "Text2D", "@13", "Text3DValues", "Text3D", "@14", "NumericAffectation", 
  "NumericIncrement", "Affectation", "Shape", "Transform", 
  "MultipleShape", "ListOfShapes", "Duplicata", "Delete", "Colorify", 
  "Command", "Loop", "Extrude", "@15", "@16", "@17", "@18", "@19", "@20", 
  "ExtrudeParameters", "ExtrudeParameter", "Transfini", "Coherence", 
  "BoolExpr", "FExpr", "FExpr_Single", "VExpr", "VExpr_Single", 
  "ListOfStrings", "RecursiveListOfStrings", "ListOfListOfDouble", 
  "RecursiveListOfListOfDouble", "ListOfDouble", "FExpr_Multi", 
  "RecursiveListOfDouble", "ColorExpr", "ListOfColor", 
  "RecursiveListOfColor", "StringExpr", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   190,   190,   190,   190,   191,   191,   192,   192,   192,
     193,   193,   194,   194,   194,   195,   195,   195,   195,   195,
     196,   196,   196,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   198,   198,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   200,   200,
     201,   201,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   203,   205,
     204,   206,   206,   208,   207,   209,   209,   211,   210,   212,
     212,   214,   213,   215,   215,   217,   216,   218,   218,   220,
     219,   221,   221,   223,   222,   224,   224,   226,   225,   227,
     227,   229,   228,   230,   230,   232,   231,   233,   233,   235,
     234,   236,   236,   238,   237,   239,   239,   241,   240,   242,
     242,   244,   243,   245,   245,   245,   245,   245,   246,   246,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   249,   249,   250,   250,
     250,   251,   251,   251,   251,   251,   252,   253,   253,   253,
     254,   255,   255,   255,   255,   255,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   257,   257,   257,   257,
     257,   257,   258,   257,   259,   257,   260,   257,   257,   257,
     257,   261,   257,   262,   257,   263,   257,   264,   264,   265,
     265,   265,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   267,   268,   268,   268,   268,   268,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   271,   271,   271,   271,   271,   272,   272,   272,   272,
     273,   273,   274,   274,   275,   275,   275,   276,   276,   277,
     277,   277,   277,   278,   278,   278,   278,   278,   278,   279,
     279,   279,   279,   280,   280,   280,   280,   281,   281,   282,
     282,   283,   283,   283,   283,   283,   283,   283
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     1,     1,     1,     2,     1,     2,     1,    21,     1,
       0,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       7,     5,    17,     9,    23,    31,    15,    11,    11,    15,
       9,    13,     9,    11,    13,     9,     9,    11,     9,    11,
       9,    11,    13,    13,    11,    13,    17,     9,    11,    11,
      13,    11,     9,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       6,     8,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     0,
      13,     1,     3,     0,    13,     1,     3,     0,    13,     1,
       3,     0,    19,     1,     3,     0,    19,     1,     3,     0,
      19,     1,     3,     0,    25,     1,     3,     0,    25,     1,
       3,     0,    25,     1,     3,     0,    31,     1,     3,     0,
      31,     1,     3,     0,    31,     1,     3,     0,    13,     1,
       3,     0,    15,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     9,     6,     3,     6,     6,     9,     6,     9,
       5,     8,     8,    11,     6,     9,     9,     9,     7,     8,
      12,     6,     7,     7,    12,     7,     7,     9,    17,     8,
       8,     7,     7,    11,     8,    12,     8,    22,    20,     8,
       8,     8,     7,     8,     5,    11,     5,     9,     1,     1,
       1,     0,     2,     6,     6,     6,     4,     4,     6,     3,
       5,     3,     3,     7,     2,     2,     6,     8,     8,    10,
       1,     2,     1,     3,     4,     1,     8,    12,    14,     8,
      12,    14,     0,    12,     0,    16,     0,    18,     8,    12,
      14,     0,    12,     0,    16,     0,    18,     1,     2,     9,
       7,     2,     6,     9,     9,     8,     8,     8,     6,     4,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
       4,     4,     4,     4,     6,     6,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     6,     6,     6,     4,     1,
       1,     1,     1,     1,     4,     2,     5,     3,     6,     4,
       7,     1,     2,     2,     3,     3,    11,     9,     7,     7,
       0,     3,     1,     3,     0,     3,     3,     1,     3,     1,
       1,     3,     4,     3,     5,     3,     4,     6,     7,     1,
       1,     3,     3,     9,     7,     1,     5,     3,     6,     1,
       3,     1,     6,     4,     4,     6,     6,     9
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       0,     0,     7,     9,     0,     2,     1,     3,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    14,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,     0,
     225,     0,   222,     0,     0,     0,    54,    56,    55,    57,
      58,    59,    60,    61,    62,    67,    66,    63,    64,    65,
       5,     0,     0,     0,    15,    16,    18,    17,    19,   350,
     350,     0,   329,   333,   381,   143,   330,   331,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   147,     0,     0,     0,
     148,   149,     0,     0,     0,     0,     0,     0,   267,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     0,   201,     0,     0,     0,
     201,   260,   261,     0,     0,     0,     0,     0,     0,   375,
       0,     0,     0,     0,     0,   214,     0,   221,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,   269,   271,     0,     0,
       0,     0,     0,     0,     0,     0,   154,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   333,     0,     0,   359,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   342,     0,     0,     0,     0,   201,
     201,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,   337,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   381,     0,
       0,     0,   268,     0,     0,   369,   370,     0,     0,   143,
       0,     0,     0,     0,   150,     0,   285,   284,   282,   283,
     278,   280,   279,   281,   273,   272,   274,   275,   276,   277,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   344,   200,     0,   199,   198,     0,     0,
       0,     0,     0,     0,     0,     0,   206,   202,   259,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,     0,     0,
      21,     0,   334,   339,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,   287,   308,   288,   309,   289,   310,
     290,   311,   291,   312,   292,   313,   293,   314,   294,   315,
     295,   316,   307,   328,   296,   317,     0,     0,   298,   319,
     299,   320,   300,   321,   301,   322,   302,   323,   303,   324,
       0,     0,     0,     0,     0,     0,     0,     0,   384,     0,
       0,   383,     0,     0,     0,     0,     0,     0,     0,     0,
     160,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   365,     0,     0,     0,
     361,   363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   194,
     196,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   353,     0,   350,     0,   336,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,   371,   372,
       0,     0,     0,     0,     0,   155,   156,   158,     0,     0,
     379,     0,   164,   286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,     0,   362,     0,   171,     0,
       0,     0,     0,   252,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   258,   208,     0,     0,     0,     0,     0,
     354,     0,   376,     0,     0,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,   263,   264,   265,   266,     0,     0,     0,
       0,     0,     0,     0,    20,     0,   338,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   297,   318,   304,   325,   305,   326,   306,   327,
       0,   386,   385,   382,     0,   143,     0,     0,     0,     0,
     151,     0,     0,     0,   377,    69,   168,   175,     0,   176,
       0,   172,     0,   173,   192,     0,     0,   364,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,   201,     0,     0,     0,
     232,     0,   241,     0,     0,     0,     0,     0,   181,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     350,   340,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,   162,     0,   380,     0,   180,   190,
     367,     0,     0,   256,   184,   186,     0,     0,   255,   257,
     191,   169,   179,   189,   193,     0,     0,     0,   349,     0,
     348,     0,     0,   226,     0,   229,     0,     0,   238,     0,
     203,   204,   205,     0,     0,   354,     0,   357,     0,     0,
       0,     0,   374,     0,   218,   217,     0,     0,     0,     0,
       0,    23,     0,    32,     0,    36,     0,    30,     0,     0,
      35,     0,    40,    38,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,   157,   159,     0,   165,     0,
     177,   368,     0,   254,   253,   166,   167,   201,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,   356,     0,
     355,     0,     0,     0,     0,     0,     0,     0,   354,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   387,     0,   378,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,     0,     0,     0,     0,     0,   358,     0,     0,
     373,   219,     0,     0,    37,     0,     0,     0,     0,    27,
       0,    33,     0,    39,    28,    41,     0,    44,     0,    48,
      49,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     163,     0,   195,     0,     0,     0,     0,   234,     0,   251,
       0,     0,   248,   243,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    93,    97,   137,     0,     0,
     346,   227,     0,   230,     0,     0,     0,   233,   239,     0,
       0,   242,   170,   174,     0,     0,   185,     0,     0,     0,
       0,     0,    31,    34,    42,     0,    43,    50,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   236,     0,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,   228,     0,   231,     0,     0,
       0,   240,     0,     0,     0,     0,     0,     0,    26,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    91,     0,    95,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   250,   244,     0,     0,
       0,     0,     0,     0,    46,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    90,    92,    94,    96,
      98,   136,   138,     0,   139,   178,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   105,   109,     0,     0,   237,   249,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   140,   142,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,   103,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,    24,     0,     0,     0,     0,     0,     0,   100,   102,
     104,   106,   108,   110,     0,     0,     0,     0,   113,   117,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,   115,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     114,   116,   118,   120,   122,     0,   125,   129,   133,    25,
       0,     0,     0,     0,     0,     0,     0,   123,     0,   127,
       0,   131,     0,     0,     0,     0,     0,     0,   124,   126,
     128,   130,   132,   134,     0,     0,     0
};

static const short yydefgoto[] =
{
    1704,    82,     5,     6,    19,    20,    21,    22,     7,    66,
      67,    68,   414,  1451,   610,  1389,  1453,   611,  1390,  1455,
     612,  1391,  1588,   613,  1559,  1590,   614,  1560,  1592,   615,
    1561,  1649,   616,  1635,  1651,   617,  1636,  1653,   618,  1637,
    1686,   619,  1680,  1688,   620,  1681,  1690,   621,  1682,  1457,
     622,  1392,  1523,   623,  1459,   135,   237,    69,   537,   524,
     525,   526,   527,    73,    74,    75,    76,    77,  1096,  1354,
    1428,  1099,  1359,  1432,  1249,  1250,    78,    79,   907,   326,
     138,   343,   170,   232,   407,  1003,  1106,  1107,   328,   467,
     191,   684,   821,   139
};

static const short yypact[] =
{
    2156,   137,-32768,-32768,   -97,-32768,   480,  2336,-32768,    10,
     108,   141,   148,   155,   193,   260,   204,   215,   224,-32768,
  -32768,-32768,-32768,  1734,   258,   320,   261,   262,   269,   -43,
     227,   275,   304,   448,   317,   461,   470,   477,   133,   488,
     546,   372,   377,   -80,   -80,   383,   363,   391,   532,    14,
     590,   593,    49,   440,   450,   -25,     2,    15,-32768,   454,
  -32768,   642,-32768,   656,   659,   631,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,   673,    10,  2359,-32768,-32768,-32768,-32768,-32768,   502,
     502,   681,-32768,   -90,     3,-32768,-32768,-32768,-32768,  -128,
     -60,   -55,   -18,    31,   116,   151,   266,   285,   294,   323,
     351,   357,   360,   364,   382,   386,   398,   409,   413,   437,
     508,   519,   527,-32768,-32768,-32768,-32768,  1944,  1944,  1944,
  -32768,-32768,  1944,   346,    40,  1944,   700,   694,-32768,   711,
     719,-32768,  1944,  1944,  1944,   574,  1944,   594,  1944,  1944,
    1116,  1944,   606,   624,   625,  1116,   621,   622,   629,   633,
     635,   636,   637,   809,   -80,   -80,   -80,  1944,  1944,  -114,
  -32768,     1,   -80,   638,   639,   640,-32768,  1116,   641,   817,
  -32768,-32768,-32768,  1116,  1116,  1944,  1944,   -51,  1944,   643,
    1944,   645,   729,  1944,  1944,-32768,   828,-32768,   654,-32768,
      10,   655,   657,   658,   660,   661,   662,   664,   665,   666,
     667,   671,   678,   688,   689,   690,   691,   692,   695,   696,
     697,   699,   701,   702,   703,   704,   707,   708,   709,   710,
     712,   833,   713,   693,   715,  1944,   837,-32768,   -80,-32768,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,    47,    41,    41,   714,   714,   714,  5894,   875,
    1976,  5244,   161,   717,   892,   744,-32768,-32768,  1944,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,-32768,   -76,  5917,  5940,  5963,  1944,  5986,
    1944,  6009,  6032,   359,  1470,  1976,  1700,   903,-32768,  6055,
    1944,  1944,  1944,   913,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,   738,     9,-32768,-32768,  2808,  2829,   -80,   -80,   567,
     567,   156,  1944,  1944,  1944,   891,   254,  1944,-32768,  2223,
     915,   917,  6078,  6101,   836,  1944,  6124,   835,  2850,-32768,
     740,  1763,  6147,-32768,  1944,   784,   937,   940,   941,   942,
     943,   947,   948,   949,   950,   951,   952,   953,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   832,
     970,   974,   975,   976,   979,   978,-32768,   -49,   981,   983,
     982,  5269,   144,   122,   -11,  6170,  5294,  6193,  5319,  6216,
    5344,  6239,  5369,  6262,  5394,  6285,  5419,  6308,  5444,  6331,
    5469,  6354,  5494,  6377,  5519,  6400,  5544,  2871,  2892,  6423,
    5569,  6446,  5594,  6469,  5619,  6492,  5644,  6515,  5669,  6538,
    5694,  2913,  2934,  2955,  2976,  2997,  3018,   214,-32768,     5,
     797,   807,-32768,  1116,  2006,  1700,-32768,   286,   146,    41,
    1944,   985,   988,     7,-32768,  1889,  1269,   524,   497,   497,
     439,   439,   439,   439,    35,    35,   714,   714,   714,   714,
     987,  1976,   989,   990,   992,  6561,   993,  6584,   994,   995,
     404,   399,  1976,   442,  1944,  1944,   996,  2001,  6607,  6630,
    1944,  2182,  2440,  6653,  6676,  6699,  6722,  6745,   808,   -80,
    1944,  1944,-32768,-32768,-32768,   806,  2401,-32768,   815,  1944,
    3039,  3060,  3081,  -139,   -42,   -32,-32768,-32768,-32768,  1944,
    5719,-32768,   820,   821,  1003,  1004,   831,  6768,  1007,   829,
    1944,  2273,  1944,  1944,-32768,  6791,   863,   847,   848,   849,
     850,   852,   853,   854,   855,   856,   857,   858,   859,   861,
     880,   881,   883,   885,   886,   887,   888,   889,   894,   895,
     896,   897,   899,   904,   921,   923,   926,-32768,  1013,   867,
  -32768,   927,   -27,-32768,-32768,   933,   934,   935,   936,   939,
     969,   973,   977,   984,   986,   991,   998,   999,  1000,  1071,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,  1944,  1944,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1015,-32768,  1976,
      41,-32768,  1072,  1976,   938,    44,  1944,  1073,  1118,   890,
  -32768,  1115,   968,     2,  1150,  1944,-32768,    24,   -80,  1116,
    1116,  1154,  1116,  1157,  1116,  1116,-32768,  1976,   716,   446,
  -32768,  1911,  1063,  1001,  1158,  1160,  1165,   388,  1167,  1168,
    1177,  1180,  1181,  1183,  1185,  1191,   208,  3102,  3123,-32768,
  -32768,  2463,   -80,   -80,   -80,  1976,  1976,  1976,  1173,  1206,
    1944,  1944,  1116,  1116,  1944,  1207,  1116,  1209,  3144,-32768,
    1937,   610,  1213,  1066,  1219,  1944,  1944,   -80,  1226,  1236,
    1067,  1238,  1239,  1116,  1116,  1240,   -80,  1243,  1246,  1116,
    1116,  1247,  1248,  1250,  1251,  1252,  1116,   237,  1116,  1253,
    1255,  1256,  1266,  1267,-32768,  1265,   502,  1268,-32768,  1021,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,-32768,  6814,  5744,  6837,  5769,  6860,
    5794,  6883,  5819,  5844,  1090,    76,  1091,-32768,  1700,-32768,
      26,   331,  1094,  1270,  1205,-32768,-32768,-32768,     2,  1944,
  -32768,   458,-32768,  2065,  1276,    22,    29,  1278,  1116,  1280,
    1116,  1283,  1284,   462,-32768,  1976,-32768,  1944,-32768,  1944,
    1116,  1116,  1116,-32768,   297,  1116,  1116,  1116,  1116,  1116,
    1116,  1116,   609,  1944,  1944,  1944,  1088,   -92,   -86,   -73,
     465,   468,   469,-32768,-32768,  3165,  3186,  1286,  1288,  6906,
    -135,  1204,-32768,  1944,  1944,  1944,-32768,  1108,    10,  1112,
    3207,  3228,   330,  1113,  1119,  1114,  1120,  1121,  1122,  1123,
    1124,   343,  1134,  1126,  1139,  1136,  1137,  1140,  1141,  1142,
    1143,  1148,-32768,-32768,-32768,-32768,-32768,  1145,  1146,  1162,
    1163,  1164,  1169,  1166,-32768,  1170,   144,  1300,  3249,  3270,
    3291,  3312,  3333,  3354,  3375,  3396,  3417,  3438,  3459,  3480,
    3501,  3522,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1172,-32768,-32768,-32768,  1116,    41,  1944,  1301,  1322,     7,
  -32768,  1349,  5869,     2,-32768,-32768,-32768,-32768,   -80,-32768,
    1350,-32768,  1353,-32768,-32768,  1175,   472,  2065,  3543,  1357,
    1358,  1365,  1944,  1944,  1375,  1376,  1377,  1378,  1379,  1394,
    1395,-32768,  1769,  2486,  6929,  2345,   567,   -80,  1396,   -80,
    1402,   -80,  1412,  1413,  1414,  1416,  1944,  1944,-32768,-32768,
    1417,  1116,  1116,  1334,  1116,  2382,   291,  6952,  1944,    10,
    1423,  1944,  1116,  1421,  1425,  1429,  1273,  1441,   237,  1443,
    1458,  1944,  1457,  1462,  1460,  1461,  1465,   237,  1944,  1944,
    1944,  1116,  1463,  1467,   237,  1944,  1468,  1469,  1471,  1944,
     502,-32768,-32768,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1472,  1497,  1498,
    1242,-32768,  1501,  1499,-32768,  1289,-32768,    34,-32768,-32768,
  -32768,  1293,  1944,-32768,-32768,-32768,  1356,  1424,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  1549,  1503,  1344,-32768,  1944,
  -32768,  1321,   212,-32768,   216,-32768,  1345,   313,-32768,  1346,
  -32768,-32768,-32768,  3564,  3585,  -135,   109,-32768,   492,  1347,
    1434,  1944,-32768,  1944,-32768,-32768,  3606,    10,  1355,  3627,
    1352,-32768,  1369,-32768,  1370,-32768,  1359,-32768,  1371,  6975,
  -32768,  1372,-32768,-32768,  1360,  1361,  6998,  3648,  7021,  1373,
  -32768,  1362,  1380,  3669,  1374,  1381,-32768,  3690,  1382,  3711,
    3732,  3753,  3774,  3795,  3816,  3837,  3858,  3879,  3900,  3921,
    3942,  3963,  3984,  1383,-32768,-32768,-32768,     2,-32768,  1447,
  -32768,-32768,  4005,-32768,-32768,-32768,-32768,   567,  2411,-32768,
    1671,  1671,    48,  1671,    48,  1944,  1944,  1445,-32768,  1116,
  -32768,  1116,  1944,  2509,  2532,  1116,  1415,  1556,  -135,   237,
    1564,  1944,  1562,   237,  1565,  1567,  1566,  1575,  1577,  1944,
    1584,  1116,  1594,  1595,  1944,  1570,  1601,  1944,  1604,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,-32768,  1605,-32768,  1608,  1426,  1944,-32768,
    1671,  1671,  1944,  2555,   321,  2578,   324,  1616,  1422,   -41,
  -32768,  2601,   353,   -40,  2624,  2647,  1435,-32768,  1427,  1658,
  -32768,-32768,  1436,    10,-32768,  1437,  1439,  1440,  4026,-32768,
    1446,-32768,  1448,-32768,-32768,-32768,  7044,-32768,  1450,-32768,
  -32768,  7067,  1449,-32768,  7090,  1452,  4047,  4068,  4089,  4110,
    4131,  4152,  4173,  4194,  4215,  7113,  7136,  7159,  7182,  4236,
  -32768,  1456,-32768,  2670,  1968,  1624,  1944,  1638,  1944,-32768,
    1116,  1639,-32768,  1640,  1944,  1642,  1643,  1644,  1116,  1116,
  -32768,  1645,    10,   237,   237,   237,   237,  1647,  1648,  1649,
     237,  1650,  1651,  1653,  1660,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,-32768,-32768,-32768,-32768,  1944,  1661,
  -32768,-32768,  2693,-32768,  1475,  2716,  1480,-32768,-32768,  1482,
    2739,-32768,-32768,-32768,  1481,  1483,-32768,    10,  1489,  1490,
    1495,  1496,-32768,-32768,-32768,  1517,-32768,-32768,-32768,  1518,
    4257,  4278,  4299,  4320,  4341,  4362,  4383,  4404,  4425,  1519,
    1521,  1527,  1537,  7205,  1539,  1722,    48,  1723,  1116,    48,
    1725,  1116,  1618,  1582,   237,   237,  1727,  1728,   237,  1735,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,    41,-32768,  1737,-32768,   -39,-32768,  1579,   493,
     -31,-32768,  1587,  1588,  1614,    10,  1589,  1619,-32768,-32768,
    1625,  1626,  4446,  4467,  4488,  4509,  4530,  4551,  4572,  4593,
    4614,   496,  2065,   523,  2065,   526,  2065,   529,-32768,  1622,
    1623,  1801,    48,  1116,  1805,  1807,    48,  1726,  1944,    10,
     237,  1116,  1810,  1811,  1944,  1944,  1944,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1818,  1944,  1828,  1944,  1829,    41,
    1830,    41,  1831,-32768,   -29,  1652,-32768,-32768,   -20,  1656,
    4635,    10,  1659,  1662,-32768,-32768,  4656,  4677,  4698,  4719,
    4740,  4761,  7228,  7251,  7274,  2065,-32768,  2065,-32768,  2065,
  -32768,-32768,-32768,   562,-32768,-32768,  1832,  1834,  1839,  1944,
    1944,  1692,   237,  1116,  1944,  1944,  1944,  1944,  1944,  1944,
  -32768,-32768,-32768,    41,  1844,-32768,-32768,-32768,  4782,  2762,
    1695,  1665,  1667,  4803,  4824,  4845,  4866,  4887,  4908,  1668,
    1669,  1670,-32768,-32768,  1944,  1849,-32768,  1116,   237,  1944,
    1944,  1944,  1944,  1944,  1944,  1944,  1944,  1944,  2785,-32768,
    1673,  1683,  4929,  4950,  4971,  4992,  5013,  5034,   565,  2065,
     566,  2065,   600,  2065,  1870,  1116,  1871,  1944,  1944,  1944,
    1944,  1944,  1944,  1944,  1872,  1944,  1873,  1944,  1876,-32768,
    1696,-32768,  5055,  5076,  5097,  7297,  7320,  7343,  2065,-32768,
    2065,-32768,  2065,-32768,  1116,  1944,  1944,  1944,-32768,-32768,
  -32768,  1697,  5118,  5139,  5160,  1698,  1699,  1701,  1116,  1944,
    1944,  1944,  1944,  1944,  1944,  1703,  5181,  5202,  5223,   601,
    2065,   608,  2065,   611,  2065,   237,  1944,  1944,  1944,  1944,
    1879,  1944,  1890,  1944,  1892,  1712,  7366,  7389,  7412,  2065,
  -32768,  2065,-32768,  2065,-32768,  1893,-32768,-32768,-32768,-32768,
    1713,  1714,  1715,  1944,  1944,  1944,   612,  2065,   615,  2065,
     616,  2065,  1944,  1894,  1944,  1898,  1944,  1901,  2065,-32768,
    2065,-32768,  2065,-32768,  1908,  1909,-32768
};

static const short yypgoto[] =
{
  -32768,   -70,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  1316,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  -289,   -19,-32768,  1907,  1910,
    -342,  -171,  1914,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768, -1125, -1226,-32768,-32768,  -934,   -23,
  -32768,    98,-32768,   -89,-32768, -1063,   920,   417,  -288,  -315,
    -663,   980,-32768,  -268
};


#define	YYLAST		7595


static const short yytable[] =
{
     137,   233,   466,   470,   136,   355,   189,   238,   528,   359,
     503,   682,   200,    80,   459,   460,   461,   187,   178,   192,
     820,   145,   145,  1312,  1247,  1247,  1247,  1312,   956,  1248,
    1248,  1248,   147,    95,  1247,   957,  1247,   466,   364,  1248,
    1170,  1248,  1187,   142,   292,  1247,   458,  1001,   811,   725,
    1248,   457,   458,  1002,   240,     9,   241,   347,   348,  1253,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   349,   120,   121,   122,   958,   347,
     348,   120,   121,   122,  1126,   347,   348,   183,   130,   131,
     184,   165,   166,  1135,   235,   987,   236,   988,   347,   348,
    1142,   989,   167,   990,   285,   286,   287,   490,   168,   288,
     291,   491,   295,  1247,   991,    83,   992,   179,  1248,   315,
     316,   317,   242,   319,   243,   321,   322,   244,   329,   245,
     375,   365,   293,   294,   587,  1265,   812,   813,   588,   146,
     146,   169,   171,     8,   345,   346,   726,    84,  1311,  1315,
    1461,   130,   131,    95,    85,   951,   727,   188,  1465,   777,
    1526,    86,   362,   363,   246,   366,   247,   368,   469,  1528,
     371,   372,   347,   348,   155,   156,   687,   157,   609,   676,
     347,   348,    81,   123,   124,   125,   126,   699,   668,   350,
     190,   239,   669,   347,   348,   683,   519,   193,   551,    87,
    1312,   678,   180,   466,  1312,   347,   348,   824,   309,   310,
     311,   673,   411,   248,   466,   249,   312,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   942,
     538,   539,   342,   673,   344,  1266,    88,   465,  1312,  1270,
     351,  1426,  1312,   471,  1430,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
    1066,   147,  1188,   347,   348,   495,  1189,   497,   250,  1113,
     251,   286,   465,   123,   124,   125,   126,   507,   508,   509,
     594,   511,   512,   513,   514,   515,   516,   517,   123,   124,
     125,   126,   130,   131,   130,   131,   141,   347,   348,   530,
     531,   532,   675,   252,   540,   253,   413,  1494,   945,   130,
     131,  1498,   547,   529,   902,   903,   904,   905,   906,    92,
      93,   555,   972,   973,   805,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   347,
     348,   466,   833,   347,   348,   809,    89,   347,   348,  1368,
    1369,  1370,  1371,   593,   843,   853,  1375,    90,   666,  1180,
     667,   173,   806,  1181,   174,   175,    91,    92,    93,   466,
     860,   861,   862,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   466,   466,   466,
     140,   286,   844,   142,   143,   522,   523,   679,   254,   677,
     255,   144,   298,   299,   300,   301,   302,   148,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   256,   465,   257,
    1436,  1437,   312,   673,  1440,   674,   258,   411,   259,   465,
    1114,   701,   702,    10,   347,   348,   149,   707,   123,   124,
     125,   126,   347,   348,   150,   347,   348,   717,   718,   151,
    1183,   347,   348,   152,  1234,   260,   721,   261,  1306,   130,
     131,  1308,   153,  1013,   347,   348,   728,   127,   128,   154,
     966,   944,   946,   129,   347,   348,  1022,   738,   132,   740,
     741,   289,   158,   262,   290,   263,  1502,   130,   131,   264,
    1314,   265,   266,   500,   267,   236,   268,   466,   269,   298,
     299,   300,   301,   302,   163,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   270,   164,   271,   327,   272,   312,
     273,   172,   333,   778,   177,   127,   128,   130,   131,   176,
     274,   129,   275,   698,   159,   236,   132,   160,   161,   696,
     162,   276,   697,   277,   356,   278,   181,   279,  1551,   182,
     360,   361,    11,    12,    13,    14,    15,    16,    17,    18,
     307,   308,   309,   310,   311,   981,   982,   716,   875,   280,
     312,   281,   185,   795,   796,    42,    43,    44,    45,   673,
      47,   700,   186,   673,  1581,   836,   194,   797,   798,   799,
     800,   801,   802,   803,  1091,   953,   465,   954,   195,   673,
     808,   965,   673,   814,   993,   673,   673,   994,   995,   673,
     196,  1071,   823,   197,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   198,   465,   411,   199,  1059,   312,  1189,
    1463,  1190,  1464,  1483,   231,  1484,   234,   915,   301,   302,
     282,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     297,   283,   465,   465,   465,   312,   296,   865,   866,   284,
    1485,   869,  1486,  1487,  1086,  1488,  1489,   313,  1490,    92,
      93,  1665,   880,   881,   314,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,  1543,
     474,  1544,  1603,  1605,  1604,  1606,   318,   918,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   298,   299,   300,   301,   302,   320,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   825,  1607,  1659,  1608,
    1660,   312,   947,   876,   330,  1661,   952,  1662,  1663,  1692,
    1664,  1693,  1694,  1696,  1695,  1697,   331,   332,  1009,   334,
     335,   336,   465,   341,   967,   337,   968,   338,   339,   340,
     857,   858,   859,   358,   370,   357,   352,   353,   354,   367,
     983,   984,   985,   369,   373,  1237,   374,   376,   406,   377,
     378,   412,   379,   380,   381,   882,   382,   383,   384,   385,
    1005,  1006,  1007,   386,   891,   298,   299,   300,   301,   302,
     387,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     388,   389,   390,   391,   392,   312,   409,   393,   394,   395,
     672,   396,   463,   397,   398,   399,   400,   127,   128,   401,
     402,   403,   404,   129,   405,   312,   817,  1041,   132,   473,
     408,   834,   410,   472,   835,   298,   299,   300,   301,   302,
     505,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     510,   518,   542,  1060,   543,   312,   546,   549,   552,   533,
      27,    28,   534,   535,    31,    32,    33,   556,    34,  1117,
      36,    37,   557,    39,    40,   558,   559,   560,   561,  1076,
    1077,  1148,   562,   563,   564,   565,   566,   567,   568,  1085,
      52,   569,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,  1103,  1104,   581,    53,    54,    55,   582,
     583,   584,   585,   586,   670,  1116,   589,   591,  1119,   590,
     671,   680,   681,   686,   715,   719,   688,   689,  1129,   690,
     692,   694,   695,   703,   720,  1136,  1137,  1138,   730,   731,
     732,   733,  1143,   734,   736,   737,  1147,   743,   774,   804,
    1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,
    1159,  1160,  1161,  1162,   744,   745,   746,   747,    65,   748,
     749,   750,   751,   752,   753,   754,   755,  1196,   756,  1172,
     775,   298,   299,   300,   301,   302,  1067,   303,   304,   305,
     306,   307,   308,   309,   310,   311,  1178,   757,   758,   838,
     759,   312,   760,   761,   762,   763,   764,   794,   807,   815,
     536,   765,   766,   767,   768,  1092,   769,  1094,  1193,  1097,
    1194,   770,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   826,   827,   771,   829,
     772,   831,   832,   773,   776,   780,   781,   782,   783,    92,
     323,   784,   818,   810,   816,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   867,
     868,   785,   819,   871,  1458,   786,   822,  1243,  1245,   787,
    1251,   828,  1254,  1255,   830,   840,   788,   841,   789,  1259,
     888,   889,   842,   790,   845,   846,   894,   895,  1268,   863,
     791,   792,   793,   901,   847,   908,  1276,   848,   849,   839,
     850,  1281,   851,  1322,  1284,   852,  1286,  1287,  1288,  1289,
    1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,  1298,  1299,
     917,   950,   864,   872,   870,  1303,   878,   285,   286,  1304,
     877,  1521,   879,  1524,   298,   299,   300,   301,   302,   883,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   884,
     885,   886,   887,   890,   312,   960,   892,   962,  1166,   893,
     896,   897,  1367,   898,   899,   900,   909,   969,   970,   971,
     910,   911,   974,   975,   976,   977,   978,   979,   980,   912,
     913,   914,   916,   941,   943,  1562,   986,   949,  1244,  1246,
     948,  1252,   955,  1352,   959,  1355,   961,   127,   324,   963,
     964,  1360,   998,   129,   999,  1004,  1008,  1403,   132,  1010,
    1014,  1016,  1015,  1017,   325,  1019,  1042,  1061,  1018,  1024,
    1020,  1021,  1380,  1381,  1382,  1383,  1384,  1385,  1386,  1387,
    1388,  1023,  1025,  1026,  1027,  1393,  1062,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,   298,   299,   300,   301,   302,   344,
     303,   304,   305,   306,   307,   308,   309,   310,   311,  1035,
    1036,  1037,  1038,  1039,   312,  1064,  1068,  1040,  1057,  1069,
    1070,  1058,  1173,  1073,  1074,  1469,   298,   299,   300,   301,
     302,  1075,   303,   304,   305,   306,   307,   308,   309,   310,
     311,  1078,  1079,  1080,  1081,  1082,   312,  1442,  1443,  1444,
    1445,  1446,  1447,  1448,  1449,  1450,  1452,  1454,  1456,  1501,
    1083,  1084,  1093,   298,   299,   300,   301,   302,  1095,   303,
     304,   305,   306,   307,   308,   309,   310,   311,  1098,  1100,
    1101,  1110,  1102,   312,  1105,  1109,  1118,  1121,  1122,  1120,
    1174,  1531,   300,   301,   302,  1123,   303,   304,   305,   306,
     307,   308,   309,   310,   311,  1500,  1124,  1125,  1139,  1127,
     312,  1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,
    1515,  1128,  1517,  1130,  1519,  1131,  1132,  1133,  1134,  1140,
    1141,  1144,  1145,    92,   501,  1169,  1163,  1146,  1171,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,  1164,  1165,  1168,  1548,  1549,  1167,  1176,
    1179,  1553,  1554,  1555,  1556,  1557,  1558,   298,   299,   300,
     301,   302,  1192,   303,   304,   305,   306,   307,   308,   309,
     310,   311,  1177,  1182,  1184,  1191,  1256,   312,  1197,  1199,
    1235,  1578,  1202,  1206,  1207,  1212,  1582,  1583,  1584,  1585,
    1586,  1587,  1589,  1591,  1593,  1175,  1200,  1201,  1203,  1205,
    1211,  1215,  1264,  1213,  1216,  1263,  1233,  1267,  1269,  1218,
    1272,  1271,  1273,  1282,  1612,  1613,  1614,  1615,  1616,  1617,
    1618,  1274,  1620,  1275,  1622,   298,   299,   300,   301,   302,
    1277,   303,   304,   305,   306,   307,   308,   309,   310,   311,
    1279,  1280,  1632,  1633,  1634,   312,  1257,  1283,  1258,  1285,
    1310,  1300,  1262,  1301,  1319,  1302,  1646,  1647,  1648,  1650,
    1652,  1654,  1309,  1318,  1323,  1321,  1324,  1325,  1278,  1327,
    1351,  1328,  1332,  1666,  1667,  1668,  1669,  1330,  1671,  1334,
    1673,   127,   128,  1349,  1353,  1357,  1358,   129,  1361,  1362,
    1363,  1366,   132,  1372,  1373,  1374,  1376,  1377,   502,  1378,
    1687,  1689,  1691,  1396,  1320,  1379,  1394,  1398,  1401,  1698,
    1399,  1700,  1402,  1702,    92,    93,  1404,  1405,  1406,  1407,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,  1408,  1409,  1434,  1419,   504,  1420,
     298,   299,   300,   301,   302,  1421,   303,   304,   305,   306,
     307,   308,   309,   310,   311,  1422,  1424,  1356,  1425,  1427,
     312,  1431,  1435,  1438,  1439,  1364,  1365,    92,    93,    94,
    1441,    95,  1460,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,  1462,   120,   121,
     122,   553,    92,    93,   458,  1466,  1470,  1467,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,  1468,   120,   121,   122,  1471,  1493,  1472,  1473,
    1491,  1496,  1492,  1497,  1499,  1429,  1504,  1505,  1433,   298,
     299,   300,   301,   302,  1516,   303,   304,   305,   306,   307,
     308,   309,   310,   311,  1518,  1520,  1522,  1525,  1545,   312,
    1546,  1527,  1240,  1241,  1529,  1547,  1532,  1550,   129,  1533,
    1563,  1566,  1567,  1242,  1568,  1579,  1575,  1576,  1577,   168,
    1595,   298,   299,   300,   301,   302,  1596,   303,   304,   305,
     306,   307,   308,   309,   310,   311,  1609,  1611,  1619,  1621,
    1495,   312,  1623,  1624,  1638,  1670,  1642,  1643,  1503,  1644,
    1655,   123,   124,   125,   126,  1675,  1672,   685,  1674,  1679,
    1699,  1683,  1684,  1685,  1701,   127,   128,  1703,  1705,  1706,
     779,   129,   130,   131,    70,     0,   132,    71,   133,   837,
     134,    72,  1108,     0,   298,   299,   300,   301,   302,  1063,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
     127,   128,     0,     0,   312,   874,   129,    92,    93,     0,
    1552,   132,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,     0,     0,    92,
     323,     0,     0,     0,  1580,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    92,
     501,     0,  1610,     0,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,     0,
       0,  1631,     0,     0,     0,     0,     0,     0,     0,     0,
     298,   299,   300,   301,   302,  1645,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,     0,     0,     0,     0,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,   127,   128,     0,   312,     0,
       0,   129,     0,     0,     0,     0,   132,     0,     0,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,   127,   464,   312,
       0,   462,     0,   129,     0,   520,   -10,     1,   132,   -10,
     -53,     0,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   127,   128,     0,
       0,     0,   312,   129,     0,     0,     0,     0,   132,   -53,
     704,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   -53,   -53,   -53,     0,     0,   312,     0,   -53,     0,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,
       0,   533,    27,    28,   534,   535,    31,    32,    33,     0,
      34,     0,    36,    37,     0,    39,    40,     0,   -10,   -10,
     -10,   -10,   -10,   -10,   -10,   -10,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -53,     2,     3,     0,     4,    53,    54,
      55,   533,    27,    28,   534,   535,    31,    32,    33,     0,
      34,     0,    36,    37,     0,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,    52,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,    53,    54,
      55,     0,     0,   312,     0,     0,     0,     0,     0,    24,
      65,   708,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     0,    34,    35,    36,    37,    38,    39,    40,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    47,
     201,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,   541,     0,     0,     0,     0,     0,     0,     0,
      65,    53,    54,    55,     0,     0,     0,     0,    56,     0,
      57,     0,    58,    59,    60,    61,    62,    63,    64,   533,
      27,    28,   534,   535,    31,    32,    33,     0,    34,     0,
      36,    37,     0,    39,    40,     0,     0,     0,     0,     0,
       0,     0,   739,   202,   203,   204,     0,     0,     0,     0,
      52,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,     0,     0,    65,     0,     0,    53,    54,    55,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,     0,
     225,   226,   227,   228,   229,   230,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,     0,     0,
       0,     0,  1089,     0,  1090,     0,     0,     0,     0,     0,
       0,     0,     0,   298,   299,   300,   301,   302,    65,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,     0,     0,     0,     0,  1111,
       0,  1112,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,     0,     0,     0,     0,  1238,     0,
    1239,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,     0,   298,   299,   300,   301,   302,   709,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,     0,   298,   299,   300,
     301,   302,   856,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,     0,
     298,   299,   300,   301,   302,  1087,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,   298,   299,   300,   301,   302,  1260,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,     0,   298,   299,   300,   301,
     302,  1261,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,     0,   298,
     299,   300,   301,   302,  1305,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,     0,   298,   299,   300,   301,   302,  1307,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,     0,   298,   299,   300,   301,   302,
    1313,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,   298,   299,
     300,   301,   302,  1316,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
       0,   298,   299,   300,   301,   302,  1317,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,     0,   298,   299,   300,   301,   302,  1350,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,     0,   298,   299,   300,
     301,   302,  1395,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,     0,
     298,   299,   300,   301,   302,  1397,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,   298,   299,   300,   301,   302,  1400,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,     0,   298,   299,   300,   301,
     302,  1565,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,     0,   298,
     299,   300,   301,   302,  1594,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,   520,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,   521,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,   550,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,   646,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,   647,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
     660,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,   661,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,   662,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,   663,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,   664,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,   665,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,   722,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,   723,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,   724,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,   854,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
     855,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,   873,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,   996,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,   997,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1011,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1012,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1043,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1044,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1045,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1046,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1047,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1048,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1049,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1050,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1051,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1052,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1053,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1054,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1055,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1056,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1072,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1185,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1186,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1195,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1198,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1209,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1214,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1217,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1219,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1220,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1221,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1222,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1223,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1224,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1225,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1226,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1227,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1228,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1229,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1230,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1231,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1232,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1236,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1326,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1335,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1336,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1337,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1338,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1339,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1340,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1341,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1342,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1343,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1348,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1410,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1411,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1412,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1413,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1414,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1415,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1416,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1417,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1418,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1474,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1475,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1476,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1477,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1478,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1479,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1480,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1481,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1482,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1530,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1534,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1535,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1536,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1537,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1538,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1539,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1564,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1569,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1570,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1571,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1572,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1573,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1574,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1597,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1598,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1599,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1600,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1601,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,   298,   299,   300,   301,
     302,  1602,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,   298,   299,   300,
     301,   302,  1625,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,   298,   299,
     300,   301,   302,  1626,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,   298,
     299,   300,   301,   302,  1627,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
     298,   299,   300,   301,   302,  1639,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,   298,   299,   300,   301,   302,  1640,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,   298,   299,   300,   301,   302,  1641,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,   298,   299,   300,   301,   302,  1656,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,   298,   299,   300,   301,   302,  1657,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,   298,   299,   300,   301,   302,
    1658,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   468,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   592,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   625,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   627,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   629,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   631,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   633,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   635,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   637,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   639,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   641,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   643,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   645,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   649,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   651,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   653,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   655,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   657,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   659,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   729,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   933,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   935,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   937,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,   939,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,     0,     0,   940,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,     0,     0,  1065,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,   462,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
     492,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,   493,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,   494,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,   496,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,   498,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,   499,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,   506,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,   544,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,   545,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,   548,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
     554,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,   624,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,   626,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,   628,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,   630,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,   632,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,   634,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,   636,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,   638,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,   640,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
     642,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,   644,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,   648,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,   650,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,   652,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,   654,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,   656,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,   658,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,   691,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,   693,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
     705,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,   706,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,   710,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,   711,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,   712,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,   713,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,   714,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,   735,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,   742,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,   932,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
     934,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,   936,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,   938,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,  1000,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,  1088,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,  1115,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,  1204,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,  1208,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,  1210,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,  1329,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
    1331,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,  1333,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,  1344,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,  1345,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,  1346,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,  1347,   298,   299,   300,   301,
     302,     0,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     0,     0,     0,     0,     0,   312,     0,  1423,   298,
     299,   300,   301,   302,     0,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     0,     0,     0,     0,     0,   312,
       0,  1540,   298,   299,   300,   301,   302,     0,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     0,     0,     0,
       0,     0,   312,     0,  1541,   298,   299,   300,   301,   302,
       0,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   312,     0,  1542,   298,   299,
     300,   301,   302,     0,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     0,     0,     0,     0,     0,   312,     0,
    1628,   298,   299,   300,   301,   302,     0,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     0,     0,     0,     0,
       0,   312,     0,  1629,   298,   299,   300,   301,   302,     0,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,     0,     0,     0,   312,     0,  1630,   298,   299,   300,
     301,   302,     0,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     0,     0,     0,     0,     0,   312,     0,  1676,
     298,   299,   300,   301,   302,     0,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     0,     0,     0,     0,     0,
     312,     0,  1677,   298,   299,   300,   301,   302,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     0,     0,
       0,     0,     0,   312,     0,  1678
};

static const short yycheck[] =
{
      23,    90,   290,   292,    23,   176,     4,     4,   350,   180,
     325,     4,    82,     3,   282,   283,   284,    42,     4,     4,
     683,    64,    64,  1249,    65,    65,    65,  1253,     6,    70,
      70,    70,    64,     7,    65,     6,    65,   325,    89,    70,
       6,    70,  1105,   182,     4,    65,     5,   182,     4,   188,
      70,     4,     5,   188,   182,   152,   184,   171,   172,  1184,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   188,    34,    35,    36,    49,   171,
     172,    34,    35,    36,  1018,   171,   172,    38,   178,   179,
      41,   171,   172,  1027,   184,   187,   186,   189,   171,   172,
    1034,   187,   182,   189,   127,   128,   129,   183,   188,   132,
     133,   187,   135,    65,   187,     7,   189,   103,    70,   142,
     143,   144,   182,   146,   184,   148,   149,   182,   151,   184,
     200,   182,    92,    93,   183,  1198,    92,    93,   187,   182,
     182,    43,    44,     6,   167,   168,   188,     6,   189,   189,
     189,   178,   179,     7,     6,   818,   188,   182,   189,   186,
     189,     6,   185,   186,   182,   188,   184,   190,     7,   189,
     193,   194,   171,   172,    41,    42,   491,    44,   189,   468,
     171,   172,   172,   157,   158,   159,   160,   502,   183,   188,
     188,   188,   187,   171,   172,   188,   187,   182,   369,     6,
    1426,   469,   188,   491,  1430,   171,   172,   183,   173,   174,
     175,   187,   235,   182,   502,   184,   181,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   183,
       6,     7,   164,   187,   166,  1199,     6,   290,  1494,  1203,
     172,  1396,  1498,   292,  1399,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     953,    64,   183,   171,   172,   318,   187,   320,   182,     8,
     184,   324,   325,   157,   158,   159,   160,   330,   331,   332,
     188,   334,   335,   336,   337,   338,   339,   340,   157,   158,
     159,   160,   178,   179,   178,   179,     6,   171,   172,   352,
     353,   354,   186,   182,   357,   184,   238,  1462,     7,   178,
     179,  1466,   365,   187,   107,   108,   109,   110,   111,     3,
       4,   374,    55,    56,   669,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   171,
     172,   669,   697,   171,   172,   673,   182,   171,   172,  1323,
    1324,  1325,  1326,   412,     6,   187,  1330,   182,   184,   187,
     186,    38,   670,   187,    41,    42,   182,     3,     4,   697,
     725,   726,   727,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   725,   726,   727,
     182,   464,    54,   182,   182,   347,   348,   470,   182,   468,
     184,   182,   161,   162,   163,   164,   165,   182,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   182,   491,   184,
    1404,  1405,   181,   187,  1408,   189,   182,   500,   184,   502,
     189,   504,   505,     3,   171,   172,   182,   510,   157,   158,
     159,   160,   171,   172,    46,   171,   172,   520,   521,   182,
     187,   171,   172,    42,  1167,   182,   529,   184,   187,   178,
     179,   187,    42,   183,   171,   172,   539,   171,   172,    42,
     835,   810,   811,   177,   171,   172,   183,   550,   182,   552,
     553,   185,    44,   182,   188,   184,  1470,   178,   179,   182,
     187,   184,   182,   184,   184,   186,   182,   835,   184,   161,
     162,   163,   164,   165,   182,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   182,   188,   184,   150,   182,   181,
     184,   188,   155,   592,    42,   171,   172,   178,   179,   188,
     182,   177,   184,   184,    38,   186,   182,    41,    42,   185,
      44,   182,   188,   184,   177,   182,     6,   184,  1532,     6,
     183,   184,   122,   123,   124,   125,   126,   127,   128,   129,
     171,   172,   173,   174,   175,     6,     7,   519,     8,   182,
     181,   184,   182,   646,   647,    58,    59,    60,    61,   187,
      63,   189,   182,   187,  1568,   189,   182,   660,   661,   662,
     663,   664,   665,   666,   986,   187,   669,   189,     6,   187,
     673,   189,   187,   676,   189,   187,   187,   189,   189,   187,
       4,   189,   685,     4,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    42,   697,   698,     3,   945,   181,   187,
     187,   189,   189,   187,   182,   189,     5,   776,   164,   165,
     182,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       6,   182,   725,   726,   727,   181,     6,   730,   731,   182,
     187,   734,   189,   187,   982,   189,   187,     6,   189,     3,
       4,  1655,   745,   746,     5,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   187,
       6,   189,   187,   187,   189,   189,   182,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   161,   162,   163,   164,   165,   182,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   688,   187,   187,   189,
     189,   181,   811,   183,   188,   187,   819,   189,   187,   187,
     189,   189,   187,   187,   189,   189,   182,   182,   878,   188,
     188,   182,   835,     4,   837,   182,   839,   182,   182,   182,
     722,   723,   724,     6,    95,   184,   188,   188,   188,   186,
     853,   854,   855,   188,     6,  1177,   182,   182,     5,   182,
     182,     4,   182,   182,   182,   747,   182,   182,   182,   182,
     873,   874,   875,   182,   756,   161,   162,   163,   164,   165,
     182,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     182,   182,   182,   182,   182,   181,   183,   182,   182,   182,
     463,   182,     7,   182,   182,   182,   182,   171,   172,   182,
     182,   182,   182,   177,   182,   181,     6,   916,   182,     7,
     187,   185,   187,   186,   188,   161,   162,   163,   164,   165,
       7,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       7,   183,     7,   946,     7,   181,    90,    92,   188,    38,
      39,    40,    41,    42,    43,    44,    45,   153,    47,  1009,
      49,    50,     5,    52,    53,     5,     5,     5,     5,   972,
     973,  1040,     5,     5,     5,     5,     5,     5,     5,   982,
      69,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,   140,   996,   997,     5,    85,    86,    87,     5,
       5,     5,     3,     5,   187,  1008,     5,     5,  1011,     6,
     183,     6,     4,     6,   186,   189,     7,     7,  1021,     7,
       7,     7,     7,     7,   189,  1028,  1029,  1030,   188,   188,
       7,     7,  1035,   182,     7,   186,  1039,   154,     5,     4,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1054,  1055,  1056,   187,   187,   187,   187,   147,   187,
     187,   187,   187,   187,   187,   187,   187,  1117,   187,  1072,
     183,   161,   162,   163,   164,   165,   958,   167,   168,   169,
     170,   171,   172,   173,   174,   175,  1089,   187,   187,     6,
     187,   181,   187,   187,   187,   187,   187,     6,     6,     6,
     189,   187,   187,   187,   187,   987,   187,   989,  1111,   991,
    1113,   187,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   689,   690,   187,   692,
     187,   694,   695,   187,   187,   182,   182,   182,   182,     3,
       4,   182,     7,   185,     6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,   732,
     733,   182,   184,   736,  1422,   182,     6,  1180,  1181,   182,
    1183,     7,  1185,  1186,     7,     7,   182,     7,   182,  1192,
     753,   754,     7,   182,     7,     7,   759,   760,  1201,     6,
     182,   182,   182,   766,     7,   768,  1209,     7,     7,   188,
       7,  1214,     7,  1263,  1217,     4,  1219,  1220,  1221,  1222,
    1223,  1224,  1225,  1226,  1227,  1228,  1229,  1230,  1231,  1232,
     189,     6,     6,     4,     7,  1238,   150,  1240,  1241,  1242,
       7,  1489,     3,  1491,   161,   162,   163,   164,   165,     3,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     3,
     173,     3,     3,     3,   181,   828,     3,   830,     6,     3,
       3,     3,  1322,     3,     3,     3,     3,   840,   841,   842,
       5,     5,   845,   846,   847,   848,   849,   850,   851,     3,
       3,     6,     4,   183,   183,  1543,   188,     7,  1180,  1181,
     186,  1183,     6,  1306,     6,  1308,     6,   171,   172,     6,
       6,  1314,     6,   177,     6,    91,   188,  1367,   182,   187,
     187,   187,   183,   183,   188,   183,     6,     6,   187,   183,
     187,   187,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,   187,   183,   187,   187,  1348,     4,   187,   187,   187,
     187,   183,   187,   187,   161,   162,   163,   164,   165,  1241,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   187,
     187,   187,   183,   187,   181,     6,     6,   187,   186,     6,
     185,   944,     6,     6,     6,  1435,   161,   162,   163,   164,
     165,     6,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     6,     6,     6,     6,     6,   181,  1410,  1411,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1469,
       6,     6,     6,   161,   162,   163,   164,   165,     6,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     6,     6,
       6,  1004,     6,   181,     7,    91,     3,     6,     3,  1012,
       6,  1501,   163,   164,   165,     6,   167,   168,   169,   170,
     171,   172,   173,   174,   175,  1468,   173,     6,  1031,     6,
     181,  1474,  1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,
    1483,     3,  1485,     6,  1487,     3,     6,     6,     3,     6,
       3,     3,     3,     3,     4,   186,     4,     6,   185,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     6,     6,     6,  1529,  1530,     7,     6,
     189,  1534,  1535,  1536,  1537,  1538,  1539,   161,   162,   163,
     164,   165,    88,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   188,   188,   188,   188,    91,   181,   183,   187,
      93,  1564,   183,   183,   183,   183,  1569,  1570,  1571,  1572,
    1573,  1574,  1575,  1576,  1577,     6,   187,   187,   187,   187,
     187,   187,     6,   183,   183,   150,   183,     3,     6,   187,
       3,     6,     6,     3,  1597,  1598,  1599,  1600,  1601,  1602,
    1603,     6,  1605,     6,  1607,   161,   162,   163,   164,   165,
       6,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       6,     6,  1625,  1626,  1627,   181,  1189,     6,  1191,     5,
     188,     6,  1195,     5,   187,   189,  1639,  1640,  1641,  1642,
    1643,  1644,     6,   188,   187,   189,   187,   187,  1211,   183,
       6,   183,   183,  1656,  1657,  1658,  1659,   187,  1661,   187,
    1663,   171,   172,   187,     6,     6,     6,   177,     6,     6,
       6,     6,   182,     6,     6,     6,     6,     6,   188,     6,
    1683,  1684,  1685,   188,     6,     5,     5,   187,   187,  1692,
     188,  1694,   189,  1696,     3,     4,   187,   187,   183,   183,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,   187,   187,    88,   188,     8,   188,
     161,   162,   163,   164,   165,   188,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   188,   187,  1310,     6,     6,
     181,     6,   150,     6,     6,  1318,  1319,     3,     4,     5,
       5,     7,     5,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,   188,    34,    35,
      36,     8,     3,     4,     5,   188,   187,   189,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   188,    34,    35,    36,   187,     6,   183,   183,
     188,     6,   189,     6,    88,  1398,     6,     6,  1401,   161,
     162,   163,   164,   165,     6,   167,   168,   169,   170,   171,
     172,   173,   174,   175,     6,     6,     6,     6,     6,   181,
       6,   189,   171,   172,   188,     6,   187,   155,   177,   187,
       6,   156,   187,   182,   187,     6,   188,   188,   188,   188,
     187,   161,   162,   163,   164,   165,   183,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     6,     6,     6,     6,
    1463,   181,     6,   187,   187,     6,   188,   188,  1471,   188,
     187,   157,   158,   159,   160,   183,     6,     8,     6,     6,
       6,   188,   188,   188,     6,   171,   172,     6,     0,     0,
     594,   177,   178,   179,     7,    -1,   182,     7,   184,     8,
     186,     7,  1002,    -1,   161,   162,   163,   164,   165,   949,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
     171,   172,    -1,    -1,   181,     8,   177,     3,     4,    -1,
    1533,   182,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,     3,
       4,    -1,    -1,    -1,  1567,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     3,
       4,    -1,  1595,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,   162,   163,   164,   165,  1638,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,   171,   172,    -1,   181,    -1,
      -1,   177,    -1,    -1,    -1,    -1,   182,    -1,    -1,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,   171,   172,   181,
      -1,   183,    -1,   177,    -1,   187,     0,     1,   182,     3,
       4,    -1,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   171,   172,    -1,
      -1,    -1,   181,   177,    -1,    -1,    -1,    -1,   182,    33,
     189,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    85,    86,    87,    -1,    -1,   181,    -1,    92,    -1,
      94,    -1,    96,    97,    98,    99,   100,   101,   102,    -1,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    -1,    52,    53,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,   148,   149,    -1,   151,    85,    86,
      87,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    69,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    85,    86,
      87,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    33,
     147,   189,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      41,    65,    66,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    -1,
      94,    -1,    96,    97,    98,    99,   100,   101,   102,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   189,   104,   105,   106,    -1,    -1,    -1,    -1,
      69,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,   147,    -1,    -1,    85,    86,    87,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    -1,   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,   162,   163,   164,   165,   147,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,
      -1,   189,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,   187,    -1,
     189,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,   161,   162,   163,   164,   165,   189,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,   161,   162,   163,
     164,   165,   189,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
     161,   162,   163,   164,   165,   189,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,   161,   162,   163,   164,   165,   189,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,   161,   162,   163,   164,
     165,   189,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,   161,
     162,   163,   164,   165,   189,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    -1,   161,   162,   163,   164,   165,   189,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,    -1,   161,   162,   163,   164,   165,
     189,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,   161,   162,
     163,   164,   165,   189,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
      -1,   161,   162,   163,   164,   165,   189,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,    -1,   161,   162,   163,   164,   165,   189,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,   161,   162,   163,
     164,   165,   189,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
     161,   162,   163,   164,   165,   189,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,   161,   162,   163,   164,   165,   189,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,   161,   162,   163,   164,
     165,   189,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,   161,
     162,   163,   164,   165,   189,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,
     165,   187,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,   163,
     164,   165,   187,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,   162,
     163,   164,   165,   187,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   161,
     162,   163,   164,   165,   187,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
     161,   162,   163,   164,   165,   187,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   161,   162,   163,   164,   165,   187,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,   161,   162,   163,   164,   165,   187,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   161,   162,   163,   164,   165,   187,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,   161,   162,   163,   164,   165,   187,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   161,   162,   163,   164,   165,
     187,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   185,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,   185,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,   164,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,
     162,   163,   164,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,
      -1,   183,   161,   162,   163,   164,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,   161,   162,   163,   164,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
      -1,    -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,
     163,   164,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,
     183,   161,   162,   163,   164,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,   181,    -1,   183,   161,   162,   163,   164,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,   161,   162,   163,
     164,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    -1,    -1,    -1,    -1,    -1,   181,    -1,   183,
     161,   162,   163,   164,   165,    -1,   167,   168,   169,   170,
     171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   183,   161,   162,   163,   164,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
      -1,    -1,    -1,   181,    -1,   183
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 4:
#line 174 "Gmsh.y"
{ yyerrok ; return 1; ;
    break;}
case 5:
#line 182 "Gmsh.y"
{ yyval.d = yyvsp[0].d; ;
    break;}
case 6:
#line 183 "Gmsh.y"
{ yyval.d = -yyvsp[0].d; ;
    break;}
case 7:
#line 188 "Gmsh.y"
{
      Msg(PARSER_INFO,"STL file format");
      STL_Surf = Create_Surface(1,MSH_SURF_STL);
      STL_Surf->STL = new STL_Data;
      return 1;
    ;
    break;}
case 8:
#line 202 "Gmsh.y"
{
      STL_Surf->STL->Add_Facet( yyvsp[-12].d, yyvsp[-11].d, yyvsp[-10].d,
				yyvsp[-8].d, yyvsp[-7].d, yyvsp[-6].d,
				yyvsp[-4].d, yyvsp[-3].d, yyvsp[-2].d);
      return 1;
    ;
    break;}
case 9:
#line 209 "Gmsh.y"
{
      Msg(PARSER_INFO,"STL file format read");
      Tree_Add(THEM->Surfaces, &STL_Surf);
      return 1;
    ;
    break;}
case 12:
#line 226 "Gmsh.y"
{ return 1; ;
    break;}
case 13:
#line 227 "Gmsh.y"
{ return 1; ;
    break;}
case 14:
#line 228 "Gmsh.y"
{ return 1; ;
    break;}
case 15:
#line 233 "Gmsh.y"
{
      Msg(PARSER_INFO,"Step Iso-10303-21 file format");
      Create_Step_Solid_BRep();
    ;
    break;}
case 16:
#line 238 "Gmsh.y"
{
      Msg(PARSER_INFO,"Step Iso-10303-21 file format read");
      Resolve_BREP ();
    ;
    break;}
case 20:
#line 249 "Gmsh.y"
{
    ;
    break;}
case 21:
#line 252 "Gmsh.y"
{
    ;
    break;}
case 22:
#line 256 "Gmsh.y"
{
   ;
    break;}
case 23:
#line 262 "Gmsh.y"
{
        Add_Cartesian_Point((int)yyvsp[-8].d,yyvsp[-4].c,yyvsp[-2].v[0],yyvsp[-2].v[1],yyvsp[-2].v[2]);
    ;
    break;}
case 24:
#line 268 "Gmsh.y"
{
       Add_BSpline_Curve_With_Knots ((int)yyvsp[-22].d, yyvsp[-18].c, (int) yyvsp[-16].d, yyvsp[-14].l,	yyvsp[-6].l, yyvsp[-4].l, 0., 1.);
    ;
    break;}
case 25:
#line 275 "Gmsh.y"
{
      Add_BSpline_Surface_With_Knots ((int)yyvsp[-30].d, yyvsp[-26].c, (int) yyvsp[-24].d, (int) yyvsp[-22].d, yyvsp[-20].l, yyvsp[-10].l,
				      yyvsp[-8].l, yyvsp[-6].l, yyvsp[-4].l, 0., 1., 0., 1. );
    ;
    break;}
case 26:
#line 281 "Gmsh.y"
{
      Add_Edge_Curve ((int)yyvsp[-14].d, yyvsp[-10].c , (int)yyvsp[-8].d , (int)yyvsp[-6].d, (int)yyvsp[-4].d);
    ;
    break;}
case 27:
#line 285 "Gmsh.y"
{
      Add_Face_Outer_Bound((int)yyvsp[-10].d,yyvsp[-6].c,(int)yyvsp[-4].d,yyvsp[-2].i,1);
    ;
    break;}
case 28:
#line 289 "Gmsh.y"
{
      /* La je dois voir la norme ! Face_Bound : trou externe a la surface ! */
      Msg(PARSER_INFO,"Found a face bound");
      Add_Face_Outer_Bound((int)yyvsp[-10].d,yyvsp[-6].c,(int)yyvsp[-4].d,yyvsp[-2].i,0);
    ;
    break;}
case 29:
#line 296 "Gmsh.y"
{
      Add_Oriented_Edge((int)yyvsp[-14].d,yyvsp[-10].c,(int)yyvsp[-4].d,yyvsp[-2].i);
    ;
    break;}
case 30:
#line 300 "Gmsh.y"
{
      Add_Edge_Loop((int)yyvsp[-8].d,yyvsp[-4].c,yyvsp[-2].l);
    ;
    break;}
case 31:
#line 305 "Gmsh.y"
{
      Add_Advanced_Face((int)yyvsp[-12].d,yyvsp[-8].c,yyvsp[-6].l,(int)yyvsp[-4].d,yyvsp[-2].i);
    ;
    break;}
case 32:
#line 309 "Gmsh.y"
{
      Add_Vertex_Point((int)yyvsp[-8].d,yyvsp[-4].c,(int)yyvsp[-2].d);
    ;
    break;}
case 33:
#line 313 "Gmsh.y"
{
    ;
    break;}
case 34:
#line 317 "Gmsh.y"
{
      Add_Axis2_Placement3D  ( (int)yyvsp[-12].d, (int)yyvsp[-4].d, (int)yyvsp[-2].d, (int)yyvsp[-6].d);
    ;
    break;}
case 35:
#line 321 "Gmsh.y"
{
      Add_Direction((int)yyvsp[-8].d , yyvsp[-4].c, yyvsp[-2].v[0], yyvsp[-2].v[1], yyvsp[-2].v[2]);
    ;
    break;}
case 36:
#line 325 "Gmsh.y"
{
      Add_Plane((int)yyvsp[-8].d,yyvsp[-4].c,(int)yyvsp[-2].d);
    ;
    break;}
case 37:
#line 329 "Gmsh.y"
{
      Add_Line ((int)yyvsp[-10].d, yyvsp[-6].c , (int) yyvsp[-4].d, (int)yyvsp[-2].d);
    ;
    break;}
case 38:
#line 333 "Gmsh.y"
{
      Msg(PARSER_INFO,"Found a closed shell");
      Add_Closed_Shell((int)yyvsp[-8].d, yyvsp[-4].c , yyvsp[-2].l);
    ;
    break;}
case 39:
#line 339 "Gmsh.y"
{
    ;
    break;}
case 40:
#line 342 "Gmsh.y"
{
    ;
    break;}
case 41:
#line 345 "Gmsh.y"
{
      Add_Cylinder ((int)yyvsp[-10].d, yyvsp[-6].c , (int)yyvsp[-4].d, yyvsp[-2].d);
    ;
    break;}
case 42:
#line 349 "Gmsh.y"
{
      Add_Cone ((int)yyvsp[-12].d, yyvsp[-8].c , (int)yyvsp[-6].d, yyvsp[-4].d,yyvsp[-2].d);
    ;
    break;}
case 43:
#line 353 "Gmsh.y"
{
      Add_Torus ((int)yyvsp[-12].d, yyvsp[-8].c , (int)yyvsp[-6].d, yyvsp[-4].d,yyvsp[-2].d);
    ;
    break;}
case 44:
#line 357 "Gmsh.y"
{
      Add_Circle((int) yyvsp[-10].d, yyvsp[-6].c, (int) yyvsp[-4].d, yyvsp[-2].d);
    ;
    break;}
case 45:
#line 361 "Gmsh.y"
{
      Add_Ellipse((int) yyvsp[-12].d, yyvsp[-8].c, (int) yyvsp[-6].d, yyvsp[-4].d, yyvsp[-2].d);
    ;
    break;}
case 46:
#line 366 "Gmsh.y"
{
    ;
    break;}
case 47:
#line 369 "Gmsh.y"
{
    ;
    break;}
case 48:
#line 373 "Gmsh.y"
{
    ;
    break;}
case 49:
#line 376 "Gmsh.y"
{
    ;
    break;}
case 50:
#line 380 "Gmsh.y"
{
    ;
    break;}
case 51:
#line 383 "Gmsh.y"
{
    ;
    break;}
case 52:
#line 386 "Gmsh.y"
{
    ;
    break;}
case 53:
#line 396 "Gmsh.y"
{
  ;
    break;}
case 54:
#line 399 "Gmsh.y"
{
      Msg(PARSER_INFO,"Gmsh file format read");
    ;
    break;}
case 55:
#line 405 "Gmsh.y"
{ return 1; ;
    break;}
case 56:
#line 406 "Gmsh.y"
{ return 1; ;
    break;}
case 57:
#line 407 "Gmsh.y"
{ return 1; ;
    break;}
case 58:
#line 408 "Gmsh.y"
{ return 1; ;
    break;}
case 59:
#line 409 "Gmsh.y"
{ return 1; ;
    break;}
case 60:
#line 410 "Gmsh.y"
{ return 1; ;
    break;}
case 61:
#line 411 "Gmsh.y"
{ return 1; ;
    break;}
case 62:
#line 412 "Gmsh.y"
{ return 1; ;
    break;}
case 63:
#line 413 "Gmsh.y"
{ return 1; ;
    break;}
case 64:
#line 414 "Gmsh.y"
{ return 1; ;
    break;}
case 65:
#line 415 "Gmsh.y"
{ return 1; ;
    break;}
case 66:
#line 416 "Gmsh.y"
{ return 1; ;
    break;}
case 67:
#line 417 "Gmsh.y"
{ return 1; ;
    break;}
case 68:
#line 422 "Gmsh.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 69:
#line 426 "Gmsh.y"
{
      i = PrintListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(DIRECT, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 70:
#line 444 "Gmsh.y"
{ 
      if(!strcmp(yyvsp[-5].c, "View")) EndView(View, 1, yyname, yyvsp[-4].c); 
    ;
    break;}
case 71:
#line 448 "Gmsh.y"
{
      if(!strcmp(yyvsp[-7].c, "View")) EndView(View, 1, yyname, yyvsp[-6].c);
    ;
    break;}
case 72:
#line 455 "Gmsh.y"
{
      View = BeginView(1); 
    ;
    break;}
case 87:
#line 476 "Gmsh.y"
{ List_Add(View->SP, &yyvsp[0].d) ; ;
    break;}
case 88:
#line 478 "Gmsh.y"
{ List_Add(View->SP, &yyvsp[0].d) ; ;
    break;}
case 89:
#line 483 "Gmsh.y"
{ 
      List_Add(View->SP, &yyvsp[-5].d); List_Add(View->SP, &yyvsp[-3].d);
      List_Add(View->SP, &yyvsp[-1].d);
    ;
    break;}
case 90:
#line 488 "Gmsh.y"
{
      View->NbSP++ ;
    ;
    break;}
case 91:
#line 495 "Gmsh.y"
{ List_Add(View->VP, &yyvsp[0].d) ; ;
    break;}
case 92:
#line 497 "Gmsh.y"
{ List_Add(View->VP, &yyvsp[0].d) ; ;
    break;}
case 93:
#line 502 "Gmsh.y"
{ 
      List_Add(View->VP, &yyvsp[-5].d); List_Add(View->VP, &yyvsp[-3].d);
      List_Add(View->VP, &yyvsp[-1].d); 
    ;
    break;}
case 94:
#line 507 "Gmsh.y"
{
      View->NbVP++ ;
    ;
    break;}
case 95:
#line 514 "Gmsh.y"
{ List_Add(View->TP, &yyvsp[0].d) ; ;
    break;}
case 96:
#line 516 "Gmsh.y"
{ List_Add(View->TP, &yyvsp[0].d) ; ;
    break;}
case 97:
#line 521 "Gmsh.y"
{ 
      List_Add(View->TP, &yyvsp[-5].d); List_Add(View->TP, &yyvsp[-3].d);
      List_Add(View->TP, &yyvsp[-1].d);
    ;
    break;}
case 98:
#line 526 "Gmsh.y"
{
      View->NbTP++ ;
    ;
    break;}
case 99:
#line 533 "Gmsh.y"
{ List_Add(View->SL, &yyvsp[0].d) ; ;
    break;}
case 100:
#line 535 "Gmsh.y"
{ List_Add(View->SL, &yyvsp[0].d) ; ;
    break;}
case 101:
#line 541 "Gmsh.y"
{ 
      List_Add(View->SL, &yyvsp[-11].d); List_Add(View->SL, &yyvsp[-5].d);
      List_Add(View->SL, &yyvsp[-9].d); List_Add(View->SL, &yyvsp[-3].d);
      List_Add(View->SL, &yyvsp[-7].d); List_Add(View->SL, &yyvsp[-1].d);
    ;
    break;}
case 102:
#line 547 "Gmsh.y"
{
      View->NbSL++ ;
    ;
    break;}
case 103:
#line 554 "Gmsh.y"
{ List_Add(View->VL, &yyvsp[0].d) ; ;
    break;}
case 104:
#line 556 "Gmsh.y"
{ List_Add(View->VL, &yyvsp[0].d) ; ;
    break;}
case 105:
#line 562 "Gmsh.y"
{ 
      List_Add(View->VL, &yyvsp[-11].d); List_Add(View->VL, &yyvsp[-5].d);
      List_Add(View->VL, &yyvsp[-9].d); List_Add(View->VL, &yyvsp[-3].d);
      List_Add(View->VL, &yyvsp[-7].d); List_Add(View->VL, &yyvsp[-1].d);
    ;
    break;}
case 106:
#line 568 "Gmsh.y"
{
      View->NbVL++ ;
    ;
    break;}
case 107:
#line 575 "Gmsh.y"
{ List_Add(View->TL, &yyvsp[0].d) ; ;
    break;}
case 108:
#line 577 "Gmsh.y"
{ List_Add(View->TL, &yyvsp[0].d) ; ;
    break;}
case 109:
#line 583 "Gmsh.y"
{ 
      List_Add(View->TL, &yyvsp[-11].d); List_Add(View->TL, &yyvsp[-5].d);
      List_Add(View->TL, &yyvsp[-9].d); List_Add(View->TL, &yyvsp[-3].d);
      List_Add(View->TL, &yyvsp[-7].d); List_Add(View->TL, &yyvsp[-1].d);
    ;
    break;}
case 110:
#line 589 "Gmsh.y"
{
      View->NbTL++ ;
    ;
    break;}
case 111:
#line 596 "Gmsh.y"
{ List_Add(View->ST, &yyvsp[0].d) ; ;
    break;}
case 112:
#line 598 "Gmsh.y"
{ List_Add(View->ST, &yyvsp[0].d) ; ;
    break;}
case 113:
#line 605 "Gmsh.y"
{ 
      List_Add(View->ST, &yyvsp[-17].d); List_Add(View->ST, &yyvsp[-11].d);
      List_Add(View->ST, &yyvsp[-5].d);
      List_Add(View->ST, &yyvsp[-15].d); List_Add(View->ST, &yyvsp[-9].d);
      List_Add(View->ST, &yyvsp[-3].d);
      List_Add(View->ST, &yyvsp[-13].d); List_Add(View->ST, &yyvsp[-7].d);
      List_Add(View->ST, &yyvsp[-1].d);
    ;
    break;}
case 114:
#line 614 "Gmsh.y"
{
      View->NbST++ ;
    ;
    break;}
case 115:
#line 621 "Gmsh.y"
{ List_Add(View->VT, &yyvsp[0].d) ; ;
    break;}
case 116:
#line 623 "Gmsh.y"
{ List_Add(View->VT, &yyvsp[0].d) ; ;
    break;}
case 117:
#line 630 "Gmsh.y"
{ 
      List_Add(View->VT, &yyvsp[-17].d); List_Add(View->VT, &yyvsp[-11].d);
      List_Add(View->VT, &yyvsp[-5].d);
      List_Add(View->VT, &yyvsp[-15].d); List_Add(View->VT, &yyvsp[-9].d);
      List_Add(View->VT, &yyvsp[-3].d);
      List_Add(View->VT, &yyvsp[-13].d); List_Add(View->VT, &yyvsp[-7].d);
      List_Add(View->VT, &yyvsp[-1].d);
    ;
    break;}
case 118:
#line 639 "Gmsh.y"
{
      View->NbVT++ ;
    ;
    break;}
case 119:
#line 646 "Gmsh.y"
{ List_Add(View->TT, &yyvsp[0].d) ; ;
    break;}
case 120:
#line 648 "Gmsh.y"
{ List_Add(View->TT, &yyvsp[0].d) ; ;
    break;}
case 121:
#line 655 "Gmsh.y"
{ 
      List_Add(View->TT, &yyvsp[-17].d); List_Add(View->TT, &yyvsp[-11].d);
      List_Add(View->TT, &yyvsp[-5].d);
      List_Add(View->TT, &yyvsp[-15].d); List_Add(View->TT, &yyvsp[-9].d);
      List_Add(View->TT, &yyvsp[-3].d);
      List_Add(View->TT, &yyvsp[-13].d); List_Add(View->TT, &yyvsp[-7].d);
      List_Add(View->TT, &yyvsp[-1].d);
    ;
    break;}
case 122:
#line 664 "Gmsh.y"
{
      View->NbTT++ ;
    ;
    break;}
case 123:
#line 671 "Gmsh.y"
{ List_Add(View->SS, &yyvsp[0].d) ; ;
    break;}
case 124:
#line 673 "Gmsh.y"
{ List_Add(View->SS, &yyvsp[0].d) ; ;
    break;}
case 125:
#line 681 "Gmsh.y"
{ 
      List_Add(View->SS, &yyvsp[-23].d);  List_Add(View->SS, &yyvsp[-17].d);
      List_Add(View->SS, &yyvsp[-11].d); List_Add(View->SS, &yyvsp[-5].d);
      List_Add(View->SS, &yyvsp[-21].d);  List_Add(View->SS, &yyvsp[-15].d);
      List_Add(View->SS, &yyvsp[-9].d); List_Add(View->SS, &yyvsp[-3].d);
      List_Add(View->SS, &yyvsp[-19].d);  List_Add(View->SS, &yyvsp[-13].d);
      List_Add(View->SS, &yyvsp[-7].d); List_Add(View->SS, &yyvsp[-1].d);
    ;
    break;}
case 126:
#line 690 "Gmsh.y"
{
      View->NbSS++ ;
    ;
    break;}
case 127:
#line 697 "Gmsh.y"
{ List_Add(View->VS, &yyvsp[0].d) ; ;
    break;}
case 128:
#line 699 "Gmsh.y"
{ List_Add(View->VS, &yyvsp[0].d) ; ;
    break;}
case 129:
#line 707 "Gmsh.y"
{ 
      List_Add(View->VS, &yyvsp[-23].d);  List_Add(View->VS, &yyvsp[-17].d);
      List_Add(View->VS, &yyvsp[-11].d); List_Add(View->VS, &yyvsp[-5].d);
      List_Add(View->VS, &yyvsp[-21].d);  List_Add(View->VS, &yyvsp[-15].d);
      List_Add(View->VS, &yyvsp[-9].d); List_Add(View->VS, &yyvsp[-3].d);
      List_Add(View->VS, &yyvsp[-19].d);  List_Add(View->VS, &yyvsp[-13].d);
      List_Add(View->VS, &yyvsp[-7].d); List_Add(View->VS, &yyvsp[-1].d);
    ;
    break;}
case 130:
#line 716 "Gmsh.y"
{
      View->NbVS++ ;
    ;
    break;}
case 131:
#line 723 "Gmsh.y"
{ List_Add(View->TS, &yyvsp[0].d) ; ;
    break;}
case 132:
#line 725 "Gmsh.y"
{ List_Add(View->TS, &yyvsp[0].d) ; ;
    break;}
case 133:
#line 733 "Gmsh.y"
{ 
      List_Add(View->TS, &yyvsp[-23].d);  List_Add(View->TS, &yyvsp[-17].d);
      List_Add(View->TS, &yyvsp[-11].d); List_Add(View->TS, &yyvsp[-5].d);
      List_Add(View->TS, &yyvsp[-21].d);  List_Add(View->TS, &yyvsp[-15].d);
      List_Add(View->TS, &yyvsp[-9].d); List_Add(View->TS, &yyvsp[-3].d);
      List_Add(View->TS, &yyvsp[-19].d);  List_Add(View->TS, &yyvsp[-13].d);
      List_Add(View->TS, &yyvsp[-7].d); List_Add(View->TS, &yyvsp[-1].d);
    ;
    break;}
case 134:
#line 742 "Gmsh.y"
{
      View->NbTS++ ;
    ;
    break;}
case 135:
#line 749 "Gmsh.y"
{ 
      for(i=0; i<(int)strlen(yyvsp[0].c)+1; i++) List_Add(View->T2C, &yyvsp[0].c[i]) ; 
      Free(yyvsp[0].c);
    ;
    break;}
case 136:
#line 754 "Gmsh.y"
{ 
      for(i=0; i<(int)strlen(yyvsp[0].c)+1; i++) List_Add(View->T2C, &yyvsp[0].c[i]) ; 
      Free(yyvsp[0].c);
    ;
    break;}
case 137:
#line 762 "Gmsh.y"
{ 
      List_Add(View->T2D, &yyvsp[-5].d); List_Add(View->T2D, &yyvsp[-3].d);
      List_Add(View->T2D, &yyvsp[-1].d); 
      d = List_Nbr(View->T2C);
      List_Add(View->T2D, &d); 
    ;
    break;}
case 138:
#line 769 "Gmsh.y"
{
      View->NbT2++ ;
    ;
    break;}
case 139:
#line 776 "Gmsh.y"
{ 
      for(i=0; i<(int)strlen(yyvsp[0].c)+1; i++) List_Add(View->T3C, &yyvsp[0].c[i]) ; 
      Free(yyvsp[0].c);
    ;
    break;}
case 140:
#line 781 "Gmsh.y"
{ 
      for(i=0; i<(int)strlen(yyvsp[0].c)+1; i++) List_Add(View->T3C, &yyvsp[0].c[i]) ; 
      Free(yyvsp[0].c);
    ;
    break;}
case 141:
#line 789 "Gmsh.y"
{ 
      List_Add(View->T3D, &yyvsp[-7].d); List_Add(View->T3D, &yyvsp[-5].d);
      List_Add(View->T3D, &yyvsp[-3].d); List_Add(View->T3D, &yyvsp[-1].d); 
      d = List_Nbr(View->T3C);
      List_Add(View->T3D, &d); 
    ;
    break;}
case 142:
#line 796 "Gmsh.y"
{
      View->NbT3++ ;
    ;
    break;}
case 143:
#line 807 "Gmsh.y"
{ yyval.i = 0 ; ;
    break;}
case 144:
#line 808 "Gmsh.y"
{ yyval.i = 1 ; ;
    break;}
case 145:
#line 809 "Gmsh.y"
{ yyval.i = 2 ; ;
    break;}
case 146:
#line 810 "Gmsh.y"
{ yyval.i = 3 ; ;
    break;}
case 147:
#line 811 "Gmsh.y"
{ yyval.i = 4 ; ;
    break;}
case 148:
#line 815 "Gmsh.y"
{ yyval.i = 1 ; ;
    break;}
case 149:
#line 816 "Gmsh.y"
{ yyval.i = -1 ; ;
    break;}
case 150:
#line 824 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-3].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	TheSymbol.val = List_Create(1,1,sizeof(double));
	if(!yyvsp[-2].i){
	  List_Put(TheSymbol.val, 0, &yyvsp[-1].d);
	  List_Add(Symbol_L, &TheSymbol);
	}
	else
	  vyyerror("Unknown variable '%s'", yyvsp[-3].c) ;
      }
      else{
	pd = (double*)List_Pointer_Fast(pSymbol->val, 0) ; 
	switch(yyvsp[-2].i){
	case 0 : *pd = yyvsp[-1].d; break ;
	case 1 : *pd += yyvsp[-1].d ; break ;
	case 2 : *pd -= yyvsp[-1].d ; break ;
	case 3 : *pd *= yyvsp[-1].d ; break ;
	case 4 : 
	  if(yyvsp[-1].d) *pd /= yyvsp[-1].d ; 
	  else vyyerror("Division by zero in '%s /= %g'", yyvsp[-3].c, yyvsp[-1].d);
	  break;
	}
      }
    ;
    break;}
case 151:
#line 851 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-6].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	TheSymbol.val = List_Create(5,5,sizeof(double));
	if(!yyvsp[-2].i){
	  List_Put(TheSymbol.val, (int)yyvsp[-4].d, &yyvsp[-1].d);
	  List_Add(Symbol_L, &TheSymbol);
	}
	else
	  vyyerror("Unknown variable '%s'", yyvsp[-6].c) ;
      }
      else{
	if((pd = (double*)List_Pointer_Test(pSymbol->val, (int)yyvsp[-4].d))){
	  switch(yyvsp[-2].i){
	  case 0 : *pd = yyvsp[-1].d; break ;
	  case 1 : *pd += yyvsp[-1].d ; break ;
	  case 2 : *pd -= yyvsp[-1].d ; break ;
	  case 3 : *pd *= yyvsp[-1].d ; break ;
	  case 4 : 
	    if(yyvsp[-1].d) *pd /= yyvsp[-1].d ; 
	    else vyyerror("Division by zero in '%s[%d] /= %g'", yyvsp[-6].c, (int)yyvsp[-4].d, yyvsp[-1].d);
	    break;
	  }
	}
	else{
	  if(!yyvsp[-2].i)
	    List_Put(pSymbol->val, (int)yyvsp[-4].d, &yyvsp[-1].d);
	  else
	    vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-6].c, (int)yyvsp[-4].d) ;
	}
      }
    ;
    break;}
case 152:
#line 885 "Gmsh.y"
{
      if(List_Nbr(yyvsp[-5].l) != List_Nbr(yyvsp[-1].l))
	vyyerror("Incompatible array dimensions in affectation");
      else{
	TheSymbol.Name = yyvsp[-8].c;
	if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	  TheSymbol.val = List_Create(5,5,sizeof(double));
	  if(!yyvsp[-2].i){
	    for(i=0 ; i<List_Nbr(yyvsp[-5].l) ; i++){
	      List_Put(TheSymbol.val, (int)(*(double*)List_Pointer(yyvsp[-5].l,i)),
		       (double*)List_Pointer(yyvsp[-1].l,i));
	    }
	    List_Add(Symbol_L, &TheSymbol);
	  }
	  else
	    vyyerror("Unknown variable '%s'", yyvsp[-8].c) ;
	}
	else{
	  for(i=0 ; i<List_Nbr(yyvsp[-5].l) ; i++){
	    j = (int)(*(double*)List_Pointer(yyvsp[-5].l,i)) ;
	    d = *(double*)List_Pointer(yyvsp[-1].l,i) ;
	    if((pd = (double*)List_Pointer_Test(pSymbol->val, j))){
	      switch(yyvsp[-2].i){
	      case 0 : *pd = d; break ;
	      case 1 : *pd += d ; break ;
	      case 2 : *pd -= d ; break ;
	      case 3 : *pd *= d ; break ;
	      case 4 : 
		if(yyvsp[-1].l) *pd /= d ; 
		else vyyerror("Division by zero in '%s[%d] /= %g'", yyvsp[-8].c, j, d);
		break;
	      }
	    }
	    else{
	      if(!yyvsp[-2].i)
		List_Put(pSymbol->val, j, &d);
	      else
		vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-8].c, j) ;	  
	    }
	  }
	}
      }
      List_Delete(yyvsp[-5].l);
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 153:
#line 932 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-5].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	TheSymbol.val = List_Create(5,5,sizeof(double));
	List_Copy(yyvsp[-1].l,TheSymbol.val);
	List_Add(Symbol_L, &TheSymbol);
      }
      else{
	List_Reset(pSymbol->val);
	List_Copy(yyvsp[-1].l, pSymbol->val);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 154:
#line 947 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-2].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols)))
	vyyerror("Unknown variable '%s'", yyvsp[-2].c) ; 
      else
	*(double*)List_Pointer_Fast(pSymbol->val, 0) += yyvsp[-1].i; 
    ;
    break;}
case 155:
#line 956 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-5].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols)))
	vyyerror("Unknown variable '%s'", yyvsp[-5].c) ; 
      else{
	if((pd = (double*)List_Pointer_Test(pSymbol->val, (int)yyvsp[-3].d)))
	  *pd += yyvsp[-1].i ;
	else
	  vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-5].c, (int)yyvsp[-3].d) ;
      }
    ;
    break;}
case 156:
#line 971 "Gmsh.y"
{ 
      if(!(pStrCat = Get_StringOptionCategory(yyvsp[-5].c)))
	vyyerror("Unknown string option class '%s'", yyvsp[-5].c);
      else{
	if(!(pStrOpt = (char *(*) (int, int, char *))Get_StringOption(yyvsp[-3].c, pStrCat)))
	  vyyerror("Unknown string option '%s.%s'", yyvsp[-5].c, yyvsp[-3].c);
	else
	  pStrOpt(0,GMSH_SET|GMSH_GUI,yyvsp[-1].c) ;
      }
    ;
    break;}
case 157:
#line 983 "Gmsh.y"
{ 
      if(!(pStrCat = Get_StringOptionCategory(yyvsp[-8].c)))
	vyyerror("Unknown string option class '%s'", yyvsp[-8].c);
      else{
	if(!(pStrOpt = (char *(*) (int, int, char *))Get_StringOption(yyvsp[-3].c, pStrCat)))
	  vyyerror("Unknown string option '%s[%d].%s'", yyvsp[-8].c, (int)yyvsp[-6].d, yyvsp[-3].c);
	else
	  pStrOpt((int)yyvsp[-6].d,GMSH_SET|GMSH_GUI,yyvsp[-1].c) ;
      }
    ;
    break;}
case 158:
#line 997 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-5].c)))
	vyyerror("Unknown numeric option class '%s'", yyvsp[-5].c);
      else{
	if(!(pNumOpt = (double (*) (int, int, double))Get_NumberOption(yyvsp[-3].c, pNumCat)))
	  vyyerror("Unknown numeric option '%s.%s'", yyvsp[-5].c, yyvsp[-3].c);
	else{
	  switch(yyvsp[-2].i){
	  case 0 : d = yyvsp[-1].d ; break ;
	  case 1 : d = pNumOpt(0,GMSH_GET,0) + yyvsp[-1].d ; break ;
	  case 2 : d = pNumOpt(0,GMSH_GET,0) - yyvsp[-1].d ; break ;
	  case 3 : d = pNumOpt(0,GMSH_GET,0) * yyvsp[-1].d ; break ;
	  case 4 : 
	    if(yyvsp[-1].d) d = pNumOpt(0,GMSH_GET,0) / yyvsp[-1].d ; 
	    else vyyerror("Division by zero in '%s.%s /= %g'", yyvsp[-5].c, yyvsp[-3].c, yyvsp[-1].d);
	    break;
	  }
	  pNumOpt(0,GMSH_SET|GMSH_GUI, d) ;
	}
      }
    ;
    break;}
case 159:
#line 1020 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-8].c)))
	vyyerror("Unknown numeric option class '%s'", yyvsp[-8].c);
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[-3].c, pNumCat)))
	  vyyerror("Unknown numeric option '%s[%d].%s'", yyvsp[-8].c, (int)yyvsp[-6].d, yyvsp[-3].c);
	else{
	  switch(yyvsp[-2].i){
	  case 0 : d = yyvsp[-1].d; break ;
	  case 1 : d = pNumOpt((int)yyvsp[-6].d,GMSH_GET,0) + yyvsp[-1].d ; break ;
	  case 2 : d = pNumOpt((int)yyvsp[-6].d,GMSH_GET,0) - yyvsp[-1].d ; break ;
	  case 3 : d = pNumOpt((int)yyvsp[-6].d,GMSH_GET,0) * yyvsp[-1].d ; break ;
	  case 4 : 
	    if(yyvsp[-1].d) d = pNumOpt((int)yyvsp[-6].d,GMSH_GET,0) / yyvsp[-1].d ;
	    else vyyerror("Division by zero in '%s[%d].%s /= %g'", 
			  yyvsp[-8].c, (int)yyvsp[-6].d, yyvsp[-3].c, yyvsp[-1].d);
	    break;
	  }
	  pNumOpt((int)yyvsp[-6].d,GMSH_SET|GMSH_GUI,d) ;
	}
      }
    ;
    break;}
case 160:
#line 1044 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-4].c)))
	vyyerror("Unknown numeric option class '%s'", yyvsp[-4].c);
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[-2].c, pNumCat)))
	  vyyerror("Unknown numeric option '%s.%s'", yyvsp[-4].c, yyvsp[-2].c);
	else
	  pNumOpt(0,GMSH_SET|GMSH_GUI,pNumOpt(0,GMSH_GET,0)+yyvsp[-1].i) ;
      }
    ;
    break;}
case 161:
#line 1056 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-7].c)))
	vyyerror("Unknown numeric option class '%s'", yyvsp[-7].c);
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[-2].c, pNumCat)))
	  vyyerror("Unknown numeric option '%s[%d].%s'", yyvsp[-7].c, (int)yyvsp[-5].d, yyvsp[-2].c);
	else
	  pNumOpt((int)yyvsp[-5].d,GMSH_SET|GMSH_GUI,pNumOpt((int)yyvsp[-5].d,GMSH_GET,0)+yyvsp[-1].i) ;
      }
    ;
    break;}
case 162:
#line 1070 "Gmsh.y"
{
      if(!(pColCat = Get_ColorOptionCategory(yyvsp[-7].c)))
	vyyerror("Unknown color option class '%s'", yyvsp[-7].c);
      else{
	if(!(pColOpt =  (unsigned int (*) (int, int, unsigned int))Get_ColorOption(yyvsp[-3].c, pColCat)))
	  vyyerror("Unknown color option '%s.Color.%s'", yyvsp[-7].c, yyvsp[-3].c);
	else
	  pColOpt(0,GMSH_SET|GMSH_GUI,yyvsp[-1].u) ;
      }
    ;
    break;}
case 163:
#line 1082 "Gmsh.y"
{
      if(!(pColCat = Get_ColorOptionCategory(yyvsp[-10].c)))
	vyyerror("Unknown color option class '%s'", yyvsp[-10].c);
      else{
	if(!(pColOpt =  (unsigned int (*) (int, int, unsigned int))Get_ColorOption(yyvsp[-3].c, pColCat)))
	  vyyerror("Unknown color option '%s[%d].Color.%s'", yyvsp[-10].c, (int)yyvsp[-8].d, yyvsp[-3].c);
	else
	  pColOpt((int)yyvsp[-8].d,GMSH_SET|GMSH_GUI,yyvsp[-1].u) ;
      }
    ;
    break;}
case 164:
#line 1096 "Gmsh.y"
{
      GmshColorTable *ct = Get_ColorTable(0);
      if(!ct)
	vyyerror("View[%d] does not exist", 0);
      else{
	ct->size = List_Nbr(yyvsp[-1].l);
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  vyyerror("Too many (%d>%d) colors in View[%d].ColorTable", 
		   ct->size, COLORTABLE_NBMAX_COLOR, 0);
	else
	  for(i=0 ; i<ct->size ; i++) List_Read(yyvsp[-1].l, i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 165:
#line 1116 "Gmsh.y"
{
      GmshColorTable *ct = Get_ColorTable((int)yyvsp[-6].d);
      if(!ct)
	vyyerror("View[%d] does not exist", (int)yyvsp[-6].d);
      else{
	ct->size = List_Nbr(yyvsp[-1].l);
	if(ct->size > COLORTABLE_NBMAX_COLOR)
	  vyyerror("Too many (%d>%d) colors in View[%d].ColorTable", 
		   ct->size, COLORTABLE_NBMAX_COLOR, (int)yyvsp[-6].d);
	else
	  for(i=0 ; i<ct->size ; i++) List_Read(yyvsp[-1].l, i, &ct->table[i]);
	if(ct->size == 1){
	  ct->size = 2;
	  ct->table[1] = ct->table[0];
	}
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 166:
#line 1138 "Gmsh.y"
{
      if(CTX.default_plugins){
	try {
	  GMSH_PluginManager::Instance()->SetPluginOption(yyvsp[-6].c,yyvsp[-3].c,yyvsp[-1].d); 
	}
	catch (...) {
	  Msg(WARNING,"Unknown option '%s' or plugin '%s'",yyvsp[-3].c,yyvsp[-6].c);
	}
      }
    ;
    break;}
case 167:
#line 1150 "Gmsh.y"
{
      if(CTX.default_plugins){
	try {
	  GMSH_PluginManager::Instance()->SetPluginOption(yyvsp[-6].c,yyvsp[-3].c,yyvsp[-1].c); 
	}
	catch (...) {
	  Msg(WARNING,"Unknown option '%s' or plugin '%s'",yyvsp[-3].c,yyvsp[-6].c);
	}
      }
    ;
    break;}
case 168:
#line 1172 "Gmsh.y"
{
      Cdbpts101((int)yyvsp[-4].d,yyvsp[-1].v[0],yyvsp[-1].v[1],yyvsp[-1].v[2],yyvsp[-1].v[3],yyvsp[-1].v[4]);
      yyval.s.Type = MSH_POINT;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 169:
#line 1179 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_PHYSICAL_POINT,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_PHYSICAL_POINT;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 170:
#line 1185 "Gmsh.y"
{
      Vertex *v;
      Attractor *a;
      double p;
      int ip;
      for(int i=0;i<List_Nbr(yyvsp[-9].l);i++){
      	List_Read(yyvsp[-9].l,i,&p);
        ip = (int)p;
        v = FindPoint(ip,THEM);
        if(!v)
	  vyyerror("Unkown Point %d", ip);
	else{
	  a = Create_Attractor(List_Nbr(THEM->Metric->Attractors)+1,
			       yyvsp[-6].d,yyvsp[-4].d,yyvsp[-2].d,v,NULL,NULL);
	  List_Add(THEM->Metric->Attractors,&a);
        }
      }
    ;
    break;}
case 171:
#line 1204 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-3].l);i++){
	List_Read(yyvsp[-3].l,i,&d);
	Vertex *v = FindPoint((int)d,THEM);
	if(!v)
	  vyyerror("Unkown Point %d", (int)d);
	else
	  v->lc = yyvsp[-1].d;
      }
    ;
    break;}
case 172:
#line 1218 "Gmsh.y"
{
      Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_LINE,1,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
      yyval.s.Type = MSH_SEGM_LINE;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 173:
#line 1224 "Gmsh.y"
{
      Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_SPLN,3,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
      yyval.s.Type = MSH_SEGM_SPLN;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 174:
#line 1230 "Gmsh.y"
{
      Curve *c;
      Attractor *a;
      double p;
      int ip;
      for(int i=0;i<List_Nbr(yyvsp[-9].l);i++){
      	List_Read(yyvsp[-9].l,i,&p);
        ip = (int)p;
        c = FindCurve(ip,THEM);
        if(!c)
	  vyyerror("Unkown Curve %d", ip);
	else{
	  a = Create_Attractor(List_Nbr(THEM->Metric->Attractors)+1,
			       yyvsp[-6].d,yyvsp[-4].d,yyvsp[-2].d,NULL,c,NULL);
	  List_Add(THEM->Metric->Attractors,&a);
        }
      }
    ;
    break;}
case 175:
#line 1249 "Gmsh.y"
{
      Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_CIRC,2,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
      yyval.s.Type = MSH_SEGM_CIRC ;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 176:
#line 1255 "Gmsh.y"
{
      Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_ELLI,2,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
      yyval.s.Type = MSH_SEGM_ELLI ;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 177:
#line 1261 "Gmsh.y"
{
      List_T *temp;
      int i,j;
      double d;
      temp = List_Create(List_Nbr(yyvsp[-3].l),1,sizeof(int));
      for(i=0;i<List_Nbr(yyvsp[-3].l);i++){
      	List_Read(yyvsp[-3].l,i,&d);
        j = (int)d;
        List_Add(temp,&j);
      }
      AddCircleInDataBase ((int) yyvsp[-6].d, MSH_SEGM_CIRC, temp, yyvsp[-1].v);
      List_Delete(temp);
      yyval.s.Type = MSH_SEGM_CIRC ;
      yyval.s.Num  = (int)yyvsp[-6].d;
    ;
    break;}
case 178:
#line 1278 "Gmsh.y"
{
      Cdbseg101((int)yyvsp[-14].d,MSH_SEGM_PARAMETRIC,2,NULL,NULL,-1,-1,yyvsp[-10].d,yyvsp[-8].d,yyvsp[-6].c,yyvsp[-4].c,yyvsp[-2].c);
      yyval.s.Type = MSH_SEGM_PARAMETRIC ;
      yyval.s.Num  = (int)yyvsp[-14].d;
    ;
    break;}
case 179:
#line 1284 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_PHYSICAL_LINE,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_PHYSICAL_LINE;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 180:
#line 1290 "Gmsh.y"
{
      yyval.s.Type = MSH_SEGM_LOOP;
      Cdbz101((int)yyvsp[-4].d,yyval.s.Type,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Num = (int)yyvsp[-4].d;
    ;
    break;}
case 181:
#line 1296 "Gmsh.y"
{
      if(List_Nbr(yyvsp[-1].l) > 3){
	Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_BSPLN,2,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
	yyval.s.Type = MSH_SEGM_BSPLN;
	yyval.s.Num  = (int)yyvsp[-4].d;
      }
      else
	vyyerror("Too few control points for BSpline %d (%d < 4)", (int)yyvsp[-4].d, 
		 List_Nbr(yyvsp[-1].l));
    ;
    break;}
case 182:
#line 1307 "Gmsh.y"
{
      if(List_Nbr(yyvsp[-1].l) > 3){
	Cdbseg101((int)yyvsp[-4].d,MSH_SEGM_BEZIER,2,yyvsp[-1].l,NULL,-1,-1,0.,1.,NULL,NULL,NULL);
	yyval.s.Type = MSH_SEGM_BSPLN;
	yyval.s.Num  = (int)yyvsp[-4].d;
      }
      else
	vyyerror("Too few control points for Bezier %d (%d < 4)", (int)yyvsp[-4].d, 
		 List_Nbr(yyvsp[-1].l));
    ;
    break;}
case 183:
#line 1318 "Gmsh.y"
{
      List_T *Temp;
      int i;
      double d;
      if(List_Nbr(yyvsp[-5].l) + (int)yyvsp[-1].d + 1 != List_Nbr(yyvsp[-3].l)){
	vyyerror("Wrong definition of Nurbs Curve %d: "
		 "got %d Knots, need N + D + 1 = %d + %d + 1 = %d",
		 (int)yyvsp[-8].d, 
		 List_Nbr(yyvsp[-3].l), List_Nbr(yyvsp[-5].l), (int)yyvsp[-1].d, List_Nbr(yyvsp[-5].l) + (int)yyvsp[-1].d + 1);
      }
      else{
	Temp = List_Create(List_Nbr(yyvsp[-5].l),1,sizeof(int));
	for(i=0;i<List_Nbr(yyvsp[-5].l);i++) {
	  List_Read(yyvsp[-5].l,i,&d);
	  j = (int)d;
	  List_Add(Temp,&j);
	}
	AddCurveInDataBase ((int)yyvsp[-8].d,MSH_SEGM_NURBS,(int)yyvsp[-1].d,Temp,yyvsp[-3].l,-1,-1,0.,1.);
	List_Delete(Temp);
      }
    ;
    break;}
case 184:
#line 1343 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_SURF_PLAN,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_SURF_PLAN;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 185:
#line 1349 "Gmsh.y"
{
      Surface *s,*support;
      support = FindSurface((int)yyvsp[-4].d,THEM);
      if(!support)
	vyyerror("Unkown Surface %d", (int)yyvsp[-4].d);
      else{
	Cdbz101((int)yyvsp[-8].d,MSH_SURF_PLAN,0,0,0,0,0,NULL,yyvsp[-2].l,NULL);
	s = FindSurface((int)yyvsp[-8].d,THEM);
	if(!s)
	  vyyerror("Unkown Surface %d", (int)yyvsp[-8].d);
	else{
	  s->Typ =  MSH_SURF_TRIMMED;
	  s->Support = support;
	  yyval.s.Type = MSH_SURF_TRIMMED;
	  yyval.s.Num  = (int)yyvsp[-8].d;
	}
      }
    ;
    break;}
case 186:
#line 1368 "Gmsh.y"
{
      List_Read(yyvsp[-1].l,0,&d);
      i = (int)d;
      EdgeLoop *el = FindEdgeLoop(i,THEM);
      if(!el)
	vyyerror("Unkown Line Loop %d", i);
      else{
	j = List_Nbr(el->Curves);
	if(j==4)
	  yyval.s.Type = MSH_SURF_REGL;
	else if(j==3)
	  yyval.s.Type  = MSH_SURF_TRIC;
	else
	  vyyerror("Wrong definition of Ruled Surface %d: "
		   "%d borders instead of 3 or 4", 
		   (int)yyvsp[-4].d, j);
	Cdbz101((int)yyvsp[-4].d,yyval.s.Type,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
	yyval.s.Num = (int)yyvsp[-4].d;
      }
    ;
    break;}
case 187:
#line 1391 "Gmsh.y"
{
      CreateNurbsSurface ( (int) yyvsp[-16].d , (int)yyvsp[-4].d , (int)yyvsp[-2].d  , yyvsp[-13].l, yyvsp[-10].l, yyvsp[-8].l);
      yyval.s.Type  = MSH_SURF_NURBS;
      yyval.s.Num = (int)yyvsp[-16].d;
    ;
    break;}
case 188:
#line 1399 "Gmsh.y"
{
      CreateNurbsSurfaceSupport ((int)yyvsp[-16].d, (int) yyvsp[-4].d , (int) yyvsp[-2].d , yyvsp[-13].l, yyvsp[-10].l, yyvsp[-8].l);
    ;
    break;}
case 189:
#line 1403 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_PHYSICAL_SURFACE,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_PHYSICAL_SURFACE;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 190:
#line 1409 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_SURF_LOOP,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_SURF_LOOP;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 191:
#line 1418 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_VOLUME,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_VOLUME;
      yyval.s.Num  = (int)yyvsp[-4].d;      
    ;
    break;}
case 192:
#line 1424 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_VOLUME,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_VOLUME;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 193:
#line 1430 "Gmsh.y"
{
      Cdbz101((int)yyvsp[-4].d,MSH_PHYSICAL_VOLUME,0,0,0,0,0,NULL,yyvsp[-1].l,NULL);
      yyval.s.Type = MSH_PHYSICAL_VOLUME;
      yyval.s.Num  = (int)yyvsp[-4].d;
    ;
    break;}
case 194:
#line 1443 "Gmsh.y"
{
      TranslateShapes (yyvsp[-3].v[0],yyvsp[-3].v[1],yyvsp[-3].v[2],yyvsp[-1].l,1);
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 195:
#line 1448 "Gmsh.y"
{
      RotateShapes(yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].d,yyvsp[-1].l);
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 196:
#line 1453 "Gmsh.y"
{
      SymmetryShapes(yyvsp[-3].v[0],yyvsp[-3].v[1],yyvsp[-3].v[2],yyvsp[-3].v[3],yyvsp[-1].l,1);
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 197:
#line 1458 "Gmsh.y"
{
      DilatShapes(yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].d,yyvsp[-1].l,1);
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 198:
#line 1465 "Gmsh.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 199:
#line 1466 "Gmsh.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 200:
#line 1467 "Gmsh.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 201:
#line 1472 "Gmsh.y"
{
      yyval.l = List_Create(3,3,sizeof(Shape));
    ;
    break;}
case 202:
#line 1476 "Gmsh.y"
{
      List_Add(yyval.l,&yyvsp[0].s);
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 203:
#line 1481 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-2].l);i++){
	List_Read(yyvsp[-2].l, i, &d);
	TheShape.Num = (int)d;
	Vertex *v = FindPoint(TheShape.Num,THEM);
	if(!v)
	  vyyerror("Unknown Point %d", TheShape.Num);
	else{
	  TheShape.Type = MSH_POINT;
	  List_Add(yyval.l,&TheShape);
	}
      }
      yyval.l = yyvsp[-5].l;
    ;
    break;}
case 204:
#line 1496 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-2].l);i++){
	List_Read(yyvsp[-2].l, i, &d);
	TheShape.Num = (int)d;
	Curve *c = FindCurve(TheShape.Num,THEM);
	if(!c)
	  vyyerror("Unknown Curve %d", TheShape.Num);
	else{
	  TheShape.Type = c->Typ;
	  List_Add(yyval.l,&TheShape);
	}
      }
      yyval.l = yyvsp[-5].l;
    ;
    break;}
case 205:
#line 1511 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-2].l);i++){
	List_Read(yyvsp[-2].l, i, &d);
	TheShape.Num = (int)d;
	Surface *s = FindSurface(TheShape.Num,THEM);
	if(!s)
	  vyyerror("Unknown Surface %d", TheShape.Num);
	else{
	  TheShape.Type = s->Typ;
	  List_Add(yyval.l,&TheShape);
	}
      }
      yyval.l = yyvsp[-5].l;
    ;
    break;}
case 206:
#line 1533 "Gmsh.y"
{
      yyval.l = List_Create(3,3,sizeof(Shape));
      for(i=0;i<List_Nbr(yyvsp[-1].l);i++){
	List_Read (yyvsp[-1].l,i,&TheShape);
	CopyShape(TheShape.Type,TheShape.Num,&j);
	TheShape.Num = j;
	List_Add(yyval.l,&TheShape);
      }
    ;
    break;}
case 207:
#line 1551 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-1].l);i++){
	List_Read (yyvsp[-1].l,i,&TheShape);
	DeleteShape(TheShape.Type,TheShape.Num);
      }
    ;
    break;}
case 208:
#line 1558 "Gmsh.y"
{
	if(!strcmp(yyvsp[-4].c, "View"))
	  FreeView((int)yyvsp[-2].d);
      ;
    break;}
case 209:
#line 1563 "Gmsh.y"
{
      Init_Mesh(THEM, 1);
    ;
    break;}
case 210:
#line 1574 "Gmsh.y"
{
      for(i=0;i<List_Nbr(yyvsp[-1].l);i++){
	List_Read (yyvsp[-1].l,i,&TheShape);
	ColorShape(TheShape.Type,TheShape.Num,yyvsp[-3].u);
      }
    ;
    break;}
case 211:
#line 1588 "Gmsh.y"
{
      if(!strcmp(yyvsp[-2].c, "Include")){

	yyinTab[RecursionLevel++] = yyin;

	strcpy(tmpstring, yyname);
	i = strlen(yyname)-1 ;
	while(i >= 0 && yyname[i] != '/' && yyname[i] != '\\') i-- ;
	tmpstring[i+1] = '\0';
	strcat(tmpstring,yyvsp[-1].c);

	if((yyin = fopen(tmpstring,"r"))){
	  Msg(INFO, "Including '%s'", tmpstring); 
	  strcpy(yynameTab[RecursionLevel-1],yyname);
	  yylinenoTab[RecursionLevel-1]=yylineno;
	  yylineno=1;
	  strcpy(yyname,tmpstring);
	  while(!feof(yyin)){
	    yyparse();
	  }
	  //
	  //Est-ce grave de laisser le stream ouvert? Si on fait le
	  //fclose, on ne peut pas faire appel a une fonction
	  //(Function) definie en dehors de son fichier de
	  //definition...
	  //
	  //fclose(yyin);
	  yyin = yyinTab[--RecursionLevel];
	  strcpy(yyname,yynameTab[RecursionLevel]);
	  yylineno = yylinenoTab[RecursionLevel];
	}
	else{
	  vyyerror("Unknown file '%s'", tmpstring) ;  
	  yyin = yyinTab[--RecursionLevel];
	}

      }
      else if(!strcmp(yyvsp[-2].c, "Print")){
#ifndef _BLACKBOX
	if(!CTX.batch) CreateOutputFile(yyvsp[-1].c, CTX.print.format);
#endif
      }
      else if(!strcmp(yyvsp[-2].c, "Save")){
#ifndef _BLACKBOX
	CreateOutputFile(yyvsp[-1].c, CTX.mesh.format);
#endif
      }

      else if(!strcmp(yyvsp[-2].c, "Merge")){

	FILE *ff = yyin;
	MergeProblem(yyvsp[-1].c);
	yyin = ff;

      }
      else if(!strcmp(yyvsp[-2].c, "Open")){

	FILE *ff = yyin;
	OpenProblem(yyvsp[-1].c);
	yyin = ff;

      }
      else if(!strcmp(yyvsp[-2].c, "System")){
	
	Msg(PARSER_INFO, "Executing system call \"%s\"", yyvsp[-1].c);
	system(yyvsp[-1].c);

      }
      else
	vyyerror("Unknown command '%s'", yyvsp[-2].c);
    ;
    break;}
case 212:
#line 1660 "Gmsh.y"
{
      if(!strcmp(yyvsp[-2].c, "Sleep")){

	long sleep_time = GetTime();
	while(1){
	  if(GetTime() - sleep_time > (long)(yyvsp[-1].d*1.e6)) break;
	}
      
      }
      else if(!strcmp(yyvsp[-2].c, "Mesh")){

	//Maillage_Dimension_0(THEM);
	//mai3d(THEM,(int)$2);
	vyyerror("Mesh directives are not (yet) allowed in scripts");

      }
      else
	vyyerror("Unknown command '%s'", yyvsp[-2].c);
    ;
    break;}
case 213:
#line 1680 "Gmsh.y"
{
#ifndef _NOPLUGIN
    if(CTX.default_plugins)
      GMSH_PluginManager::Instance()->Action(yyvsp[-4].c,yyvsp[-1].c,0); 
#endif
   ;
    break;}
case 214:
#line 1687 "Gmsh.y"
{
      exit(0);
    ;
    break;}
case 215:
#line 1691 "Gmsh.y"
{
#ifndef _BLACKBOX
      if(!CTX.batch){ // we're in interactive mode
	if(Tree_Nbr(THEM->Points) != Last_NumberOfPoints){
	  Last_NumberOfPoints = Tree_Nbr(THEM->Points);
	  Replot();
	  DrawUI();
	}
	else{
	  Draw();
	  DrawUI();
	}
      }
#endif
    ;
    break;}
case 216:
#line 1715 "Gmsh.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylineno;
      ImbricatedLoop++;
    ;
    break;}
case 217:
#line 1725 "Gmsh.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylineno;
      ImbricatedLoop++;
    ;
    break;}
case 218:
#line 1735 "Gmsh.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;
      
      TheSymbol.Name = yyvsp[-6].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	TheSymbol.val = List_Create(1,1,sizeof(double));
	List_Put(TheSymbol.val, 0, &yyvsp[-3].d);
	List_Add(Symbol_L, &TheSymbol);
      }
      else{
	List_Write(pSymbol->val, 0, &yyvsp[-3].d);
      }
      
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylineno;
      ImbricatedLoop++;
    ;
    break;}
case 219:
#line 1756 "Gmsh.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;

      TheSymbol.Name = yyvsp[-8].c;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))){
	TheSymbol.val = List_Create(1,1,sizeof(double));
	List_Put(TheSymbol.val, 0, &yyvsp[-5].d);
	List_Add(Symbol_L, &TheSymbol);
      }
      else{
	List_Write(pSymbol->val, 0, &yyvsp[-5].d);
      }
      
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylineno;
      ImbricatedLoop++;
    ;
    break;}
case 220:
#line 1777 "Gmsh.y"
{
      if(LoopControlVariablesTab[ImbricatedLoop-1][1] >  
	 LoopControlVariablesTab[ImbricatedLoop-1][0]){
	LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	  LoopControlVariablesTab[ImbricatedLoop-1][2];
	
	if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	  TheSymbol.Name = LoopControlVariablesNameTab[ImbricatedLoop-1];
	  pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols);
	  *(double*)List_Pointer_Fast(pSymbol->val, 0) += 
	    LoopControlVariablesTab[ImbricatedLoop-1][2] ;
	}
	
	fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	yylineno = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
      }
      else{
	ImbricatedLoop--;
      }
    ;
    break;}
case 221:
#line 1798 "Gmsh.y"
{
      if(!FunctionManager::Instance()->createFunction(yyvsp[0].c,yyin,yyname,yylineno))
	vyyerror("Redefinition of function %s",yyvsp[0].c);
      skip_until(NULL, "Return");
    ;
    break;}
case 222:
#line 1804 "Gmsh.y"
{
      if(!FunctionManager::Instance()->leaveFunction(&yyin,yyname,yylineno))
	vyyerror("Error while exiting function");
    ;
    break;}
case 223:
#line 1809 "Gmsh.y"
{
      if(!FunctionManager::Instance()->enterFunction(yyvsp[-1].c,&yyin,yyname,yylineno))
	vyyerror("Unknown function %s",yyvsp[-1].c);
    ;
    break;}
case 224:
#line 1814 "Gmsh.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 225:
#line 1818 "Gmsh.y"
{
    ;
    break;}
case 226:
#line 1830 "Gmsh.y"
{
      Curve *pc, *prc;
      Extrude_ProtudePoint(TRANSLATE,(int)yyvsp[-4].d,yyvsp[-2].v[0],yyvsp[-2].v[1],yyvsp[-2].v[2],
			   0.,0.,0.,0.,0.,0.,0.,
			   &pc,&prc,NULL);
    ;
    break;}
case 227:
#line 1837 "Gmsh.y"
{
      Curve *pc, *prc;
      Extrude_ProtudePoint(ROTATE,(int)yyvsp[-8].d,0.,0.,0.,
			   yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,
			   &pc,&prc,NULL);
    ;
    break;}
case 228:
#line 1844 "Gmsh.y"
{
      Curve *pc, *prc;
      Extrude_ProtudePoint(TRANSLATE_ROTATE,(int)yyvsp[-10].d,yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],
			   yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,
			   &pc,&prc,NULL);
    ;
    break;}
case 229:
#line 1853 "Gmsh.y"
{
      Extrude_ProtudeCurve(TRANSLATE,(int)yyvsp[-4].d,yyvsp[-2].v[0],yyvsp[-2].v[1],yyvsp[-2].v[2],
			   0.,0.,0.,0.,0.,0.,0.,1,NULL);
    ;
    break;}
case 230:
#line 1858 "Gmsh.y"
{
      Extrude_ProtudeCurve(ROTATE,(int)yyvsp[-8].d,0.,0.,0.,
			   yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,1,NULL);
    ;
    break;}
case 231:
#line 1863 "Gmsh.y"
{
      Extrude_ProtudeCurve(TRANSLATE_ROTATE,(int)yyvsp[-10].d,yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],
			   yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,1,NULL);
    ;
    break;}
case 232:
#line 1868 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 233:
#line 1873 "Gmsh.y"
{
      Extrude_ProtudeCurve(TRANSLATE,(int)yyvsp[-8].d,yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],
			   0.,0.,0.,0.,0.,0.,0.,1,&extr);
    ;
    break;}
case 234:
#line 1878 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 235:
#line 1883 "Gmsh.y"
{
      Extrude_ProtudeCurve(ROTATE,(int)yyvsp[-12].d,0.,0.,0.,
			   yyvsp[-10].v[0],yyvsp[-10].v[1],yyvsp[-10].v[2],yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],yyvsp[-6].d,1,&extr);
    ;
    break;}
case 236:
#line 1888 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 237:
#line 1893 "Gmsh.y"
{
      Extrude_ProtudeCurve(TRANSLATE_ROTATE,(int)yyvsp[-14].d,yyvsp[-12].v[0],yyvsp[-12].v[1],yyvsp[-12].v[2],
			   yyvsp[-10].v[0],yyvsp[-10].v[1],yyvsp[-10].v[2],yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],yyvsp[-6].d,1,&extr);
    ;
    break;}
case 238:
#line 1901 "Gmsh.y"
{
      Extrude_ProtudeSurface(TRANSLATE,(int)yyvsp[-4].d,yyvsp[-2].v[0],yyvsp[-2].v[1],yyvsp[-2].v[2],
			     0.,0.,0.,0.,0.,0.,0.,0,NULL);
    ;
    break;}
case 239:
#line 1906 "Gmsh.y"
{
      Extrude_ProtudeSurface(ROTATE,(int)yyvsp[-8].d,0.,0.,0.,
			     yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,0,NULL);
    ;
    break;}
case 240:
#line 1911 "Gmsh.y"
{
      Extrude_ProtudeSurface(TRANSLATE_ROTATE,(int)yyvsp[-10].d,yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],
			     yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],yyvsp[-4].v[0],yyvsp[-4].v[1],yyvsp[-4].v[2],yyvsp[-2].d,0,NULL);
    ;
    break;}
case 241:
#line 1916 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 242:
#line 1921 "Gmsh.y"
{
      int vol = NEWREG();
      Extrude_ProtudeSurface(TRANSLATE,(int)yyvsp[-8].d,yyvsp[-6].v[0],yyvsp[-6].v[1],yyvsp[-6].v[2],
			     0.,0.,0.,0.,0.,0.,0.,vol,&extr);
    ;
    break;}
case 243:
#line 1927 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 244:
#line 1933 "Gmsh.y"
{
      int vol = NEWREG();
      Extrude_ProtudeSurface(ROTATE,(int)yyvsp[-12].d,0.,0.,0.,
			     yyvsp[-10].v[0],yyvsp[-10].v[1],yyvsp[-10].v[2],yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],yyvsp[-6].d,vol,&extr);
    ;
    break;}
case 245:
#line 1939 "Gmsh.y"
{
      extr.mesh.ExtrudeMesh = false;
      extr.mesh.Recombine = false;
    ;
    break;}
case 246:
#line 1945 "Gmsh.y"
{
      int vol = NEWREG();
      Extrude_ProtudeSurface(TRANSLATE_ROTATE,(int)yyvsp[-14].d,yyvsp[-12].v[0],yyvsp[-12].v[1],yyvsp[-12].v[2],
			     yyvsp[-10].v[0],yyvsp[-10].v[1],yyvsp[-10].v[2],yyvsp[-8].v[0],yyvsp[-8].v[1],yyvsp[-8].v[2],yyvsp[-6].d,vol,&extr);
    ;
    break;}
case 247:
#line 1954 "Gmsh.y"
{
    ;
    break;}
case 248:
#line 1957 "Gmsh.y"
{
    ;
    break;}
case 249:
#line 1963 "Gmsh.y"
{
      double d;
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr(yyvsp[-6].l);
      if(List_Nbr(yyvsp[-6].l) == List_Nbr(yyvsp[-4].l) && List_Nbr(yyvsp[-6].l) == List_Nbr(yyvsp[-2].l)){
	extr.mesh.NbElmLayer = (int*)Malloc(extr.mesh.NbLayer*sizeof(int));
	extr.mesh.ZonLayer = (int*)Malloc(extr.mesh.NbLayer*sizeof(int));
	extr.mesh.hLayer = (double*)Malloc(extr.mesh.NbLayer*sizeof(double));
	for(int i=0;i<List_Nbr(yyvsp[-6].l);i++){
	  List_Read(yyvsp[-6].l,i,&d);
	  extr.mesh.NbElmLayer[i] = (d>0)?(int)d:1;
	  List_Read(yyvsp[-4].l,i,&d);
	  extr.mesh.ZonLayer[i] = (int)d;
	  List_Read(yyvsp[-2].l,i,&d);
	  extr.mesh.hLayer[i] = d;
	}
      }
      else{
	vyyerror("Wrong layer definition {%d, %d, %d}", 
	       List_Nbr(yyvsp[-6].l), List_Nbr(yyvsp[-4].l), List_Nbr(yyvsp[-2].l));
      }
      List_Delete(yyvsp[-6].l);
      List_Delete(yyvsp[-4].l);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 250:
#line 1989 "Gmsh.y"
{
      double d;
      extr.mesh.ExtrudeMesh = true;
      extr.mesh.NbLayer = List_Nbr(yyvsp[-4].l);
      if(List_Nbr(yyvsp[-4].l) == List_Nbr(yyvsp[-2].l)){
	extr.mesh.NbElmLayer = (int*)Malloc(extr.mesh.NbLayer*sizeof(int));
	extr.mesh.ZonLayer = (int*)Malloc(extr.mesh.NbLayer*sizeof(int));
	extr.mesh.hLayer = (double*)Malloc(extr.mesh.NbLayer*sizeof(double));
	for(int i=0;i<List_Nbr(yyvsp[-4].l);i++){
	  List_Read(yyvsp[-4].l,i,&d);
	  extr.mesh.NbElmLayer[i] = (d>0)?(int)d:1;
	  extr.mesh.ZonLayer[i] = 0;
	  List_Read(yyvsp[-2].l,i,&d);
	  extr.mesh.hLayer[i] = d;
	}
      }
      else{
	vyyerror("Wrong layer definition {%d, %d}", 
	       List_Nbr(yyvsp[-4].l), List_Nbr(yyvsp[-2].l));
      }
      List_Delete(yyvsp[-4].l);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 251:
#line 2013 "Gmsh.y"
{
      extr.mesh.Recombine = true;
    ;
    break;}
case 252:
#line 2024 "Gmsh.y"
{
      Curve *c;
      for(i=0;i<List_Nbr(yyvsp[-3].l);i++){
	List_Read(yyvsp[-3].l,i,&d);
	j = (int)fabs(d);
        c = FindCurve(j,THEM);
	if(!c)
	  Msg(WARNING, "Unkown Curve %d", j);
	else{
	  c->Method = TRANSFINI;
	  c->ipar[0] = (yyvsp[-1].d>2)?(int)yyvsp[-1].d:2;
	  c->ipar[1] = sign(d);
	  c->dpar[0] = 1.0;
	}
      }
      List_Delete(yyvsp[-3].l);
    ;
    break;}
case 253:
#line 2042 "Gmsh.y"
{
      Curve *c;
      for(i=0;i<List_Nbr(yyvsp[-6].l);i++){
	List_Read(yyvsp[-6].l,i,&d);
	j = (int)fabs(d);
        c = FindCurve(j,THEM);
	if(!c)
	  Msg(WARNING, "Unkown Curve %d", j);
	else{
	  c->Method = TRANSFINI;
	  c->ipar[0] = (yyvsp[-4].d>2)?(int)yyvsp[-4].d:2;
	  c->ipar[1] = sign(d); /* Progresion : code 1 ou -1 */
	  c->dpar[0] = fabs(yyvsp[-1].d);
	}
      }
      List_Delete(yyvsp[-6].l);
    ;
    break;}
case 254:
#line 2060 "Gmsh.y"
{
      Curve *c;
      for(i=0;i<List_Nbr(yyvsp[-6].l);i++){
	List_Read(yyvsp[-6].l,i,&d);
	j = (int)fabs(d);
        c = FindCurve(j,THEM);
	if(!c)
	  Msg(WARNING, "Unkown Curve %d", j);
	else{
	  c->Method = TRANSFINI;
	  c->ipar[0] = (yyvsp[-4].d>2)?(int)yyvsp[-4].d:2;
	  c->ipar[1] = 2*sign(d); /* Bump : code 2 ou -2 */
	  c->dpar[0] = fabs(yyvsp[-1].d);
	}
      }
      List_Delete(yyvsp[-6].l);
    ;
    break;}
case 255:
#line 2078 "Gmsh.y"
{
      Surface *s = FindSurface((int)yyvsp[-4].d,THEM);
      if(!s)
	Msg(WARNING, "Unkown Surface %d", (int)yyvsp[-4].d);
      else{
	s->Method = TRANSFINI;
	k = List_Nbr(yyvsp[-1].l);
	if(k!=3 && k!=4){
	  vyyerror("Wrong definition of Transfinite Surface %d: "
		   "%d points instead of 3 or 4" , yyvsp[-4].d, k) ;
	}
	else{
	  for(i=0;i<k;i++){
	    List_Read(yyvsp[-1].l,i,&d);
	    j = (int)fabs(d);
	    s->ipar[i] = j;
	  }
	}
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 256:
#line 2100 "Gmsh.y"
{
      Surface *s = FindSurface((int)yyvsp[-4].d,THEM);
      if(!s)
	Msg(WARNING, "Unkown Surface %d", (int)yyvsp[-4].d);
      else{
        s->Method = ELLIPTIC;
        k = List_Nbr(yyvsp[-1].l);
        if(k != 4)
	  vyyerror("Wrong definition of Elliptic Surface %d: "
		   "%d points instead of 4" , yyvsp[-4].d, k) ;
        else{
	  for(i=0;i<k;i++){
	    List_Read(yyvsp[-1].l,i,&d);
	    j = (int)fabs(d);
	    s->ipar[i] = j;
	  }
	}
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 257:
#line 2121 "Gmsh.y"
{
      Volume *v = FindVolume((int)yyvsp[-4].d,THEM);
      if(!v)
	Msg(WARNING, "Unkown Volume %d", (int)yyvsp[-4].d);
      else{
	v->Method = TRANSFINI;
	k = List_Nbr(yyvsp[-1].l);
	if(k!=6 && k!=8)
	  vyyerror("Wrong definition of Transfinite Volume %d: "
		   "%d points instead of 6 or 8" , yyvsp[-4].d, k) ;
	else{
	  for(i=0;i<k;i++){
	    List_Read(yyvsp[-1].l,i,&d);
	    j = (int)fabs(d);
	    v->ipar[i] = j;
	  }
	}
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 258:
#line 2142 "Gmsh.y"
{
      Surface *s;
      for(i=0;i<List_Nbr(yyvsp[-3].l);i++){
	List_Read(yyvsp[-3].l,i,&d);
	j = (int)d;
	s = FindSurface(j,THEM);
	if(s){
	  s->Recombine = 1;
	  s->RecombineAngle = (yyvsp[-1].d > 0 && yyvsp[-1].d < 90) ? yyvsp[-1].d : 90;
	}
      }
      List_Delete(yyvsp[-3].l);
    ;
    break;}
case 259:
#line 2156 "Gmsh.y"
{
      Surface *s;
      for(i=0;i<List_Nbr(yyvsp[-1].l);i++){
	List_Read(yyvsp[-1].l,i,&d);
	j = (int)d;
        s = FindSurface(j,THEM);
	if(s){
	  s->Recombine = 1;
	  s->RecombineAngle = 30.;
        }
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 260:
#line 2178 "Gmsh.y"
{ 
      ReplaceAllDuplicates(THEM);
    ;
    break;}
case 261:
#line 2182 "Gmsh.y"
{ 
      IntersectAllSegmentsTogether();
    ;
    break;}
case 262:
#line 2193 "Gmsh.y"
{yyval.i = 1;;
    break;}
case 263:
#line 2194 "Gmsh.y"
{yyval.i = 0;;
    break;}
case 264:
#line 2195 "Gmsh.y"
{yyval.i = -1;;
    break;}
case 265:
#line 2196 "Gmsh.y"
{yyval.i = -1;;
    break;}
case 266:
#line 2197 "Gmsh.y"
{yyval.i = -1;;
    break;}
case 267:
#line 2201 "Gmsh.y"
{ yyval.d = yyvsp[0].d;           ;
    break;}
case 268:
#line 2202 "Gmsh.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 269:
#line 2203 "Gmsh.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 270:
#line 2204 "Gmsh.y"
{ yyval.d = yyvsp[0].d;           ;
    break;}
case 271:
#line 2205 "Gmsh.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 272:
#line 2206 "Gmsh.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 273:
#line 2207 "Gmsh.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 274:
#line 2208 "Gmsh.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 275:
#line 2210 "Gmsh.y"
{ 
      if(!yyvsp[0].d)
	vyyerror("Division by zero in '%g / %g'", yyvsp[-2].d, yyvsp[0].d);
      else
	yyval.d = yyvsp[-2].d / yyvsp[0].d ;     
    ;
    break;}
case 276:
#line 2216 "Gmsh.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 277:
#line 2217 "Gmsh.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 278:
#line 2218 "Gmsh.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 279:
#line 2219 "Gmsh.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 280:
#line 2220 "Gmsh.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 281:
#line 2221 "Gmsh.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 282:
#line 2222 "Gmsh.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 283:
#line 2223 "Gmsh.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 284:
#line 2224 "Gmsh.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 285:
#line 2225 "Gmsh.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 286:
#line 2226 "Gmsh.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 287:
#line 2227 "Gmsh.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 288:
#line 2228 "Gmsh.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 289:
#line 2229 "Gmsh.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 290:
#line 2230 "Gmsh.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 291:
#line 2231 "Gmsh.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 292:
#line 2232 "Gmsh.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 293:
#line 2233 "Gmsh.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 294:
#line 2234 "Gmsh.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 295:
#line 2235 "Gmsh.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 296:
#line 2236 "Gmsh.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 297:
#line 2237 "Gmsh.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 298:
#line 2238 "Gmsh.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 299:
#line 2239 "Gmsh.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 300:
#line 2240 "Gmsh.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 301:
#line 2241 "Gmsh.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 302:
#line 2242 "Gmsh.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 303:
#line 2243 "Gmsh.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 304:
#line 2244 "Gmsh.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 305:
#line 2245 "Gmsh.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 306:
#line 2246 "Gmsh.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d); ;
    break;}
case 307:
#line 2247 "Gmsh.y"
{ yyval.d = yyvsp[-1].d*(double)rand()/(double)RAND_MAX; ;
    break;}
case 308:
#line 2249 "Gmsh.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 309:
#line 2250 "Gmsh.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 310:
#line 2251 "Gmsh.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 311:
#line 2252 "Gmsh.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 312:
#line 2253 "Gmsh.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 313:
#line 2254 "Gmsh.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 314:
#line 2255 "Gmsh.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 315:
#line 2256 "Gmsh.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 316:
#line 2257 "Gmsh.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 317:
#line 2258 "Gmsh.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 318:
#line 2259 "Gmsh.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 319:
#line 2260 "Gmsh.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 320:
#line 2261 "Gmsh.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 321:
#line 2262 "Gmsh.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 322:
#line 2263 "Gmsh.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 323:
#line 2264 "Gmsh.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 324:
#line 2265 "Gmsh.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 325:
#line 2266 "Gmsh.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 326:
#line 2267 "Gmsh.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 327:
#line 2268 "Gmsh.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d); ;
    break;}
case 328:
#line 2269 "Gmsh.y"
{ yyval.d = yyvsp[-1].d*(double)rand()/(double)RAND_MAX; ;
    break;}
case 329:
#line 2278 "Gmsh.y"
{ yyval.d = yyvsp[0].d; ;
    break;}
case 330:
#line 2279 "Gmsh.y"
{ yyval.d = 3.141592653589793; ;
    break;}
case 331:
#line 2280 "Gmsh.y"
{ yyval.d = ParUtil::Instance()->rank(); ;
    break;}
case 332:
#line 2281 "Gmsh.y"
{ yyval.d = ParUtil::Instance()->size(); ;
    break;}
case 333:
#line 2286 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[0].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[0].c) ;
	yyval.d = 0. ;
      }
      else
	yyval.d = *(double*)List_Pointer_Fast(pSymbol->val, 0) ;
    ;
    break;}
case 334:
#line 2297 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-3].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-3].c) ;
	yyval.d = 0. ;
      }
      else{
	if((pd = (double*)List_Pointer_Test(pSymbol->val, (int)yyvsp[-1].d)))
	  yyval.d = *pd ;
	else{
	  vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-3].c, (int)yyvsp[-1].d) ;
	  yyval.d = 0. ;
	}
      }
    ;
    break;}
case 335:
#line 2314 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-1].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-1].c) ;
	yyval.d = 0. ;
      }
      else
	yyval.d = (*(double*)List_Pointer_Fast(pSymbol->val, 0) += yyvsp[0].i) ;
    ;
    break;}
case 336:
#line 2325 "Gmsh.y"
{
      TheSymbol.Name = yyvsp[-4].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-4].c) ;
	yyval.d = 0. ;
      }
      else{
	if((pd = (double*)List_Pointer_Test(pSymbol->val, (int)yyvsp[-2].d)))
	  yyval.d = (*pd += yyvsp[0].i) ;
	else{
	  vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-4].c, (int)yyvsp[-2].d) ;
	  yyval.d = 0. ;
	}
      }
    ;
    break;}
case 337:
#line 2344 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-2].c))){
	vyyerror("Unknown numeric option class '%s'", yyvsp[-2].c);
	yyval.d = 0. ;
      }
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[0].c, pNumCat))){
	  vyyerror("Unknown numeric option '%s.%s'", yyvsp[-2].c, yyvsp[0].c);
	  yyval.d = 0. ;
	}
	else
	  yyval.d = pNumOpt(0, GMSH_GET, 0);
      }
    ;
    break;}
case 338:
#line 2360 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-5].c))){
	vyyerror("Unknown numeric option class '%s'", yyvsp[-5].c);
	yyval.d = 0. ;
      }
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[0].c, pNumCat))){
	  vyyerror("Unknown numeric option '%s[%d].%s'", yyvsp[-5].c, (int)yyvsp[-3].d, yyvsp[0].c);
	  yyval.d = 0. ;
	}
	else
	  yyval.d = pNumOpt((int)yyvsp[-3].d, GMSH_GET, 0);
      }
    ;
    break;}
case 339:
#line 2376 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-3].c))){
	vyyerror("Unknown numeric option class '%s'", yyvsp[-3].c);
	yyval.d = 0. ;
      }
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[-1].c, pNumCat))){
	  vyyerror("Unknown numeric option '%s.%s'", yyvsp[-3].c, yyvsp[-1].c);
	  yyval.d = 0. ;
	}
	else
	  yyval.d = pNumOpt(0, GMSH_SET|GMSH_GUI, pNumOpt(0, GMSH_GET, 0)+yyvsp[0].i);
      }
    ;
    break;}
case 340:
#line 2392 "Gmsh.y"
{
      if(!(pNumCat = Get_NumberOptionCategory(yyvsp[-6].c))){
	vyyerror("Unknown numeric option class '%s'", yyvsp[-6].c);
	yyval.d = 0. ;
      }
      else{
	if(!(pNumOpt =  (double (*) (int, int, double))Get_NumberOption(yyvsp[-1].c, pNumCat))){
	  vyyerror("Unknown numeric option '%s[%d].%s'", yyvsp[-6].c, (int)yyvsp[-4].d, yyvsp[-1].c);
	  yyval.d = 0. ;
	}
	else
	  yyval.d = pNumOpt((int)yyvsp[-4].d, GMSH_SET|GMSH_GUI, pNumOpt((int)yyvsp[-4].d, GMSH_GET, 0)+yyvsp[0].i);
      }
    ;
    break;}
case 341:
#line 2410 "Gmsh.y"
{
      memcpy(yyval.v, yyvsp[0].v, 5*sizeof(double)) ;
    ;
    break;}
case 342:
#line 2414 "Gmsh.y"
{
      for(i=0 ; i<5 ; i++) yyval.v[i] = -yyvsp[0].v[i] ;
    ;
    break;}
case 343:
#line 2418 "Gmsh.y"
{ 
      for(i=0 ; i<5 ; i++) yyval.v[i] = yyvsp[0].v[i];
    ;
    break;}
case 344:
#line 2422 "Gmsh.y"
{ 
      for(i=0 ; i<5 ; i++) yyval.v[i] = yyvsp[-2].v[i] - yyvsp[0].v[i] ;
    ;
    break;}
case 345:
#line 2426 "Gmsh.y"
{
      for(i=0 ; i<5 ; i++) yyval.v[i] = yyvsp[-2].v[i] + yyvsp[0].v[i] ;
    ;
    break;}
case 346:
#line 2433 "Gmsh.y"
{ 
      yyval.v[0]=yyvsp[-9].d;  yyval.v[1]=yyvsp[-7].d;  yyval.v[2]=yyvsp[-5].d;  yyval.v[3]=yyvsp[-3].d; yyval.v[4]=yyvsp[-1].d;
    ;
    break;}
case 347:
#line 2437 "Gmsh.y"
{ 
      yyval.v[0]=yyvsp[-7].d;  yyval.v[1]=yyvsp[-5].d;  yyval.v[2]=yyvsp[-3].d;  yyval.v[3]=yyvsp[-1].d; yyval.v[4]=1.0;
    ;
    break;}
case 348:
#line 2441 "Gmsh.y"
{
      yyval.v[0]=yyvsp[-5].d;  yyval.v[1]=yyvsp[-3].d;  yyval.v[2]=yyvsp[-1].d;  yyval.v[3]=0.0; yyval.v[4]=1.0;
    ;
    break;}
case 349:
#line 2445 "Gmsh.y"
{
      yyval.v[0]=yyvsp[-5].d;  yyval.v[1]=yyvsp[-3].d;  yyval.v[2]=yyvsp[-1].d;  yyval.v[3]=0.0; yyval.v[4]=1.0;
    ;
    break;}
case 350:
#line 2452 "Gmsh.y"
{
    ;
    break;}
case 351:
#line 2455 "Gmsh.y"
{
    ;
    break;}
case 352:
#line 2461 "Gmsh.y"
{
    ;
    break;}
case 353:
#line 2464 "Gmsh.y"
{
    ;
    break;}
case 354:
#line 2470 "Gmsh.y"
{
    ;
    break;}
case 355:
#line 2473 "Gmsh.y"
{
       yyval.l=yyvsp[-1].l;
    ;
    break;}
case 356:
#line 2477 "Gmsh.y"
{
       yyval.l=yyvsp[-1].l;
    ;
    break;}
case 357:
#line 2484 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(List_T*)) ;
      List_Add(yyval.l, &(yyvsp[0].l)) ;
    ;
    break;}
case 358:
#line 2489 "Gmsh.y"
{
      List_Add(yyval.l, &(yyvsp[0].l)) ;
    ;
    break;}
case 359:
#line 2497 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      List_Add(yyval.l, &(yyvsp[0].d)) ;
    ;
    break;}
case 360:
#line 2502 "Gmsh.y"
{
      yyval.l = yyvsp[0].l ;
    ;
    break;}
case 361:
#line 2506 "Gmsh.y"
{
      yyval.l=yyvsp[-1].l;
    ;
    break;}
case 362:
#line 2510 "Gmsh.y"
{
      yyval.l=yyvsp[-1].l;
      for(i=0 ; i<List_Nbr(yyval.l) ; i++){
	pd = (double*)List_Pointer(yyval.l, i);
	(*pd) = - (*pd);
      }
    ;
    break;}
case 363:
#line 2521 "Gmsh.y"
{ 
      yyval.l = List_Create(2,1,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 364:
#line 2527 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
        vyyerror("Wrong increment in '%g:%g:%g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(yyval.l, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d)
	  List_Add(yyval.l, &d) ;
   ;
    break;}
case 365:
#line 2538 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      TheSymbol.Name = yyvsp[-2].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-2].c) ;
	d = 0.0 ;
	List_Add(yyval.l, &d);
      }
      else{
	for(i = 0 ; i < List_Nbr(pSymbol->val) ; i++)
	  List_Add(yyval.l, (double*)List_Pointer_Fast(pSymbol->val, i)) ;
      }
    ;
    break;}
case 366:
#line 2552 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      TheSymbol.Name = yyvsp[-2].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-2].c) ;
	d = 0.0 ;
	List_Add(yyval.l, &d);
      }
      else{
	for(i = 0 ; i < List_Nbr(pSymbol->val) ; i++){
	  d = - *(double*)List_Pointer_Fast(pSymbol->val, i);
	  List_Add(yyval.l, &d) ;
	}
      }
    ;
    break;}
case 367:
#line 2568 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      TheSymbol.Name = yyvsp[-5].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-5].c) ;
	d = 0.0 ;
	List_Add(yyval.l, &d);
      }
      else{
	for(i = 0 ; i < List_Nbr(yyvsp[-2].l) ; i++){
	  j = (int)(*(double*)List_Pointer_Fast(yyvsp[-2].l, i));
	  if((pd = (double*)List_Pointer_Test(pSymbol->val, j)))
	    List_Add(yyval.l, pd) ;
	  else
	    vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-5].c, j) ;	  
	}
      }
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 368:
#line 2588 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      TheSymbol.Name = yyvsp[-5].c ;
      if (!(pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols))) {
	vyyerror("Unknown variable '%s'", yyvsp[-5].c) ;
	d = 0.0 ;
	List_Add(yyval.l, &d);
      }
      else{
	for(i = 0 ; i < List_Nbr(yyvsp[-2].l) ; i++){
	  j = (int)(*(double*)List_Pointer_Fast(yyvsp[-2].l, i));
	  if((pd = (double*)List_Pointer_Test(pSymbol->val, j))){
	    d = - *pd;
	    List_Add(yyval.l, &d) ;
	  }
	  else
	    vyyerror("Uninitialized variable '%s[%d]'", yyvsp[-5].c, j) ;	  
	}
      }
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 369:
#line 2613 "Gmsh.y"
{
      yyval.l = List_Create(2,1,sizeof(double)) ;
      List_Add(yyval.l, &(yyvsp[0].d)) ;
    ;
    break;}
case 370:
#line 2618 "Gmsh.y"
{
      yyval.l = yyvsp[0].l ;
    ;
    break;}
case 371:
#line 2622 "Gmsh.y"
{
      List_Add(yyval.l, &(yyvsp[0].d)) ;
    ;
    break;}
case 372:
#line 2626 "Gmsh.y"
{
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 373:
#line 2638 "Gmsh.y"
{
      yyval.u = PACK_COLOR((int)yyvsp[-7].d, (int)yyvsp[-5].d, (int)yyvsp[-3].d, (int)yyvsp[-1].d);
    ;
    break;}
case 374:
#line 2642 "Gmsh.y"
{
      yyval.u = PACK_COLOR((int)yyvsp[-5].d, (int)yyvsp[-3].d, (int)yyvsp[-1].d, 255);
    ;
    break;}
case 375:
#line 2653 "Gmsh.y"
{
      yyval.u = Get_ColorForString(ColorString, -1, yyvsp[0].c, &flag);
      if(flag) vyyerror("Unknown color '%s'", yyvsp[0].c);
    ;
    break;}
case 376:
#line 2658 "Gmsh.y"
{
      if(!(pColCat = Get_ColorOptionCategory(yyvsp[-4].c))){
	vyyerror("Unknown color option class '%s'", yyvsp[-4].c);
	yyval.u = 0 ;
      }
      else{
	if(!(pColOpt =  (unsigned int (*) (int, int, unsigned int))Get_ColorOption(yyvsp[0].c, pColCat))){
	  vyyerror("Unknown color option '%s.Color.%s'", yyvsp[-4].c, yyvsp[0].c);
	  yyval.u = 0 ;
	}
	else{
	  yyval.u = pColOpt(0,GMSH_GET,0) ;
	}
      }
    ;
    break;}
case 377:
#line 2677 "Gmsh.y"
{
      yyval.l = yyvsp[-1].l;
    ;
    break;}
case 378:
#line 2681 "Gmsh.y"
{
      yyval.l = List_Create(256,10,sizeof(unsigned int)) ;
      GmshColorTable *ct = Get_ColorTable((int)yyvsp[-3].d);
      if(!ct)
	vyyerror("View[%d] does not exist", (int)yyvsp[-3].d);
      else{
	for(i=0 ; i<ct->size ; i++) 
	  List_Add(yyval.l, &ct->table[i]);
      }
    ;
    break;}
case 379:
#line 2695 "Gmsh.y"
{
      yyval.l = List_Create(256,10,sizeof(unsigned int)) ;
      List_Add(yyval.l, &(yyvsp[0].u)) ;
    ;
    break;}
case 380:
#line 2700 "Gmsh.y"
{
      List_Add(yyval.l, &(yyvsp[0].u)) ;
    ;
    break;}
case 381:
#line 2707 "Gmsh.y"
{
      yyval.c = yyvsp[0].c;
    ;
    break;}
case 382:
#line 2711 "Gmsh.y"
{
      yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-3].c) ;  
      strcat(yyval.c, yyvsp[-1].c) ;
      Free(yyvsp[-3].c);
      Free(yyvsp[-1].c);
    ;
    break;}
case 383:
#line 2719 "Gmsh.y"
{
      yyval.c = (char *)Malloc((strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
      for(i=strlen(yyvsp[-1].c)-1; i>=0; i--){
	if(yyvsp[-1].c[i] == '.'){
	  strncpy(yyval.c,yyvsp[-1].c,i);
	  yyval.c[i]='\0';
	  break;
	}
      }
      if(i<=0) strcpy(yyval.c,yyvsp[-1].c);
      Free(yyvsp[-1].c);
    ;
    break;}
case 384:
#line 2732 "Gmsh.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 385:
#line 2736 "Gmsh.y"
{
      i = PrintListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstring);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstring)+1)*sizeof(char));
	strcpy(yyval.c, tmpstring);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 386:
#line 2754 "Gmsh.y"
{ 
      if(!(pStrCat = Get_StringOptionCategory(yyvsp[-3].c)))
	vyyerror("Unknown string option class '%s'", yyvsp[-3].c);
      else{
	if(!(pStrOpt = (char *(*) (int, int, char *))Get_StringOption(yyvsp[-1].c, pStrCat)))
	  vyyerror("Unknown string option '%s.%s'", yyvsp[-3].c, yyvsp[-1].c);
	else{
	  str = pStrOpt(0,GMSH_GET,NULL) ;
	  yyval.c = (char*)Malloc((strlen(str)+1)*sizeof(char));
	  strcpy(yyval.c, str);
	}
      }
    ;
    break;}
case 387:
#line 2768 "Gmsh.y"
{ 
      if(!(pStrCat = Get_StringOptionCategory(yyvsp[-6].c)))
	vyyerror("Unknown string option class '%s'", yyvsp[-6].c);
      else{
	if(!(pStrOpt = (char *(*) (int, int, char *))Get_StringOption(yyvsp[-1].c, pStrCat)))
	  vyyerror("Unknown string option '%s[%d].%s'", yyvsp[-6].c, (int)yyvsp[-4].d, yyvsp[-1].c);
	else{
	  str = pStrOpt((int)yyvsp[-4].d,GMSH_GET,NULL) ;
	  yyval.c = (char*)Malloc((strlen(str)+1)*sizeof(char));
	  strcpy(yyval.c, str);
	}
      }
    ;
    break;}
}

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
yyerrhandle:
  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 2783 "Gmsh.y"


void InitSymbols(void){
  if(!Symbol_L)
    Symbol_L = List_Create(50,10,sizeof(Symbol));
  else
    List_Reset(Symbol_L);
}

void DeleteSymbols(void){
  int i;
  for(i = 0 ; i < List_Nbr(Symbol_L) ; i++)
    List_Delete(((Symbol*)List_Pointer_Fast(Symbol_L,i))->val);
  List_Delete(Symbol_L);
}

int CompareSymbols (const void *a, const void *b){
  return(strcmp(((Symbol*)a)->Name,((Symbol*)b)->Name));
}

int PrintListOfDouble(char *format, List_T *list, char *buffer){
  int i, j, k;
  char tmp1[256], tmp2[256];

  j=0;
  while(format[j]!='%') j++;
  strncpy(buffer, format, j); 
  buffer[j]='\0'; 
  for(i = 0 ; i<List_Nbr(list) ; i++){
    k = j;
    j++;
    if(j<(int)strlen(format)){
      if(format[j]=='%'){
	strcat(buffer, "%");
	j++;
      }
      while(format[j]!='%' && j<(int)strlen(format)) j++;
      if(k != j){
	strncpy(tmp1, &(format[k]),j-k);
	tmp1[j-k]='\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list,i)); 
	strcat(buffer, tmp2);
      }
    }
    else{
      return List_Nbr(list)-i;
      break ;
    }
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}
  
void yyerror(char *s){
  Msg(PARSER_ERROR, "'%s', line %d : %s (%s)",yyname,yylineno-1,s,yytext);
  yyerrorstate=1;
}

void vyyerror(char *fmt, ...){
  va_list args;
  char tmp[1024];

  va_start (args, fmt);
  vsprintf (tmp, fmt, args);
  va_end (args);

  Msg(PARSER_ERROR, "'%s', line %d : %s", yyname, yylineno-1, tmp);
  yyerrorstate=1;
}


