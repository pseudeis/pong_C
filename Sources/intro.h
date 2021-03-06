/*
 * intro.h
 *
 *  Created on: Dec 1, 2017
 *      Author: Makhai
 */

#ifndef INTRO_H_
#define INTRO_H_

#include "cpu.h"
#include "events.h"
//#include "SCI.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#define HAUTEUR (24)
#define LARGEUR (80)
#define HAUTEURP (2400)
#define LARGEURP (8000)
#define SCORE1 (20)
#define SCORE2 (72)

typedef struct {
	unsigned char x;
	unsigned char y;
	unsigned char len;
	unsigned char score;
} T_obj;

typedef struct {
	unsigned char x;
	unsigned char y;
	signed short precx;
	signed short precy;
	signed short spx;
	signed short spy;
	unsigned char skin;
} T_balle;

void logo(void);
void init_decor(void);
void compte(T_obj* compt);
void decompte(T_obj* compt);

#endif /* INTRO_H_ */
