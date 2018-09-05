#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum ukRoadSignsAlt.ukRoadSignsAlt
enum class EukRoadSignsAlt : uint8_t
{
	ukRoadSignsAlt__NewEnumerator1 = 0,
	ukRoadSignsAlt__NewEnumerator191 = 1,
	ukRoadSignsAlt__NewEnumerator192 = 2,
	ukRoadSignsAlt__NewEnumerator194 = 3,
	ukRoadSignsAlt__NewEnumerator193 = 4,
	ukRoadSignsAlt__NewEnumerator195 = 5,
	ukRoadSignsAlt__NewEnumerator189 = 6,
	ukRoadSignsAlt__NewEnumerator196 = 7,
	ukRoadSignsAlt__NewEnumerator2 = 8,
	ukRoadSignsAlt__NewEnumerator3 = 9,
	ukRoadSignsAlt__NewEnumerator4 = 10,
	ukRoadSignsAlt__NewEnumerator5 = 11,
	ukRoadSignsAlt__NewEnumerator7 = 12,
	ukRoadSignsAlt__NewEnumerator190 = 13,
	ukRoadSignsAlt__NewEnumerator8 = 14,
	ukRoadSignsAlt__NewEnumerator6 = 15,
	ukRoadSignsAlt__NewEnumerator9 = 16,
	ukRoadSignsAlt__NewEnumerator10 = 17,
	ukRoadSignsAlt__NewEnumerator11 = 18,
	ukRoadSignsAlt__NewEnumerator12 = 19,
	ukRoadSignsAlt__NewEnumerator13 = 20,
	ukRoadSignsAlt__NewEnumerator14 = 21,
	ukRoadSignsAlt__NewEnumerator15 = 22,
	ukRoadSignsAlt__NewEnumerator16 = 23,
	ukRoadSignsAlt__NewEnumerator17 = 24,
	ukRoadSignsAlt__NewEnumerator18 = 25,
	ukRoadSignsAlt__NewEnumerator19 = 26,
	ukRoadSignsAlt__NewEnumerator20 = 27,
	ukRoadSignsAlt__NewEnumerator21 = 28,
	ukRoadSignsAlt__NewEnumerator22 = 29,
	ukRoadSignsAlt__NewEnumerator23 = 30,
	ukRoadSignsAlt__NewEnumerator24 = 31,
	ukRoadSignsAlt__NewEnumerator25 = 32,
	ukRoadSignsAlt__NewEnumerator26 = 33,
	ukRoadSignsAlt__NewEnumerator27 = 34,
	ukRoadSignsAlt__NewEnumerator28 = 35,
	ukRoadSignsAlt__NewEnumerator29 = 36,
	ukRoadSignsAlt__NewEnumerator30 = 37,
	ukRoadSignsAlt__NewEnumerator31 = 38,
	ukRoadSignsAlt__NewEnumerator39 = 39,
	ukRoadSignsAlt__NewEnumerator33 = 40,
	ukRoadSignsAlt__NewEnumerator32 = 41,
	ukRoadSignsAlt__NewEnumerator34 = 42,
	ukRoadSignsAlt__NewEnumerator35 = 43,
	ukRoadSignsAlt__NewEnumerator36 = 44,
	ukRoadSignsAlt__NewEnumerator37 = 45,
	ukRoadSignsAlt__NewEnumerator38 = 46,
	ukRoadSignsAlt__NewEnumerator40 = 47,
	ukRoadSignsAlt__NewEnumerator41 = 48,
	ukRoadSignsAlt__NewEnumerator42 = 49,
	ukRoadSignsAlt__NewEnumerator43 = 50,
	ukRoadSignsAlt__NewEnumerator44 = 51,
	ukRoadSignsAlt__NewEnumerator45 = 52,
	ukRoadSignsAlt__NewEnumerator46 = 53,
	ukRoadSignsAlt__NewEnumerator47 = 54,
	ukRoadSignsAlt__NewEnumerator48 = 55,
	ukRoadSignsAlt__NewEnumerator49 = 56,
	ukRoadSignsAlt__NewEnumerator50 = 57,
	ukRoadSignsAlt__NewEnumerator51 = 58,
	ukRoadSignsAlt__NewEnumerator52 = 59,
	ukRoadSignsAlt__NewEnumerator53 = 60,
	ukRoadSignsAlt__NewEnumerator54 = 61,
	ukRoadSignsAlt__NewEnumerator55 = 62,
	ukRoadSignsAlt__NewEnumerator56 = 63,
	ukRoadSignsAlt__NewEnumerator57 = 64,
	ukRoadSignsAlt__NewEnumerator58 = 65,
	ukRoadSignsAlt__NewEnumerator59 = 66,
	ukRoadSignsAlt__NewEnumerator60 = 67,
	ukRoadSignsAlt__NewEnumerator61 = 68,
	ukRoadSignsAlt__NewEnumerator62 = 69,
	ukRoadSignsAlt__NewEnumerator63 = 70,
	ukRoadSignsAlt__NewEnumerator64 = 71,
	ukRoadSignsAlt__NewEnumerator65 = 72,
	ukRoadSignsAlt__NewEnumerator66 = 73,
	ukRoadSignsAlt__NewEnumerator67 = 74,
	ukRoadSignsAlt__NewEnumerator68 = 75,
	ukRoadSignsAlt__NewEnumerator69 = 76,
	ukRoadSignsAlt__NewEnumerator70 = 77,
	ukRoadSignsAlt__NewEnumerator71 = 78,
	ukRoadSignsAlt__NewEnumerator72 = 79,
	ukRoadSignsAlt__NewEnumerator73 = 80,
	ukRoadSignsAlt__NewEnumerator74 = 81,
	ukRoadSignsAlt__NewEnumerator75 = 82,
	ukRoadSignsAlt__NewEnumerator76 = 83,
	ukRoadSignsAlt__NewEnumerator77 = 84,
	ukRoadSignsAlt__NewEnumerator78 = 85,
	ukRoadSignsAlt__NewEnumerator79 = 86,
	ukRoadSignsAlt__NewEnumerator80 = 87,
	ukRoadSignsAlt__NewEnumerator81 = 88,
	ukRoadSignsAlt__NewEnumerator105 = 89,
	ukRoadSignsAlt__NewEnumerator82 = 90,
	ukRoadSignsAlt__NewEnumerator83 = 91,
	ukRoadSignsAlt__NewEnumerator84 = 92,
	ukRoadSignsAlt__NewEnumerator85 = 93,
	ukRoadSignsAlt__NewEnumerator86 = 94,
	ukRoadSignsAlt__NewEnumerator87 = 95,
	ukRoadSignsAlt__NewEnumerator88 = 96,
	ukRoadSignsAlt__NewEnumerator89 = 97,
	ukRoadSignsAlt__NewEnumerator90 = 98,
	ukRoadSignsAlt__NewEnumerator91 = 99,
	ukRoadSignsAlt__NewEnumerator92 = 100,
	ukRoadSignsAlt__NewEnumerator93 = 101,
	ukRoadSignsAlt__NewEnumerator94 = 102,
	ukRoadSignsAlt__NewEnumerator95 = 103,
	ukRoadSignsAlt__NewEnumerator96 = 104,
	ukRoadSignsAlt__NewEnumerator97 = 105,
	ukRoadSignsAlt__NewEnumerator98 = 106,
	ukRoadSignsAlt__NewEnumerator99 = 107,
	ukRoadSignsAlt__NewEnumerator100 = 108,
	ukRoadSignsAlt__NewEnumerator101 = 109,
	ukRoadSignsAlt__NewEnumerator102 = 110,
	ukRoadSignsAlt__NewEnumerator103 = 111,
	ukRoadSignsAlt__NewEnumerator104 = 112,
	ukRoadSignsAlt__NewEnumerator106 = 113,
	ukRoadSignsAlt__NewEnumerator107 = 114,
	ukRoadSignsAlt__NewEnumerator108 = 115,
	ukRoadSignsAlt__NewEnumerator109 = 116,
	ukRoadSignsAlt__NewEnumerator110 = 117,
	ukRoadSignsAlt__NewEnumerator111 = 118,
	ukRoadSignsAlt__NewEnumerator112 = 119,
	ukRoadSignsAlt__NewEnumerator113 = 120,
	ukRoadSignsAlt__NewEnumerator114 = 121,
	ukRoadSignsAlt__NewEnumerator115 = 122,
	ukRoadSignsAlt__NewEnumerator116 = 123,
	ukRoadSignsAlt__NewEnumerator117 = 124,
	ukRoadSignsAlt__NewEnumerator118 = 125,
	ukRoadSignsAlt__NewEnumerator134 = 126,
	ukRoadSignsAlt__NewEnumerator119 = 127,
	ukRoadSignsAlt__NewEnumerator120 = 128,
	ukRoadSignsAlt__NewEnumerator121 = 129,
	ukRoadSignsAlt__NewEnumerator122 = 130,
	ukRoadSignsAlt__NewEnumerator123 = 131,
	ukRoadSignsAlt__NewEnumerator124 = 132,
	ukRoadSignsAlt__NewEnumerator125 = 133,
	ukRoadSignsAlt__NewEnumerator126 = 134,
	ukRoadSignsAlt__NewEnumerator127 = 135,
	ukRoadSignsAlt__NewEnumerator128 = 136,
	ukRoadSignsAlt__NewEnumerator129 = 137,
	ukRoadSignsAlt__NewEnumerator130 = 138,
	ukRoadSignsAlt__NewEnumerator135 = 139,
	ukRoadSignsAlt__NewEnumerator131 = 140,
	ukRoadSignsAlt__NewEnumerator132 = 141,
	ukRoadSignsAlt__NewEnumerator133 = 142,
	ukRoadSignsAlt__NewEnumerator137 = 143,
	ukRoadSignsAlt__NewEnumerator136 = 144,
	ukRoadSignsAlt__NewEnumerator139 = 145,
	ukRoadSignsAlt__NewEnumerator138 = 146,
	ukRoadSignsAlt__NewEnumerator142 = 147,
	ukRoadSignsAlt__NewEnumerator141 = 148,
	ukRoadSignsAlt__NewEnumerator140 = 149,
	ukRoadSignsAlt__NewEnumerator143 = 150,
	ukRoadSignsAlt__NewEnumerator144 = 151,
	ukRoadSignsAlt__NewEnumerator175 = 152,
	ukRoadSignsAlt__NewEnumerator145 = 153,
	ukRoadSignsAlt__NewEnumerator146 = 154,
	ukRoadSignsAlt__NewEnumerator147 = 155,
	ukRoadSignsAlt__NewEnumerator176 = 156,
	ukRoadSignsAlt__NewEnumerator148 = 157,
	ukRoadSignsAlt__NewEnumerator160 = 158,
	ukRoadSignsAlt__NewEnumerator154 = 159,
	ukRoadSignsAlt__NewEnumerator151 = 160,
	ukRoadSignsAlt__NewEnumerator152 = 161,
	ukRoadSignsAlt__NewEnumerator153 = 162,
	ukRoadSignsAlt__NewEnumerator155 = 163,
	ukRoadSignsAlt__NewEnumerator156 = 164,
	ukRoadSignsAlt__NewEnumerator157 = 165,
	ukRoadSignsAlt__NewEnumerator159 = 166,
	ukRoadSignsAlt__NewEnumerator158 = 167,
	ukRoadSignsAlt__NewEnumerator161 = 168,
	ukRoadSignsAlt__NewEnumerator162 = 169,
	ukRoadSignsAlt__NewEnumerator163 = 170,
	ukRoadSignsAlt__NewEnumerator164 = 171,
	ukRoadSignsAlt__NewEnumerator165 = 172,
	ukRoadSignsAlt__NewEnumerator166 = 173,
	ukRoadSignsAlt__NewEnumerator167 = 174,
	ukRoadSignsAlt__NewEnumerator168 = 175,
	ukRoadSignsAlt__NewEnumerator169 = 176,
	ukRoadSignsAlt__NewEnumerator197 = 177,
	ukRoadSignsAlt__NewEnumerator198 = 178,
	ukRoadSignsAlt__NewEnumerator199 = 179,
	ukRoadSignsAlt__NewEnumerator200 = 180,
	ukRoadSignsAlt__NewEnumerator201 = 181,
	ukRoadSignsAlt__NewEnumerator202 = 182,
	ukRoadSignsAlt__NewEnumerator203 = 183,
	ukRoadSignsAlt__NewEnumerator204 = 184,
	ukRoadSignsAlt__NewEnumerator205 = 185,
	ukRoadSignsAlt__NewEnumerator206 = 186,
	ukRoadSignsAlt__NewEnumerator207 = 187,
	ukRoadSignsAlt__NewEnumerator208 = 188,
	ukRoadSignsAlt__NewEnumerator209 = 189,
	ukRoadSignsAlt__NewEnumerator210 = 190,
	ukRoadSignsAlt__NewEnumerator211 = 191,
	ukRoadSignsAlt__ukRoadSignsAlt_MAX = 192
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
