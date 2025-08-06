# pragma once
# include <Arduino.h>
# define 引脚设定(pin,mode) pinMode(pin,mode)
# define 开关灯(pin,mode) digitalWrite(pin,mode)
# define 读取模拟引脚(pin) analogRead(pin)
# define 读取数字引脚(pin) digitaRead(pin)
# define 延时毫秒(ms) delay(ms)



# define 开 HIGH
# define 关 LOW
# define 出 OUTPUT
# define 入 INPUT 
# define 入并且下拉 INPUT_PULLUP 
