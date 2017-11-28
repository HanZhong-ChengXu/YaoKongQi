#ifndef __LED_H
#define __LED_H

#include "sys.h"

#define LED_CPU PAout(11)// PA11

#define SouZiDong PBin(13)// PC13
#define FuWei PBin(14)// PC13
#define QiSheng PBin(15)// PC13
#define XiaJiang PAin(8)// PC13

#define ShiNeng PAin(11)// PC13
#define JiTing PBin(12)// PC13
#define YaoGan_Key PAin(1)// PC13
extern void Init_LEDpin(void);


#endif


