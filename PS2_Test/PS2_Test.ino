//***************************************************************//
//  Author       : RedFox                                        //
//  Website      : lamchucongnghe.com                            //
//  Fanpage      : fb.com//lamchucongnghevn                      //
//  Shop sendo   : sendo.vn/shop/lamchucongnghe_com              //
//  Shop shopee  : shopee.vn/lamchucongnghe                      //
//***************************************************************//

#include <PS2X_lib.h>

#define PS2_DAT       6       // Data Pin
#define PS2_CMD       7       // Command Pin
#define PS2_CS        8       // Attention Pin
#define PS2_CLK       9       // Clock Pin

PS2X ps2;                     // create PS2 Controller Class

void setup() {
  Serial.begin(9600);
  // Khởi tạo kết nối tay PS2
  ps2.config_gamepad(PS2_CLK, PS2_CMD, PS2_CS, PS2_DAT);
}

void loop() {
  // Bắt đầu đọc dữ liệu nhấn nút từ tay PS2
  ps2.read_gamepad();

  if(ps2.ButtonPressed(PSB_PAD_UP))
    Serial.println("Button UP Press");
  if(ps2.ButtonPressed(PSB_PAD_LEFT))
    Serial.println("Button LEFT Press");
  if(ps2.ButtonPressed(PSB_PAD_RIGHT))
    Serial.println("Button RIGHT Press");
  if(ps2.ButtonPressed(PSB_PAD_DOWN))
    Serial.println("Button DOWN Press");
    
  if(ps2.ButtonPressed(PSB_BLUE))
    Serial.println("Button TRIANGLE Press");
  if(ps2.ButtonPressed(PSB_PINK))
    Serial.println("Button CROSS Press");
  if(ps2.ButtonPressed(PSB_RED))
    Serial.println("Button CIRCLE Press");
  if(ps2.ButtonPressed(PSB_GREEN))
    Serial.println("Button SQUARE Press");
  if(ps2.ButtonPressed(PSB_L1))
    Serial.println("Button L1 Press");
  if(ps2.ButtonPressed(PSB_L2))
    Serial.println("Button L2 Press");
  if(ps2.ButtonPressed(PSB_R1))
    Serial.println("Button R1 Press");
  if(ps2.ButtonPressed(PSB_R2))
    Serial.println("Button R2 Press");
}
