#pragma once
#ifndef ___BitSet

#define ___BitSet



typedef unsigned long BitSet;



#define BitBitSetNull     (BitSet)0

#define BitSetBits           32

#define Set0f(no)  ((BitSet)1 <<(no))



int isMemner(BitSet s, int n);



void Add(BitSet *s, int n);



void Remove(BitSet *s, int n);



int Size(BitSet s);



void Print(BitSet s);



void Println(BitSet s);



#endif


