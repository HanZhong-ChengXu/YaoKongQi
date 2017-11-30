#ifndef __LED_H
#define __LED_H

#include "sys.h"

#define LED_CPU PAout(11)// PA11

#define XingZou_OR_ShengJiang PBin(3)// PC13
#define ZhiXing_OR_XieXing PBin(5)// PC13
#define XiaJiang PBin(7)// PC13
#define JiTing PAin(12)// PC13

#define KuaiSu_OR_ManSu PBin(4)// PC13
#define QiSheng PBin(6)// PC13
#define YaoGan_Key PAin(1)// PC13
extern void Init_LEDpin(void);

#endif


