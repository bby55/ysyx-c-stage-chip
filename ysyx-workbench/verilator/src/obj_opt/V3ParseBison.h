/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_V3PARSEBISON_PRETMP_H_INCLUDED
# define YY_YY_V3PARSEBISON_PRETMP_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    yaFLOATNUM = 258,              /* "FLOATING-POINT NUMBER"  */
    yaID__ETC = 259,               /* "IDENTIFIER"  */
    yaID__CC = 260,                /* "IDENTIFIER-::"  */
    yaID__LEX = 261,               /* "IDENTIFIER-in-lex"  */
    yaID__aTYPE = 262,             /* "TYPE-IDENTIFIER"  */
    yaINTNUM = 263,                /* "INTEGER NUMBER"  */
    yaTIMENUM = 264,               /* "TIME NUMBER"  */
    yaSTRING = 265,                /* "STRING"  */
    yaSTRING__IGNORE = 266,        /* "STRING-ignored"  */
    yaTIMINGSPEC = 267,            /* "TIMING SPEC ELEMENT"  */
    ygenSTRENGTH = 268,            /* "STRENGTH keyword (strong1/etc)"  */
    yaTABLELINE = 269,             /* "TABLE LINE"  */
    yaSCHDR = 270,                 /* "`systemc_header BLOCK"  */
    yaSCINT = 271,                 /* "`systemc_ctor BLOCK"  */
    yaSCIMP = 272,                 /* "`systemc_dtor BLOCK"  */
    yaSCIMPH = 273,                /* "`systemc_interface BLOCK"  */
    yaSCCTOR = 274,                /* "`systemc_implementation BLOCK"  */
    yaSCDTOR = 275,                /* "`systemc_imp_header BLOCK"  */
    yVLT_CLOCKER = 276,            /* "clocker"  */
    yVLT_CLOCK_ENABLE = 277,       /* "clock_enable"  */
    yVLT_COVERAGE_BLOCK_OFF = 278, /* "coverage_block_off"  */
    yVLT_COVERAGE_OFF = 279,       /* "coverage_off"  */
    yVLT_COVERAGE_ON = 280,        /* "coverage_on"  */
    yVLT_FORCEABLE = 281,          /* "forceable"  */
    yVLT_FULL_CASE = 282,          /* "full_case"  */
    yVLT_HIER_BLOCK = 283,         /* "hier_block"  */
    yVLT_INLINE = 284,             /* "inline"  */
    yVLT_ISOLATE_ASSIGNMENTS = 285, /* "isolate_assignments"  */
    yVLT_LINT_OFF = 286,           /* "lint_off"  */
    yVLT_LINT_ON = 287,            /* "lint_on"  */
    yVLT_NO_CLOCKER = 288,         /* "no_clocker"  */
    yVLT_NO_INLINE = 289,          /* "no_inline"  */
    yVLT_PARALLEL_CASE = 290,      /* "parallel_case"  */
    yVLT_PROFILE_DATA = 291,       /* "profile_data"  */
    yVLT_PUBLIC = 292,             /* "public"  */
    yVLT_PUBLIC_FLAT = 293,        /* "public_flat"  */
    yVLT_PUBLIC_FLAT_RD = 294,     /* "public_flat_rd"  */
    yVLT_PUBLIC_FLAT_RW = 295,     /* "public_flat_rw"  */
    yVLT_PUBLIC_MODULE = 296,      /* "public_module"  */
    yVLT_SC_BV = 297,              /* "sc_bv"  */
    yVLT_SFORMAT = 298,            /* "sformat"  */
    yVLT_SPLIT_VAR = 299,          /* "split_var"  */
    yVLT_TIMING_OFF = 300,         /* "timing_off"  */
    yVLT_TIMING_ON = 301,          /* "timing_on"  */
    yVLT_TRACING_OFF = 302,        /* "tracing_off"  */
    yVLT_TRACING_ON = 303,         /* "tracing_on"  */
    yVLT_D_BLOCK = 304,            /* "--block"  */
    yVLT_D_COST = 305,             /* "--cost"  */
    yVLT_D_FILE = 306,             /* "--file"  */
    yVLT_D_FUNCTION = 307,         /* "--function"  */
    yVLT_D_LEVELS = 308,           /* "--levels"  */
    yVLT_D_LINES = 309,            /* "--lines"  */
    yVLT_D_MATCH = 310,            /* "--match"  */
    yVLT_D_MODEL = 311,            /* "--model"  */
    yVLT_D_MODULE = 312,           /* "--module"  */
    yVLT_D_MTASK = 313,            /* "--mtask"  */
    yVLT_D_RULE = 314,             /* "--rule"  */
    yVLT_D_SCOPE = 315,            /* "--scope"  */
    yVLT_D_TASK = 316,             /* "--task"  */
    yVLT_D_VAR = 317,              /* "--var"  */
    yaD_PLI = 318,                 /* "${pli-system}"  */
    yaT_NOUNCONNECTED = 319,       /* "`nounconnecteddrive"  */
    yaT_RESETALL = 320,            /* "`resetall"  */
    yaT_UNCONNECTED_PULL0 = 321,   /* "`unconnected_drive pull0"  */
    yaT_UNCONNECTED_PULL1 = 322,   /* "`unconnected_drive pull1"  */
    ya1STEP = 323,                 /* "1step"  */
    yALIAS = 324,                  /* "alias"  */
    yALWAYS = 325,                 /* "always"  */
    yALWAYS_COMB = 326,            /* "always_comb"  */
    yALWAYS_FF = 327,              /* "always_ff"  */
    yALWAYS_LATCH = 328,           /* "always_latch"  */
    yAND = 329,                    /* "and"  */
    yASSERT = 330,                 /* "assert"  */
    yASSIGN = 331,                 /* "assign"  */
    yASSUME = 332,                 /* "assume"  */
    yAUTOMATIC = 333,              /* "automatic"  */
    yBEFORE = 334,                 /* "before"  */
    yBEGIN = 335,                  /* "begin"  */
    yBIND = 336,                   /* "bind"  */
    yBIT = 337,                    /* "bit"  */
    yBREAK = 338,                  /* "break"  */
    yBUF = 339,                    /* "buf"  */
    yBUFIF0 = 340,                 /* "bufif0"  */
    yBUFIF1 = 341,                 /* "bufif1"  */
    yBYTE = 342,                   /* "byte"  */
    yCASE = 343,                   /* "case"  */
    yCASEX = 344,                  /* "casex"  */
    yCASEZ = 345,                  /* "casez"  */
    yCHANDLE = 346,                /* "chandle"  */
    yCHECKER = 347,                /* "checker"  */
    yCLASS = 348,                  /* "class"  */
    yCLOCKING = 349,               /* "clocking"  */
    yCMOS = 350,                   /* "cmos"  */
    yCONSTRAINT = 351,             /* "constraint"  */
    yCONST__ETC = 352,             /* "const"  */
    yCONST__LEX = 353,             /* "const-in-lex"  */
    yCONST__REF = 354,             /* "const-then-ref"  */
    yCONTEXT = 355,                /* "context"  */
    yCONTINUE = 356,               /* "continue"  */
    yCOVER = 357,                  /* "cover"  */
    yDEASSIGN = 358,               /* "deassign"  */
    yDEFAULT = 359,                /* "default"  */
    yDEFPARAM = 360,               /* "defparam"  */
    yDISABLE = 361,                /* "disable"  */
    yDIST = 362,                   /* "dist"  */
    yDO = 363,                     /* "do"  */
    yEDGE = 364,                   /* "edge"  */
    yELSE = 365,                   /* "else"  */
    yEND = 366,                    /* "end"  */
    yENDCASE = 367,                /* "endcase"  */
    yENDCHECKER = 368,             /* "endchecker"  */
    yENDCLASS = 369,               /* "endclass"  */
    yENDCLOCKING = 370,            /* "endclocking"  */
    yENDFUNCTION = 371,            /* "endfunction"  */
    yENDGENERATE = 372,            /* "endgenerate"  */
    yENDINTERFACE = 373,           /* "endinterface"  */
    yENDMODULE = 374,              /* "endmodule"  */
    yENDPACKAGE = 375,             /* "endpackage"  */
    yENDPRIMITIVE = 376,           /* "endprimitive"  */
    yENDPROGRAM = 377,             /* "endprogram"  */
    yENDPROPERTY = 378,            /* "endproperty"  */
    yENDSEQUENCE = 379,            /* "endsequence"  */
    yENDSPECIFY = 380,             /* "endspecify"  */
    yENDTABLE = 381,               /* "endtable"  */
    yENDTASK = 382,                /* "endtask"  */
    yENUM = 383,                   /* "enum"  */
    yEVENT = 384,                  /* "event"  */
    yEXPORT = 385,                 /* "export"  */
    yEXTENDS = 386,                /* "extends"  */
    yEXTERN = 387,                 /* "extern"  */
    yFINAL = 388,                  /* "final"  */
    yFOR = 389,                    /* "for"  */
    yFORCE = 390,                  /* "force"  */
    yFOREACH = 391,                /* "foreach"  */
    yFOREVER = 392,                /* "forever"  */
    yFORK = 393,                   /* "fork"  */
    yFORKJOIN = 394,               /* "forkjoin"  */
    yFUNCTION = 395,               /* "function"  */
    yGENERATE = 396,               /* "generate"  */
    yGENVAR = 397,                 /* "genvar"  */
    yGLOBAL__CLOCKING = 398,       /* "global-then-clocking"  */
    yGLOBAL__ETC = 399,            /* "global"  */
    yGLOBAL__LEX = 400,            /* "global-in-lex"  */
    yHIGHZ0 = 401,                 /* "highz0"  */
    yHIGHZ1 = 402,                 /* "highz1"  */
    yIF = 403,                     /* "if"  */
    yIFF = 404,                    /* "iff"  */
    yIMPLEMENTS = 405,             /* "implements"  */
    yIMPORT = 406,                 /* "import"  */
    yINITIAL = 407,                /* "initial"  */
    yINOUT = 408,                  /* "inout"  */
    yINPUT = 409,                  /* "input"  */
    yINSIDE = 410,                 /* "inside"  */
    yINT = 411,                    /* "int"  */
    yINTEGER = 412,                /* "integer"  */
    yINTERCONNECT = 413,           /* "interconnect"  */
    yINTERFACE = 414,              /* "interface"  */
    yJOIN = 415,                   /* "join"  */
    yJOIN_ANY = 416,               /* "join_any"  */
    yJOIN_NONE = 417,              /* "join_none"  */
    yLOCALPARAM = 418,             /* "localparam"  */
    yLOCAL__COLONCOLON = 419,      /* "local-then-::"  */
    yLOCAL__ETC = 420,             /* "local"  */
    yLOCAL__LEX = 421,             /* "local-in-lex"  */
    yLOGIC = 422,                  /* "logic"  */
    yLONGINT = 423,                /* "longint"  */
    yMODPORT = 424,                /* "modport"  */
    yMODULE = 425,                 /* "module"  */
    yNAND = 426,                   /* "nand"  */
    yNEGEDGE = 427,                /* "negedge"  */
    yNETTYPE = 428,                /* "nettype"  */
    yNEW__ETC = 429,               /* "new"  */
    yNEW__LEX = 430,               /* "new-in-lex"  */
    yNEW__PAREN = 431,             /* "new-then-paren"  */
    yNMOS = 432,                   /* "nmos"  */
    yNOR = 433,                    /* "nor"  */
    yNOT = 434,                    /* "not"  */
    yNOTIF0 = 435,                 /* "notif0"  */
    yNOTIF1 = 436,                 /* "notif1"  */
    yNULL = 437,                   /* "null"  */
    yOR = 438,                     /* "or"  */
    yOUTPUT = 439,                 /* "output"  */
    yPACKAGE = 440,                /* "package"  */
    yPACKED = 441,                 /* "packed"  */
    yPARAMETER = 442,              /* "parameter"  */
    yPMOS = 443,                   /* "pmos"  */
    yPOSEDGE = 444,                /* "posedge"  */
    yPRIMITIVE = 445,              /* "primitive"  */
    yPRIORITY = 446,               /* "priority"  */
    yPROGRAM = 447,                /* "program"  */
    yPROPERTY = 448,               /* "property"  */
    yPROTECTED = 449,              /* "protected"  */
    yPULL0 = 450,                  /* "pull0"  */
    yPULL1 = 451,                  /* "pull1"  */
    yPULLDOWN = 452,               /* "pulldown"  */
    yPULLUP = 453,                 /* "pullup"  */
    yPURE = 454,                   /* "pure"  */
    yRAND = 455,                   /* "rand"  */
    yRANDC = 456,                  /* "randc"  */
    yRANDCASE = 457,               /* "randcase"  */
    yRANDOMIZE = 458,              /* "randomize"  */
    yRANDSEQUENCE = 459,           /* "randsequence"  */
    yRCMOS = 460,                  /* "rcmos"  */
    yREAL = 461,                   /* "real"  */
    yREALTIME = 462,               /* "realtime"  */
    yREF = 463,                    /* "ref"  */
    yREG = 464,                    /* "reg"  */
    yRELEASE = 465,                /* "release"  */
    yREPEAT = 466,                 /* "repeat"  */
    yRESTRICT = 467,               /* "restrict"  */
    yRETURN = 468,                 /* "return"  */
    yRNMOS = 469,                  /* "rnmos"  */
    yRPMOS = 470,                  /* "rpmos"  */
    yRTRAN = 471,                  /* "rtran"  */
    yRTRANIF0 = 472,               /* "rtranif0"  */
    yRTRANIF1 = 473,               /* "rtranif1"  */
    ySCALARED = 474,               /* "scalared"  */
    ySHORTINT = 475,               /* "shortint"  */
    ySHORTREAL = 476,              /* "shortreal"  */
    ySIGNED = 477,                 /* "signed"  */
    ySOFT = 478,                   /* "soft"  */
    ySOLVE = 479,                  /* "solve"  */
    ySPECIFY = 480,                /* "specify"  */
    ySPECPARAM = 481,              /* "specparam"  */
    ySTATIC__CONSTRAINT = 482,     /* "static-then-constraint"  */
    ySTATIC__ETC = 483,            /* "static"  */
    ySTATIC__LEX = 484,            /* "static-in-lex"  */
    ySTRING = 485,                 /* "string"  */
    ySTRONG0 = 486,                /* "strong0"  */
    ySTRONG1 = 487,                /* "strong1"  */
    ySTRUCT = 488,                 /* "struct"  */
    ySUPER = 489,                  /* "super"  */
    ySUPPLY0 = 490,                /* "supply0"  */
    ySUPPLY1 = 491,                /* "supply1"  */
    yTABLE = 492,                  /* "table"  */
    yTASK = 493,                   /* "task"  */
    yTHIS = 494,                   /* "this"  */
    yTIME = 495,                   /* "time"  */
    yTIMEPRECISION = 496,          /* "timeprecision"  */
    yTIMEUNIT = 497,               /* "timeunit"  */
    yTRAN = 498,                   /* "tran"  */
    yTRANIF0 = 499,                /* "tranif0"  */
    yTRANIF1 = 500,                /* "tranif1"  */
    yTRI = 501,                    /* "tri"  */
    yTRI0 = 502,                   /* "tri0"  */
    yTRI1 = 503,                   /* "tri1"  */
    yTRIAND = 504,                 /* "triand"  */
    yTRIOR = 505,                  /* "trior"  */
    yTRIREG = 506,                 /* "trireg"  */
    yTRUE = 507,                   /* "true"  */
    yTYPEDEF = 508,                /* "typedef"  */
    yTYPE__EQ = 509,               /* "type-then-eqneq"  */
    yTYPE__ETC = 510,              /* "type"  */
    yTYPE__LEX = 511,              /* "type-in-lex"  */
    yUNION = 512,                  /* "union"  */
    yUNIQUE = 513,                 /* "unique"  */
    yUNIQUE0 = 514,                /* "unique0"  */
    yUNSIGNED = 515,               /* "unsigned"  */
    yUNTYPED = 516,                /* "untyped"  */
    yVAR = 517,                    /* "var"  */
    yVECTORED = 518,               /* "vectored"  */
    yVIRTUAL__CLASS = 519,         /* "virtual-then-class"  */
    yVIRTUAL__ETC = 520,           /* "virtual"  */
    yVIRTUAL__INTERFACE = 521,     /* "virtual-then-interface"  */
    yVIRTUAL__LEX = 522,           /* "virtual-in-lex"  */
    yVIRTUAL__anyID = 523,         /* "virtual-then-identifier"  */
    yVOID = 524,                   /* "void"  */
    yWAIT = 525,                   /* "wait"  */
    yWAND = 526,                   /* "wand"  */
    yWEAK0 = 527,                  /* "weak0"  */
    yWEAK1 = 528,                  /* "weak1"  */
    yWHILE = 529,                  /* "while"  */
    yWIRE = 530,                   /* "wire"  */
    yWITH__BRA = 531,              /* "with-then-["  */
    yWITH__CUR = 532,              /* "with-then-{"  */
    yWITH__ETC = 533,              /* "with"  */
    yWITH__LEX = 534,              /* "with-in-lex"  */
    yWITH__PAREN = 535,            /* "with-then-("  */
    yWOR = 536,                    /* "wor"  */
    yWREAL = 537,                  /* "wreal"  */
    yXNOR = 538,                   /* "xnor"  */
    yXOR = 539,                    /* "xor"  */
    yD_ACOS = 540,                 /* "$acos"  */
    yD_ACOSH = 541,                /* "$acosh"  */
    yD_ASIN = 542,                 /* "$asin"  */
    yD_ASINH = 543,                /* "$asinh"  */
    yD_ATAN = 544,                 /* "$atan"  */
    yD_ATAN2 = 545,                /* "$atan2"  */
    yD_ATANH = 546,                /* "$atanh"  */
    yD_BITS = 547,                 /* "$bits"  */
    yD_BITSTOREAL = 548,           /* "$bitstoreal"  */
    yD_BITSTOSHORTREAL = 549,      /* "$bitstoshortreal"  */
    yD_C = 550,                    /* "$c"  */
    yD_CAST = 551,                 /* "$cast"  */
    yD_CEIL = 552,                 /* "$ceil"  */
    yD_CHANGED = 553,              /* "$changed"  */
    yD_CHANGED_GCLK = 554,         /* "$changed_gclk"  */
    yD_CLOG2 = 555,                /* "$clog2"  */
    yD_COS = 556,                  /* "$cos"  */
    yD_COSH = 557,                 /* "$cosh"  */
    yD_COUNTBITS = 558,            /* "$countbits"  */
    yD_COUNTONES = 559,            /* "$countones"  */
    yD_DIMENSIONS = 560,           /* "$dimensions"  */
    yD_DISPLAY = 561,              /* "$display"  */
    yD_DISPLAYB = 562,             /* "$displayb"  */
    yD_DISPLAYH = 563,             /* "$displayh"  */
    yD_DISPLAYO = 564,             /* "$displayo"  */
    yD_DIST_CHI_SQUARE = 565,      /* "$dist_chi_square"  */
    yD_DIST_ERLANG = 566,          /* "$dist_erlang"  */
    yD_DIST_EXPONENTIAL = 567,     /* "$dist_exponential"  */
    yD_DIST_NORMAL = 568,          /* "$dist_normal"  */
    yD_DIST_POISSON = 569,         /* "$dist_poisson"  */
    yD_DIST_T = 570,               /* "$dist_t"  */
    yD_DIST_UNIFORM = 571,         /* "$dist_uniform"  */
    yD_DUMPALL = 572,              /* "$dumpall"  */
    yD_DUMPFILE = 573,             /* "$dumpfile"  */
    yD_DUMPFLUSH = 574,            /* "$dumpflush"  */
    yD_DUMPLIMIT = 575,            /* "$dumplimit"  */
    yD_DUMPOFF = 576,              /* "$dumpoff"  */
    yD_DUMPON = 577,               /* "$dumpon"  */
    yD_DUMPPORTS = 578,            /* "$dumpports"  */
    yD_DUMPVARS = 579,             /* "$dumpvars"  */
    yD_ERROR = 580,                /* "$error"  */
    yD_EXIT = 581,                 /* "$exit"  */
    yD_EXP = 582,                  /* "$exp"  */
    yD_FATAL = 583,                /* "$fatal"  */
    yD_FCLOSE = 584,               /* "$fclose"  */
    yD_FDISPLAY = 585,             /* "$fdisplay"  */
    yD_FDISPLAYB = 586,            /* "$fdisplayb"  */
    yD_FDISPLAYH = 587,            /* "$fdisplayh"  */
    yD_FDISPLAYO = 588,            /* "$fdisplayo"  */
    yD_FELL = 589,                 /* "$fell"  */
    yD_FELL_GCLK = 590,            /* "$fell_gclk"  */
    yD_FEOF = 591,                 /* "$feof"  */
    yD_FERROR = 592,               /* "$ferror"  */
    yD_FFLUSH = 593,               /* "$fflush"  */
    yD_FGETC = 594,                /* "$fgetc"  */
    yD_FGETS = 595,                /* "$fgets"  */
    yD_FINISH = 596,               /* "$finish"  */
    yD_FLOOR = 597,                /* "$floor"  */
    yD_FMONITOR = 598,             /* "$fmonitor"  */
    yD_FMONITORB = 599,            /* "$fmonitorb"  */
    yD_FMONITORH = 600,            /* "$fmonitorh"  */
    yD_FMONITORO = 601,            /* "$fmonitoro"  */
    yD_FOPEN = 602,                /* "$fopen"  */
    yD_FREAD = 603,                /* "$fread"  */
    yD_FREWIND = 604,              /* "$frewind"  */
    yD_FSCANF = 605,               /* "$fscanf"  */
    yD_FSEEK = 606,                /* "$fseek"  */
    yD_FSTROBE = 607,              /* "$fstrobe"  */
    yD_FSTROBEB = 608,             /* "$fstrobeb"  */
    yD_FSTROBEH = 609,             /* "$fstrobeh"  */
    yD_FSTROBEO = 610,             /* "$fstrobeo"  */
    yD_FTELL = 611,                /* "$ftell"  */
    yD_FWRITE = 612,               /* "$fwrite"  */
    yD_FWRITEB = 613,              /* "$fwriteb"  */
    yD_FWRITEH = 614,              /* "$fwriteh"  */
    yD_FWRITEO = 615,              /* "$fwriteo"  */
    yD_GLOBAL_CLOCK = 616,         /* "$global_clock"  */
    yD_HIGH = 617,                 /* "$high"  */
    yD_HYPOT = 618,                /* "$hypot"  */
    yD_INCREMENT = 619,            /* "$increment"  */
    yD_INFO = 620,                 /* "$info"  */
    yD_ISUNBOUNDED = 621,          /* "$isunbounded"  */
    yD_ISUNKNOWN = 622,            /* "$isunknown"  */
    yD_ITOR = 623,                 /* "$itor"  */
    yD_LEFT = 624,                 /* "$left"  */
    yD_LN = 625,                   /* "$ln"  */
    yD_LOG10 = 626,                /* "$log10"  */
    yD_LOW = 627,                  /* "$low"  */
    yD_MONITOR = 628,              /* "$monitor"  */
    yD_MONITORB = 629,             /* "$monitorb"  */
    yD_MONITORH = 630,             /* "$monitorh"  */
    yD_MONITORO = 631,             /* "$monitoro"  */
    yD_MONITOROFF = 632,           /* "$monitoroff"  */
    yD_MONITORON = 633,            /* "$monitoron"  */
    yD_ONEHOT = 634,               /* "$onehot"  */
    yD_ONEHOT0 = 635,              /* "$onehot0"  */
    yD_PAST = 636,                 /* "$past"  */
    yD_POW = 637,                  /* "$pow"  */
    yD_PRINTTIMESCALE = 638,       /* "$printtimescale"  */
    yD_RANDOM = 639,               /* "$random"  */
    yD_READMEMB = 640,             /* "$readmemb"  */
    yD_READMEMH = 641,             /* "$readmemh"  */
    yD_REALTIME = 642,             /* "$realtime"  */
    yD_REALTOBITS = 643,           /* "$realtobits"  */
    yD_REWIND = 644,               /* "$rewind"  */
    yD_RIGHT = 645,                /* "$right"  */
    yD_ROOT = 646,                 /* "$root"  */
    yD_ROSE = 647,                 /* "$rose"  */
    yD_ROSE_GCLK = 648,            /* "$rose_gclk"  */
    yD_RTOI = 649,                 /* "$rtoi"  */
    yD_SAMPLED = 650,              /* "$sampled"  */
    yD_SFORMAT = 651,              /* "$sformat"  */
    yD_SFORMATF = 652,             /* "$sformatf"  */
    yD_SHORTREALTOBITS = 653,      /* "$shortrealtobits"  */
    yD_SIGNED = 654,               /* "$signed"  */
    yD_SIN = 655,                  /* "$sin"  */
    yD_SINH = 656,                 /* "$sinh"  */
    yD_SIZE = 657,                 /* "$size"  */
    yD_SQRT = 658,                 /* "$sqrt"  */
    yD_SSCANF = 659,               /* "$sscanf"  */
    yD_STABLE = 660,               /* "$stable"  */
    yD_STABLE_GCLK = 661,          /* "$stable_gclk"  */
    yD_STACKTRACE = 662,           /* "$stacktrace"  */
    yD_STIME = 663,                /* "$stime"  */
    yD_STOP = 664,                 /* "$stop"  */
    yD_STROBE = 665,               /* "$strobe"  */
    yD_STROBEB = 666,              /* "$strobeb"  */
    yD_STROBEH = 667,              /* "$strobeh"  */
    yD_STROBEO = 668,              /* "$strobeo"  */
    yD_SWRITE = 669,               /* "$swrite"  */
    yD_SWRITEB = 670,              /* "$swriteb"  */
    yD_SWRITEH = 671,              /* "$swriteh"  */
    yD_SWRITEO = 672,              /* "$swriteo"  */
    yD_SYSTEM = 673,               /* "$system"  */
    yD_TAN = 674,                  /* "$tan"  */
    yD_TANH = 675,                 /* "$tanh"  */
    yD_TESTPLUSARGS = 676,         /* "$test$plusargs"  */
    yD_TIME = 677,                 /* "$time"  */
    yD_TIMEFORMAT = 678,           /* "$timeformat"  */
    yD_TIMEPRECISION = 679,        /* "$timeprecision"  */
    yD_TIMEUNIT = 680,             /* "$timeunit"  */
    yD_TYPENAME = 681,             /* "$typename"  */
    yD_UNGETC = 682,               /* "$ungetc"  */
    yD_UNIT = 683,                 /* "$unit"  */
    yD_UNPACKED_DIMENSIONS = 684,  /* "$unpacked_dimensions"  */
    yD_UNSIGNED = 685,             /* "$unsigned"  */
    yD_URANDOM = 686,              /* "$urandom"  */
    yD_URANDOM_RANGE = 687,        /* "$urandom_range"  */
    yD_VALUEPLUSARGS = 688,        /* "$value$plusargs"  */
    yD_WARNING = 689,              /* "$warning"  */
    yD_WRITE = 690,                /* "$write"  */
    yD_WRITEB = 691,               /* "$writeb"  */
    yD_WRITEH = 692,               /* "$writeh"  */
    yD_WRITEMEMB = 693,            /* "$writememb"  */
    yD_WRITEMEMH = 694,            /* "$writememh"  */
    yD_WRITEO = 695,               /* "$writeo"  */
    yVL_CLOCKER = 696,             /* "/\*verilator clocker*\/"  */
    yVL_CLOCK_ENABLE = 697,        /* "/\*verilator clock_enable*\/"  */
    yVL_COVERAGE_BLOCK_OFF = 698,  /* "/\*verilator coverage_block_off*\/"  */
    yVL_FORCEABLE = 699,           /* "/\*verilator forceable*\/"  */
    yVL_FULL_CASE = 700,           /* "/\*verilator full_case*\/"  */
    yVL_HIER_BLOCK = 701,          /* "/\*verilator hier_block*\/"  */
    yVL_INLINE_MODULE = 702,       /* "/\*verilator inline_module*\/"  */
    yVL_ISOLATE_ASSIGNMENTS = 703, /* "/\*verilator isolate_assignments*\/"  */
    yVL_NO_CLOCKER = 704,          /* "/\*verilator no_clocker*\/"  */
    yVL_NO_INLINE_MODULE = 705,    /* "/\*verilator no_inline_module*\/"  */
    yVL_NO_INLINE_TASK = 706,      /* "/\*verilator no_inline_task*\/"  */
    yVL_PARALLEL_CASE = 707,       /* "/\*verilator parallel_case*\/"  */
    yVL_PUBLIC = 708,              /* "/\*verilator public*\/"  */
    yVL_PUBLIC_FLAT = 709,         /* "/\*verilator public_flat*\/"  */
    yVL_PUBLIC_FLAT_ON = 710,      /* "/\*verilator public_flat_on*\/"  */
    yVL_PUBLIC_FLAT_RD = 711,      /* "/\*verilator public_flat_rd*\/"  */
    yVL_PUBLIC_FLAT_RD_ON = 712,   /* "/\*verilator public_flat_rd_on*\/"  */
    yVL_PUBLIC_FLAT_RW = 713,      /* "/\*verilator public_flat_rw*\/"  */
    yVL_PUBLIC_FLAT_RW_ON = 714,   /* "/\*verilator public_flat_rw_on*\/"  */
    yVL_PUBLIC_FLAT_RW_ON_SNS = 715, /* "/\*verilator public_flat_rw_on_sns*\/"  */
    yVL_PUBLIC_ON = 716,           /* "/\*verilator public_on*\/"  */
    yVL_PUBLIC_OFF = 717,          /* "/\*verilator public_off*\/"  */
    yVL_PUBLIC_MODULE = 718,       /* "/\*verilator public_module*\/"  */
    yVL_SC_BV = 719,               /* "/\*verilator sc_bv*\/"  */
    yVL_SFORMAT = 720,             /* "/\*verilator sformat*\/"  */
    yVL_SPLIT_VAR = 721,           /* "/\*verilator split_var*\/"  */
    yVL_TAG = 722,                 /* "/\*verilator tag*\/"  */
    yVL_TRACE_INIT_TASK = 723,     /* "/\*verilator trace_init_task*\/"  */
    yP_TICK = 724,                 /* "'"  */
    yP_TICKBRA = 725,              /* "'{"  */
    yP_OROR = 726,                 /* "||"  */
    yP_ANDAND = 727,               /* "&&"  */
    yP_NOR = 728,                  /* "~|"  */
    yP_XNOR = 729,                 /* "^~"  */
    yP_NAND = 730,                 /* "~&"  */
    yP_EQUAL = 731,                /* "=="  */
    yP_NOTEQUAL = 732,             /* "!="  */
    yP_CASEEQUAL = 733,            /* "==="  */
    yP_CASENOTEQUAL = 734,         /* "!=="  */
    yP_WILDEQUAL = 735,            /* "==?"  */
    yP_WILDNOTEQUAL = 736,         /* "!=?"  */
    yP_GTE = 737,                  /* ">="  */
    yP_LTE = 738,                  /* "<="  */
    yP_LTE__IGNORE = 739,          /* "<=-ignored"  */
    yP_SLEFT = 740,                /* "<<"  */
    yP_SRIGHT = 741,               /* ">>"  */
    yP_SSRIGHT = 742,              /* ">>>"  */
    yP_POW = 743,                  /* "**"  */
    yP_COLON__BEGIN = 744,         /* ":-begin"  */
    yP_COLON__FORK = 745,          /* ":-fork"  */
    yP_PAR__STRENGTH = 746,        /* "(-for-strength"  */
    yP_LTMINUSGT = 747,            /* "<->"  */
    yP_PLUSCOLON = 748,            /* "+:"  */
    yP_MINUSCOLON = 749,           /* "-:"  */
    yP_MINUSGT = 750,              /* "->"  */
    yP_MINUSGTGT = 751,            /* "->>"  */
    yP_EQGT = 752,                 /* "=>"  */
    yP_ASTGT = 753,                /* "*>"  */
    yP_ANDANDAND = 754,            /* "&&&"  */
    yP_POUNDPOUND = 755,           /* "##"  */
    yP_DOTSTAR = 756,              /* ".*"  */
    yP_ATAT = 757,                 /* "@@"  */
    yP_COLONCOLON = 758,           /* "::"  */
    yP_COLONEQ = 759,              /* ":="  */
    yP_COLONDIV = 760,             /* ":/"  */
    yP_ORMINUSGT = 761,            /* "|->"  */
    yP_OREQGT = 762,               /* "|=>"  */
    yP_BRASTAR = 763,              /* "[*"  */
    yP_BRAEQ = 764,                /* "[="  */
    yP_BRAMINUSGT = 765,           /* "[->"  */
    yP_PLUSPLUS = 766,             /* "++"  */
    yP_MINUSMINUS = 767,           /* "--"  */
    yP_PLUSEQ = 768,               /* "+="  */
    yP_MINUSEQ = 769,              /* "-="  */
    yP_TIMESEQ = 770,              /* "*="  */
    yP_DIVEQ = 771,                /* "/="  */
    yP_MODEQ = 772,                /* "%="  */
    yP_ANDEQ = 773,                /* "&="  */
    yP_OREQ = 774,                 /* "|="  */
    yP_XOREQ = 775,                /* "^="  */
    yP_SLEFTEQ = 776,              /* "<<="  */
    yP_SRIGHTEQ = 777,             /* ">>="  */
    yP_SSRIGHTEQ = 778,            /* ">>>="  */
    prUNARYARITH = 779,            /* prUNARYARITH  */
    prREDUCTION = 780,             /* prREDUCTION  */
    prNEGATION = 781,              /* prNEGATION  */
    prLOWER_THAN_ELSE = 782        /* prLOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_V3PARSEBISON_PRETMP_H_INCLUDED  */
