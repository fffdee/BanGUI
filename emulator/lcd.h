#ifndef __LCD_H__
#define __LCD_H__

#include<stdint.h>

#define LCD_HEIGHT 160
#define LCD_WIDTH 128


typedef struct 
{
    void (*Init)(void);
    void (*DeInit)(void);
    void (*DrawPoint)(uint32_t,uint16_t,uint16_t);
    void (*Clear)(uint32_t);
    uint8_t (*Loop)(uint8_t*);

}BG_SIM_LCD;


extern BG_SIM_LCD BG_SIM_Lcd;



#endif