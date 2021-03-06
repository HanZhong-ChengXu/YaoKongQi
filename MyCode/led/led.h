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

#define DianYuanDeng 		PAout(8)// PC13
#define YaoKongJinZhiDeng 	PBout(15)// PC13
#define XingZouDeng 		PBout(14)// PC13
#define KuaiSuDeng 			PBout(13)// PC13
#define ZhiXingDeng 		PBout(12)// PC13
#define TongXunZhiShiDeng 	PBout(11)// PC13
#define GuZhangZhiShiDeng 	PBout(10)// PC13
#define ShengJiangDeng 		PBout(1)// PC13
#define ManSuDeng 			PBout(0)// PC13
#define XieXingDeng 		PAout(7)// PC13
extern void Init_LEDpin(void);

#endif


