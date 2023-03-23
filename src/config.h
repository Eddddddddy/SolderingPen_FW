// Firmware version
#define VERSION "v3.15" //20230308
#define VERSION_NUM 315

// Type of MOSFET
#define P_MOSFET // P_MOSFET or N_MOSFET

// Type of OLED Controller
// #define SSD1306
#define SH1107
//typedef u8g2_uint_t u8g_uint_t;
#define SCREEN_OFFSET     3

// 旋转编码器的类型
#define ROTARY_TYPE       0     // 0: 2 increments/step; 1: 4 increments/step (default)
#define BUTTON_DELAY      5

// Pins
#define SENSOR_PIN        33    // tip temperature sense 烙铁头温感
#define VIN_PIN           26    // input voltage sense 检测输入电压
#define BUZZER_PIN        15    // buzzer 蜂鸣器
#define BUTTON_PIN        4     // switch 按键right
#define BUTTON_P_PIN      2     // 1 键位为“+”
#define BUTTON_N_PIN      14    // 2  键位为“-”
#define CONTROL_PIN       25    // heater MOSFET PWM control 加热器MOSFET PWM控制

// 默认温度控制值(推荐焊接温度:300~380°C)
#define TEMP_MIN          50    // 最小温度
#define TEMP_MAX          450   // 最大温度
#define TEMP_DEFAULT      260   // 默认温度
#define TEMP_SLEEP        150   // 休眠温度
#define TEMP_BOOST        50    // 升温步进
#define TEMP_STEP         10    // 旋转编码器温度变化步进

// 默认的T12烙铁头温度校准值
#define TEMP200           200   // temperature at ADC = 200 
#define TEMP280           280   // temperature at ADC = 280
#define TEMP360           360   // temperature at ADC = 360 
#define TEMPCHP           35    // chip temperature while calibration 校准时芯片温度
#define CALNUM            4     // Calibration point number
#define TIPMAX            8     // max number of tips
#define TIPNAMELENGTH     6     // max length of tip names (including termination)
#define TIPNAME           "T12  " // default tip name

// 默认的定时器值 (0 = 禁用)
#define TIME2SLEEP        60    // 几秒钟后进入睡眠模式
#define TIME2OFF          5     // 几分钟后就要关闭加热器了
#define TIMEOFBOOST       60    // 停留在加热模式多少秒
#define WAKEUP_THRESHOLD  50    // MPU 震动检测精度，数值越小，越灵敏

// Control values
#define TIME2SETTLE       2000  // 以微秒为单位的时间允许OpAmp输出稳定
#define SMOOTHIE          0.05  // OpAmp输出平滑系数 (1=无平滑; 默认：0.05)
#define PID_ENABLE        false // enable PID control
#define BEEP_ENABLE       false // enable/disable buzzer
#define MAINSCREEN        1     // type of main screen (0: big numbers; 1: more infos)

// EEPROM identifier
#define EEPROM_SIZE       1024

// MOSFET control definitions
#if defined(P_MOSFET)           // P-Channel MOSFET
#define HEATER_ON         255
#define HEATER_OFF        0
#define HEATER_PWM        255 - Output
#elif defined(N_MOSFET)         // N-Channel MOSFET
#define HEATER_ON         0
#define HEATER_OFF        255
#define HEATER_PWM        Output
#else
#error Wrong MOSFET type!
#endif

//Language
#define DEFAULT_LANGUAGE  0
#define CHINESE_FONT  u8g2_font_unifont_t_chinese3
// u8g2_font_unifont_t_chinese3
// u8g2_font_wqy16_t_gb2312
