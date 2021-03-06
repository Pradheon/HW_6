/*
	Name: Joshan Rai
	Class: CS110
	Assign.: Homework #06

	Synopsis: 2 constant 2D arrays holding ASCII characters.
*/

#include <stdio.h>

int main() {
	char c[15][60] = {
		{"============================================================"},
		{"||                                                        ||"},
		{"||                (`  ).                   _              ||"},
		{"||              (     ).              .:(`  )`.           ||"},
		{"||             _(       '`.          :(   .    )          ||"},
		{"||         .=(`(      .   )     .--  `.  (    ) )         ||"},
		{"||        ((    (..__.:'-'   .+(   )   ` _`  ) )          ||"},
		{"|| `.     `(       ) )       (   .  )     (   )  ._       ||"},
		{"||   )      ` __.:'   )     (   (   ))     `-'.-(`  )     ||"},
		{"|| )  )  ( )       --'       `- __.'         :(      ))   ||"},
		{"|| .-'  (_.'          .')                    `(    )  ))  ||"},
		{"||                   (_  )                     ` __.:'    ||"},
		{"||                                                        ||"},
		{"||                                                        ||"},
		{"============================================================"}
	};
	char b[3][5] = {
		{"+---+"},
		{"| X |"},
		{"+---+"}
	};

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 60; j++) {
			printf("%c", c[i][j]);
		}
		printf("\n");
	}
	for (int k = 0; k < 3; k++) {
		for (int f = 0; f < 5; f++) {
			printf("%c", b[k][f]);
		}
		printf("\n");
	}
}