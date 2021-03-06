/***********************************************************************/
/*                                                                     */
/*  FILE        :dbsct.c                                               */
/*  DATE        :Wed, Apr 22, 2009                                     */
/*  DESCRIPTION :Setting of B,R Section                                */
/*  CPU TYPE    :SH7619                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  


#include "typedefine.h"

#pragma section $DSEC
static const struct {
    _UBYTE *rom_s;       /* Start address of the initialized data section in ROM */
    _UBYTE *rom_e;       /* End address of the initialized data section in ROM   */
    _UBYTE *ram_s;       /* Start address of the initialized data section in RAM */
}   DTBL[] = {
    { __sectop("D"), __secend("D"), __sectop("R") }
};
#pragma section $BSEC
static const struct {
    _UBYTE *b_s;         /* Start address of non-initialized data section */
    _UBYTE *b_e;         /* End address of non-initialized data section */
}   BTBL[] = {
    { __sectop("B"), __secend("B") }
};
